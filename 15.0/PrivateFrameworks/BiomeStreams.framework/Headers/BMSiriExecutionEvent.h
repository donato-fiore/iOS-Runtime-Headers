// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSIRIEXECUTIONEVENT_H
#define BMSIRIEXECUTIONEVENT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"

@interface BMSiriExecutionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *intentName; // ivar: _intentName
@property (readonly, copy, nonatomic) NSString *slotValue; // ivar: _slotValue
@property (readonly, copy, nonatomic) NSString *statusReason; // ivar: _statusReason
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *taskId; // ivar: _taskId
@property (readonly, nonatomic) NSUInteger taskStep; // ivar: _taskStep


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithTaskID:(id)arg0 taskStep:(NSUInteger)arg1 statusReason:(id)arg2 slotValue:(id)arg3 intentName:(id)arg4 ;
-(id)proto;
-(id)serialize;


@end


#endif