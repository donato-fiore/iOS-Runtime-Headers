// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTSYNDICATIONSTACKEDIMAGEVIEW_H
#define PXCONTENTSYNDICATIONSTACKEDIMAGEVIEW_H

@class UIView, UIImage, UIImageView, NSAttributedString, UILabel, UIVisualEffectView;


#import "PXGradientView.h"
#import "PXRegionOfInterest.h"

@interface PXContentSyndicationStackedImageView : UIView

@property (nonatomic, getter=isBlurred) BOOL blurred;
@property (retain, nonatomic) PXGradientView *bottomGradientView; // ivar: _bottomGradientView
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) NSUInteger darkenedStyle; // ivar: _darkenedStyle
@property (retain, nonatomic) UIView *darkeningView; // ivar: _darkeningView
@property (nonatomic) BOOL hasBottomDarkGradient; // ivar: _hasBottomDarkGradient
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (copy, nonatomic) NSAttributedString *overlayTitle; // ivar: _overlayTitle
@property (retain, nonatomic) UILabel *overlayTitleLabel; // ivar: _overlayTitleLabel
@property (readonly, copy, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif