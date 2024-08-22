// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHEROAPPBLENDINGUPDATER_H
#define ATXHEROAPPBLENDINGUPDATER_H


#import <Foundation/Foundation.h>


@interface ATXHeroAppBlendingUpdater : NSObject



+(id)clientModelForHeroAppPredictions;
+(id)clientModelSpecForHeroAppPredictions;
+(id)nonBlacklistedPredictionsFrom:(id)arg0 ;
+(void)updateBlendingLayerWithHeroAppPredictions:(id)arg0 currentLocation:(id)arg1 ;


@end


#endif