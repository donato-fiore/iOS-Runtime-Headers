// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWPRESENTATIONCONTAINERVIEW_H
#define _UIPREVIEWPRESENTATIONCONTAINERVIEW_H



#import "UIView.h"
#import "_UIPreviewPresentationEffectView.h"

@interface _UIPreviewPresentationContainerView : UIView

@property (nonatomic) CGFloat blurRadius;
@property (retain, nonatomic) UIView *contentTransformView; // ivar: _contentTransformView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) _UIPreviewPresentationEffectView *platterClippingView; // ivar: _platterClippingView
@property (retain, nonatomic) UIView *platterShadowView; // ivar: _platterShadowView
@property (retain, nonatomic) _UIPreviewPresentationEffectView *platterView; // ivar: _platterView
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (nonatomic) BOOL shouldLayoutForCommitPhase; // ivar: _shouldLayoutForCommitPhase
@property (nonatomic) BOOL shouldRasterizeForTransition;


-(BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_preferredPlatterRectForContainerRect:(struct CGRect )arg0 ;
-(struct CGSize )_standardPreferredContentSize;
-(void)initPlatterViewsIfNeeded;
-(void)layoutSubviews;


@end


#endif