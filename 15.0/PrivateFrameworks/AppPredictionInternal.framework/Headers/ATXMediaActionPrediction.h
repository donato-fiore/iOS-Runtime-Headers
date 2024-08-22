// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMEDIAACTIONPREDICTION_H
#define ATXMEDIAACTIONPREDICTION_H


#import <Foundation/Foundation.h>


@interface ATXMediaActionPrediction : NSObject



+(BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg0 ;
+(BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg0 withINUpcomingMediaManagerReturnValueForTests:(id)arg1 ;
+(id)findTopRankedINPlayMediaIntentFromArray:(id)arg0 ;
+(id)getAllUpcomingMedia;
+(id)getUpcomingMediaForBundle:(id)arg0 isInternalApplication:(BOOL)arg1 ;
+(id)resolveBucketLevelPrediction:(id)arg0 withUpcomingMedia:(id)arg1 ;
+(id)resolveContainerLevelPrediction:(id)arg0 withUpcomingMedia:(id)arg1 ;
+(id)resolveItemLevelPrediction:(id)arg0 withUpcomingMedia:(id)arg1 ;
+(id)resolvePlayMediaIntent:(id)arg0 withUpcomingMedia:(id)arg1 ;
+(id)updatePlayMediaActionPredictions:(id)arg0 withUpcomingMedia:(id)arg1 forActionKey:(id)arg2 appActionPredictionItem:(struct ATXPredictionItem *)arg3 appActionLogProbability:(CGFloat)arg4 statistics:(id)arg5 ;
+(id)updatedPlayMediaAction:(id)arg0 ;
+(id)updatedPlayMediaAction:(id)arg0 withUpcomingMedia:(id)arg1 ;


@end


#endif