// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMICROLOCATIONNUMDEVICESPERTECHNOLOGY_H
#define BMMICROLOCATIONNUMDEVICESPERTECHNOLOGY_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMMicroLocationNumDevicesPerTechnology : NSObject <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int numDevices; // ivar: _numDevices
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *technology; // ivar: _technology


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithTechnology:(id)arg0 numDevices:(unsigned int)arg1 ;
-(id)proto;
-(id)serialize;


@end


#endif