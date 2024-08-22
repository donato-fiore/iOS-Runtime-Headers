// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDENYLISTELIGIBILITYTHRESHOLDS_H
#define ATXDENYLISTELIGIBILITYTHRESHOLDS_H

@class NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface ATXDenyListEligibilityThresholds : NSObject {
    NSDictionary *asset;
    NSDictionary *_lowestScoreForAppInAnotherModeForDenyListEligibility;
    NSDictionary *_highestScoreForAppInCurrentModeForDenyListEligibility;
    NSNumber *_defaultLowestScoreForAppInAnotherModeForDenyListEligibility;
    NSNumber *_defaultHighestScoreForAppInCurrentModeForDenyListEligibility;
}


@property (retain, nonatomic) NSNumber *highestContactScoreInCurrentModeForDenyListEligibility; // ivar: _highestContactScoreInCurrentModeForDenyListEligibility
@property (retain, nonatomic) NSNumber *lowestContactScoreInAnotherModeForDenyListEligibility; // ivar: _lowestContactScoreInAnotherModeForDenyListEligibility


-(id)highestScoreInCurrentModeForDenyListEligibilityForBundleId:(id)arg0 ;
-(id)init;
-(id)lowestScoreInAnotherModeForDenyListEligibilityForBundleId:(id)arg0 ;


@end


#endif