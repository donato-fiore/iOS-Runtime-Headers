// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXANCHORMODELOFFLINEDATAHARVESTER_H
#define ATXANCHORMODELOFFLINEDATAHARVESTER_H

@class NSArray, NSUUID;

#import <Foundation/Foundation.h>

#import "ATXAnchorModelEventFeaturizer.h"

@interface ATXAnchorModelOfflineDataHarvester : NSObject {
    NSArray *_anchorsToCollect;
    ATXAnchorModelEventFeaturizer *_eventFeaturizer;
    NSUUID *_userId;
}




+(id)actionIdentifiersFromActionsInMessage:(id)arg0 ;
+(id)bundleIdsFromAppLaunchesInMessage:(id)arg0 ;
+(id)getSamplingGroupForDataCollection;
+(id)getUserUUIDForDataCollection;
+(void)resetSamplingGroupAssignmentForUser;
-(id)allInstalledAppsKnownToSpringBoard;
-(id)fetchAnchorEvents:(id)arg0 ;
-(id)fetchEventsAfterAnchorOccurrenceDate:(id)arg0 withDuetDataProviderClass:(Class)arg1 limit:(NSUInteger)arg2 maxSecondsBeforeAnchor:(NSInteger)arg3 maxSecondsAfterAnchor:(NSInteger)arg4 ;
-(id)init;
-(id)initWithSamplingGroup:(id)arg0 userId:(id)arg1 ;
-(id)processAnchorOccurrence:(id)arg0 anchor:(id)arg1 ;
-(void)addActionEventsFromAnchorOccurrenceDate:(id)arg0 toMessage:(id)arg1 ;
-(void)addAppLaunchEventsFromAnchorOccurrenceDate:(id)arg0 toMessage:(id)arg1 ;
-(void)addNegativeSamplesForAnchorOccurrenceDate:(id)arg0 toMessage:(id)arg1 ;
-(void)harvestData;
-(void)harvestDataForAnchor:(id)arg0 ;
-(void)setNegativeActionSamplesForAnchorOccurrenceDate:(id)arg0 mainMessage:(id)arg1 ;
-(void)setNegativeAppLaunchSamplesForAnchorOccurrenceDate:(id)arg0 mainMessage:(id)arg1 ;


@end


#endif