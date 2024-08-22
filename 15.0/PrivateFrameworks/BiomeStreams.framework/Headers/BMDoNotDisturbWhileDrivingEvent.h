// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDONOTDISTURBWHILEDRIVINGEVENT_H
#define BMDONOTDISTURBWHILEDRIVINGEVENT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMDoNotDisturbWhileDrivingEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isStart; // ivar: _isStart
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithReason:(NSUInteger)arg0 isStart:(BOOL)arg1 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif