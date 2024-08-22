// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONPAGEINDICATORIMAGESETRESULT_H
#define SBICONPAGEINDICATORIMAGESETRESULT_H

@class _UILegibilityImageSet;

#import <Foundation/Foundation.h>


@interface SBIconPageIndicatorImageSetResult : NSObject

@property (readonly, nonatomic) _UILegibilityImageSet *enabledPageIndicatorSet; // ivar: _enabledPageIndicatorSet
@property (readonly, nonatomic) _UILegibilityImageSet *pageIndicatorSet; // ivar: _pageIndicatorSet


-(id)initWithIndicatorSet:(id)arg0 enabledIndicatorSet:(id)arg1 ;


@end


#endif