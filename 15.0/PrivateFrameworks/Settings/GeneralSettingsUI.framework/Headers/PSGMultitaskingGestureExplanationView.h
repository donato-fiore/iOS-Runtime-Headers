// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGMULTITASKINGGESTUREEXPLANATIONVIEW_H
#define PSGMULTITASKINGGESTUREEXPLANATIONVIEW_H

@class UIView, UIColor;
@protocol PSHeaderFooterView;


#import "PSGUnderlineButton.h"

@interface PSGMultitaskingGestureExplanationView : UIView <PSHeaderFooterView>

 {
    UILabel" _labels;
    PSGUnderlineButton *_videoLinkButton;
    CGFloat _sized;
    CGFloat _width;
    UIColor *_footerTextColor;
}




-(BOOL)isRTL;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)_accessibilityLabels;
-(id)initWithSpecifier:(id)arg0 ;
-(id)newRegionSampleLabelUnderlined;
-(void)layoutSubviews;


@end


#endif