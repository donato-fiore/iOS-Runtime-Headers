// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSIRIMEMORYREFERENCERESOLUTIONEVENT_H
#define BMSIRIMEMORYREFERENCERESOLUTIONEVENT_H

@class NSString, NSDictionary;
@protocol BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMSiriMemoryReferenceResolutionEvent : NSObject <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *entitiesByEntityID; // ivar: _entitiesByEntityID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithVersion:(id)arg0 entityDict:(id)arg1 ;
-(id)proto;
-(id)serialize;


@end


#endif