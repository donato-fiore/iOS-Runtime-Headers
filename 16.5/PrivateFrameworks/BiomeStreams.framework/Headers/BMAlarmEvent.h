// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMALARMEVENT_H
#define BMALARMEVENT_H

@class NSUUID, NSString;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMAlarmEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) NSUUID *alarmID; // ivar: _alarmID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSleepAlarm; // ivar: _isSleepAlarm
@property (readonly, nonatomic) NSUInteger lastEventType; // ivar: _lastEventType
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithEventType:(NSUInteger)arg0 alarmID:(id)arg1 isSleepAlarm:(BOOL)arg2 ;
-(id)initWithEventType:(NSUInteger)arg0 lastEventType:(NSUInteger)arg1 alarmID:(id)arg2 isSleepAlarm:(BOOL)arg3 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif