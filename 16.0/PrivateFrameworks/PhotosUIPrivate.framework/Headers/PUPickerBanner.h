// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPICKERBANNER_H
#define PUPICKERBANNER_H

@class UIView;


#import "PUAbstractNavigationBanner.h"
#import "PUPickerBannerView.h"

@interface PUPickerBanner : PUAbstractNavigationBanner {
    UIView *_view;
}


@property (readonly, nonatomic) PUPickerBannerView *bannerView;


-(CGFloat)height;
-(id)view;


@end


#endif