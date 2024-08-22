// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGWALLPAPERSUGGESTIONUTILITIES_H
#define PGWALLPAPERSUGGESTIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface PGWallpaperSuggestionUtilities : NSObject



+(BOOL)foundDominantPeopleSceneInAsset:(id)arg0 withConfidenceThresholdHelper:(id)arg1 ;
+(CGFloat)cropScoreWithAsset:(id)arg0 classification:(NSUInteger)arg1 passesClockOverlap:(*BOOL)arg2 cropZoomRatio:(*CGFloat)arg3 ;
+(id)assetFetchPropertySetsIncludingGating:(BOOL)arg0 ;
+(id)peopleSceneConfidenceThresholdHelper;
+(id)peopleShuffleDescriptorTitleWithCount:(NSUInteger)arg0 ;


@end


#endif