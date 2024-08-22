// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIOVERLAYVIEW_H
#define VUIOVERLAYVIEW_H

@class NSArray, CALayer;


#import "VUIBaseView.h"
#import "VUIProgressView.h"
#import "VUITextBadgeView.h"
#import "VUILabel.h"

@interface VUIOverlayView : VUIBaseView

@property (copy, nonatomic) NSArray *badgeViewWrappers; // ivar: _badgeViewWrappers
@property (retain, nonatomic) CALayer *gradientLayer; // ivar: _gradientLayer
@property (retain, nonatomic) VUIBaseView *gradientView; // ivar: _gradientView
@property (nonatomic) BOOL hasPageControlDisplayedOnTop; // ivar: _hasPageControlDisplayedOnTop
@property (nonatomic) NSInteger overlayType; // ivar: _overlayType
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (retain, nonatomic) VUIProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) VUITextBadgeView *textBadge; // ivar: _textBadge
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel


+(id)overlayViewFromMediaItem:(id)arg0 overlayType:(NSInteger)arg1 existingView:(id)arg2 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct UIEdgeInsets )_overlayPadding;


@end


#endif