// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTRIGGEREDAUTOMATIONEVENT_H
#define WFTRIGGEREDAUTOMATIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFTriggeredAutomationEvent : WFEvent

@property (nonatomic) unsigned int batchCount; // ivar: _batchCount
@property (nonatomic) unsigned int batchDroppedCount; // ivar: _batchDroppedCount
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL requiredRuntimeConfirmation; // ivar: _requiredRuntimeConfirmation
@property (copy, nonatomic) NSString *triggerType; // ivar: _triggerType


+(Class)codableEventClass;
+(id)serializablePropertyTransformers;


@end


#endif