// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUFEATUREFLAGPROVIDER_H
#define MRUFEATUREFLAGPROVIDER_H


#import <Foundation/Foundation.h>


@interface MRUFeatureFlagProvider : NSObject



+(BOOL)isAutobahnEnabled;
+(BOOL)isDynamicCoversheetEnabled;
+(BOOL)isFavoritesEnabled;
+(BOOL)isImageThumbnailingCacheEnabled;
+(BOOL)isImageThumbnailingEnabled;
+(BOOL)isLocalPlatterLockScreenVolumeSliderEnabled;
+(BOOL)isMediaSuggestionsPushEnabled;
+(BOOL)isMediaSuggestionsUnlockedEnabled;
+(BOOL)isPlatterLiveWaveformEnabled;
+(BOOL)isQuickControlsHidingWhenPausedEnabled;
+(BOOL)isQuickControlsLiveWaveformEnabled;
+(BOOL)isRelativeVolumeUIEnabled;


@end


#endif