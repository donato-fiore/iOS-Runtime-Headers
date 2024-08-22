// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTHIGHLIGHTVIEW_H
#define UITEXTHIGHLIGHTVIEW_H

@class CAShapeLayer;


#import "UIView.h"
#import "_UITextHighlightBackgroundView.h"
#import "UIVisualEffectView.h"
#import "UIPreviewParameters.h"

@interface UITextHighlightView : UIView {
    UIEdgeInsets _padding;
    BOOL _contentViewValid;
    _UITextHighlightBackgroundView *_backgroundView;
    UIVisualEffectView *_contentClippingEffectView;
    CAShapeLayer *_contentClippingMaskLayer;
    UIView *_contentView;
}


@property (retain, nonatomic) UIPreviewParameters *overriddenPreviewParameters; // ivar: _overriddenPreviewParameters
@property (readonly, copy, nonatomic) id *previewProvider; // ivar: _previewProvider


+(id)preferredPreviewParametersForTextLineRects:(id)arg0 ;
-(id)initWithPreviewProvider:(id)arg0 ;
-(void)_updateWithPreviewParameters:(id)arg0 ;
-(void)animateWithCompletion:(id)arg0 ;
-(void)fadeAwayWithCompletion:(id)arg0 ;
-(void)invalidateContentView;
-(void)layoutSubviews;


@end


#endif