// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PETGOALCONVERSIONEVENTTRACKER_H
#define PETGOALCONVERSIONEVENTTRACKER_H

@class NSString;


#import "PETEventTracker.h"

@interface PETGoalConversionEventTracker : PETEventTracker

@property (readonly, nonatomic) NSString *conversionEvent; // ivar: _conversionEvent
@property (readonly, nonatomic) NSString *opportunityEvent; // ivar: _opportunityEvent


-(id)_keyMetadataForEvent:(id)arg0 ;
-(id)initWithFeatureId:(id)arg0 opportunityEvent:(id)arg1 conversionEvent:(id)arg2 registerProperties:(id)arg3 ;
-(id)initWithFeatureId:(id)arg0 opportunityEvent:(id)arg1 conversionEvent:(id)arg2 registerProperties:(id)arg3 propertySubsets:(id)arg4 ;
-(void)_logValue:(id)arg0 forEvent:(id)arg1 stringifiedProperties:(id)arg2 metaData:(id)arg3 ;
-(void)trackGoalConversionEventWithPropertyValues:(id)arg0 ;
-(void)trackGoalOpportunityEventWithConversion:(BOOL)arg0 propertyValues:(id)arg1 ;
-(void)trackGoalOpportunityEventWithPropertyValues:(id)arg0 ;


@end


#endif