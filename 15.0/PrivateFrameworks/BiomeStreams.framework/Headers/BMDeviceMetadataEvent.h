// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDEVICEMETADATAEVENT_H
#define BMDEVICEMETADATAEVENT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMDeviceMetadataEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, copy, nonatomic) NSString *build; // ivar: _build
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger platform; // ivar: _platform
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithName:(id)arg0 build:(id)arg1 platform:(NSInteger)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif