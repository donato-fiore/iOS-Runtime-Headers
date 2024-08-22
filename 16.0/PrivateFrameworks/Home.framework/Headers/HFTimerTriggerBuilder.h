// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTIMERTRIGGERBUILDER_H
#define HFTIMERTRIGGERBUILDER_H

@class HFEventBuilder<HFTimeEventBuilder>, NSArray, NSTimeZone;
@protocol HFConcreteTimeTriggerBuilderLikeObject;


#import "HFTriggerBuilder.h"

@interface HFTimerTriggerBuilder : HFTriggerBuilder

@property (retain, nonatomic) HFTriggerBuilder *concreteTriggerBuilder; // ivar: _concreteTriggerBuilder
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (nonatomic) NSUInteger preferredHomeKitObjectType; // ivar: _preferredHomeKitObjectType
@property (copy, nonatomic) NSArray *recurrences;
@property (retain, nonatomic) NSObject<HFConcreteTimeTriggerBuilderLikeObject> *timeInterface; // ivar: _timeInterface
@property (copy, nonatomic) NSTimeZone *timeZone;


-(BOOL)_currentStateRequiresEventBasedTimeTriggers;
-(BOOL)_supportsEventBasedTimeTriggers;
-(BOOL)supportsConditions;
-(BOOL)supportsEndEvents;
-(id)_performValidation;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)compareToObject:(id)arg0 ;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 context:(id)arg2 ;
-(id)naturalLanguageDetailsWithOptions:(id)arg0 ;
-(id)naturalLanguageNameOfType:(NSUInteger)arg0 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;
-(void)_createConcreteTriggerBuilder;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif