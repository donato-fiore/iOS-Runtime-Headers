// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFEVENTTRIGGGERBUILDERTIMEINTERFACE_H
#define HFEVENTTRIGGGERBUILDERTIMEINTERFACE_H

@class NSString, HFEventBuilder<HFTimeEventBuilder>, NSArray, NSTimeZone;
@protocol HFConcreteTimeTriggerBuilderLikeObject;


#import "HFEventTriggerBuilderInterface.h"

@interface HFEventTrigggerBuilderTimeInterface : HFEventTriggerBuilderInterface <HFConcreteTimeTriggerBuilderLikeObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder; // ivar: _eventBuilder
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *recurrences; // ivar: _recurrences
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: timeZone


-(void)copyCurrentStateFromTriggerBuilder:(id)arg0 ;
-(void)triggerEnabledStateDidChange:(BOOL)arg0 ;


@end


#endif