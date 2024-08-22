// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROCONTENTSCORING_H
#define MIROCONTENTSCORING_H


#import <Foundation/Foundation.h>


@interface MiroContentScoring : NSObject



+(int)assetResolutionTooSmall;
+(int)assetWasShared;
+(int)assetWasUserAdded;
+(int)assetWasUserRemoved;
+(int)assetWithTheGreatestNumberOfDesirableRanges;
+(int)burstAutoPick;
+(int)burstRepresentativePick;
+(int)burstUserPick;
+(int)clusterBest;
+(int)clusterBestBurst;
+(int)clusterBestVideo;
+(int)clusterBestVideoFoundCounterweight;
+(int)clusterFifth;
+(int)clusterFourth;
+(int)clusterOther;
+(int)clusterSecond;
+(int)clusterThird;
+(int)hasBlink;
+(int)hasCloseUpFace;
+(int)hasSmile;
+(int)hasWink;
+(int)imageBaseScore;
+(int)imageHDR;
+(int)imageIsBlurry;
+(int)imageIsBurst;
+(int)imageIsLandscapePanorama;
+(int)imageIsPanorama;
+(int)imageIsPortraitPanorama;
+(int)imageNonHDRofPair;
+(int)isLandscape;
+(int)isPortrait;
+(int)liveValueForKey:(id)arg0 ;
+(int)maxTheoriticalScore;
+(int)minTheoriticalScore;
+(int)multipleDesirableRangesBoost;
+(int)nonPhotoAssetScore;
+(int)numberOfDesirableRangesToBoostScore;
+(int)photoIsFavorite;
+(int)photoIsHidden;
+(int)photoIsUserEdited;
+(int)posterAsset;
+(int)sloMoHasUserDefinedRange;
+(int)userAlbumPick;
+(int)videoBaseScore;
+(int)videoCloseToIdealDuration;
+(int)videoCloseToIdealPadding;
+(int)videoDurationTooShort;
+(int)videoHasFaceRange;
+(int)videoHasVoiceRange;
+(int)videoIsSloMo;
+(int)videoIsTimelapse;
+(int)videoNotWithinBlueprintRange;
+(int)videoWithinBlueprintRange;


@end


#endif