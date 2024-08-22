// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONPAGEINDICATORIMAGESETCACHE_H
#define SBICONPAGEINDICATORIMAGESETCACHE_H

@class _UILegibilitySettings;

#import <Foundation/Foundation.h>

#import "SBIconPageIndicatorImageSetResult.h"

@interface SBIconPageIndicatorImageSetCache : NSObject {
    SBIconPageIndicatorImageSetResult *_indicatorImageSetResults;
    SBIconPageIndicatorImageSetResult *_searchImageSetResults;
    SBIconPageIndicatorImageSetResult *_cameraImageSetResults;
}


@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings


-(id)_emptyPageIndicatorSet;
-(id)cameraIndicatorImageSetForLegibilitySettings:(id)arg0 ;
-(id)pageIndicatorImageSetForLegibilitySettings:(id)arg0 ;
-(id)searchIndicatorImageSetForLegibilitySettings:(id)arg0 ;


@end


#endif