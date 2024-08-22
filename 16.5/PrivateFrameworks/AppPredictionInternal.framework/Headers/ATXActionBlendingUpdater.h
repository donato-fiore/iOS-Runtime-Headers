// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONBLENDINGUPDATER_H
#define ATXACTIONBLENDINGUPDATER_H


#import <Foundation/Foundation.h>


@interface ATXActionBlendingUpdater : NSObject



+(CGFloat)generateScoreForFallbackActionKey:(id)arg0 fallbackAction:(id)arg1 penalizedFallbackActions:(id)arg2 ;
+(id)clientModelIdForConsumerSubType:(unsigned char)arg0 ;
+(void)updateBlendingLayerWithBehavioralPredictions:(id)arg0 feedbackMetadata:(id)arg1 consumerSubType:(unsigned char)arg2 ;
+(void)updateBlendingLayerWithFallbackActions;
+(void)updateBlendingLayerWithHeuristicPredictions:(id)arg0 ;
+(void)updateBlendingLayerWithLockscreenActions:(id)arg0 feedbackMetadata:(id)arg1 ;
+(void)updateBlendingLayerWithRecentShortcuts:(id)arg0 ;


@end


#endif