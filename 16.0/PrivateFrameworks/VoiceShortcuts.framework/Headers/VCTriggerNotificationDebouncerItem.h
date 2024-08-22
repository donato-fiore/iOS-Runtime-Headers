// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCTRIGGERNOTIFICATIONDEBOUNCERITEM_H
#define VCTRIGGERNOTIFICATIONDEBOUNCERITEM_H

@class WFConfiguredTrigger, WFDebouncer, WFWorkflowReference, NSSet;

#import <Foundation/Foundation.h>


@interface VCTriggerNotificationDebouncerItem : NSObject

@property (readonly, nonatomic) WFConfiguredTrigger *configuredTrigger; // ivar: _configuredTrigger
@property (readonly, nonatomic) WFDebouncer *debouncer; // ivar: _debouncer
@property (readonly, nonatomic) WFWorkflowReference *reference; // ivar: _reference
@property (retain, nonatomic) NSSet *triggerEventIDs; // ivar: _triggerEventIDs


-(id)description;
-(id)initWithConfiguredTrigger:(id)arg0 reference:(id)arg1 triggerEventIDs:(id)arg2 debouncer:(id)arg3 ;


@end


#endif