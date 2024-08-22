// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONMODEMODEL_H
#define ATXNOTIFICATIONMODEMODEL_H


#import <Foundation/Foundation.h>

#import "ATXNotificationModeEntityModelWeights.h"

@interface ATXNotificationModeModel : NSObject {
    NSUInteger _mode;
    ATXNotificationModeEntityModelWeights *_notificationModeEntityModelWeights;
}




-(CGFloat)scoreFromEngagementFeatures:(id)arg0 dismissalFeatures:(id)arg1 hiddenFeatures:(id)arg2 clearedFeatures:(id)arg3 expiredFeatures:(id)arg4 scoredApp:(id)arg5 scoredContact:(id)arg6 ;
-(id)init;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)modeEntityScoreFromEngagementFeatures:(id)arg0 dismissalFeatures:(id)arg1 hiddenFeatures:(id)arg2 clearedFeatures:(id)arg3 expiredFeatures:(id)arg4 scoredApp:(id)arg5 scoredContact:(id)arg6 ;
-(id)scoredEntitiesWithScoredAppEntities:(id)arg0 scoredContactEntities:(id)arg1 ;
-(void)addSubFeaturesToFeatureDict:(id)arg0 subFeatures:(id)arg1 prefix:(id)arg2 ;


@end


#endif