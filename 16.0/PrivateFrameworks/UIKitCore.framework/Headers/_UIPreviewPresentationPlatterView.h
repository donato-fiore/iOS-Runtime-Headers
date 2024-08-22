// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPREVIEWPRESENTATIONPLATTERVIEW_H
#define _UIPREVIEWPRESENTATIONPLATTERVIEW_H



#import "UIView.h"
#import "_UIPreviewPresentationEffectView.h"

@interface _UIPreviewPresentationPlatterView : UIView

@property (nonatomic) CGFloat blurRadius;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *contentClipView; // ivar: _contentClipView
@property (nonatomic) CGSize contentClippingSize; // ivar: _contentClippingSize
@property (retain, nonatomic) _UIPreviewPresentationEffectView *contentEffectView; // ivar: _contentEffectView
@property (retain, nonatomic) UIView *contentShadowView; // ivar: _contentShadowView
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) UIView *contentTransformView; // ivar: _contentTransformView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic, getter=isDropShadowEnabled) BOOL dropShadowEnabled; // ivar: _dropShadowEnabled


-(BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)arg0 ;
-(id)initWithContentView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif