// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFTIMERBASEDTIMETRIGGERBUILDER_H
#define HFTIMERBASEDTIMETRIGGERBUILDER_H

@class NSString, HFEventBuilder<HFTimeEventBuilder>, NSArray, NSTimeZone;
@protocol HFConcreteTimeTriggerBuilderLikeObject;


#import "HFTriggerBuilder.h"

@interface HFTimerBasedTimeTriggerBuilder : HFTriggerBuilder <HFConcreteTimeTriggerBuilderLikeObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder; // ivar: eventBuilder
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *recurrences; // ivar: recurrences
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: timeZone


-(id)_updateRecurrences;
-(id)_updateTimeZone;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 context:(id)arg2 ;
-(void)_setupWithExistingTrigger:(id)arg0 ;
-(void)copyCurrentStateFromTriggerBuilder:(id)arg0 ;
-(void)triggerEnabledStateDidChange:(BOOL)arg0 ;


@end


#endif