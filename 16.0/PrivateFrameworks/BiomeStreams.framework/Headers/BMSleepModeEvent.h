// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSLEEPMODEEVENT_H
#define BMSLEEPMODEEVENT_H

@class NSString, NSDate;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMSleepModeEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expectedEndDate; // ivar: _expectedEndDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger sleepModeChangeReason; // ivar: _sleepModeChangeReason
@property (readonly, nonatomic) NSUInteger sleepModeState; // ivar: _sleepModeState
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSleepModeState:(NSUInteger)arg0 ;
-(id)initWithSleepModeState:(NSUInteger)arg0 sleepModeChangeReason:(NSUInteger)arg1 expectedEndDate:(id)arg2 ;
-(id)proto;
-(id)serialize;


@end


#endif