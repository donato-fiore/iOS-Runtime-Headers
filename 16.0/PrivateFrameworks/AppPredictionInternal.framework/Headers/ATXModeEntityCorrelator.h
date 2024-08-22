// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEENTITYCORRELATOR_H
#define ATXMODEENTITYCORRELATOR_H

@class ATXInformationStore;
@protocol ATXModeEntityEventProviderProtocol;

#import <Foundation/Foundation.h>


@interface ATXModeEntityCorrelator : NSObject {
    id<ATXModeEntityEventProviderProtocol> *_modeEventProvider;
    id<ATXModeEntityEventProviderProtocol> *_entityEventProvider;
    ATXInformationStore *_informationStore;
}




-(BOOL)eventOccurredWhileInModeForAggregationEvent:(id)arg0 modeTransitionEvent:(id)arg1 ;
-(NSInteger)daysSinceDate:(id)arg0 today:(id)arg1 ;
-(id)entityFeaturesForModeEntityScoring;
-(id)entityFeaturesForWidgetScoring;
-(id)featuresForEntitiesFromCompleteCorrelatorState:(id)arg0 ;
-(id)initWithModeEventProvider:(id)arg0 entityEventProvider:(id)arg1 ;
-(id)mergedPublisher;
-(id)zerosArray;
-(void)populateGlobalOccurencesForAllWidgetsWithWidgetModeEventProvider:(id)arg0 correlatorState:(id)arg1 ;
-(void)trackNewModeTransitionEvent:(id)arg0 correlatorState:(id)arg1 ;
-(void)updateDateBasedHistogram:(id)arg0 aggregationEvent:(id)arg1 today:(id)arg2 ;
-(void)updateInternalStateForGlobalOccurrenceEvent:(id)arg0 correlatorState:(id)arg1 ;
-(void)updateInternalStateForLocalOccurrenceEvent:(id)arg0 correlatorState:(id)arg1 ;


@end


#endif