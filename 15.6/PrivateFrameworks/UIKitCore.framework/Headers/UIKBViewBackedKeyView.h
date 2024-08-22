// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBVIEWBACKEDKEYVIEW_H
#define UIKBVIEWBACKEDKEYVIEW_H

@class UIView<UIKBKeyViewContentView>;


#import "UIKBKeyView.h"
#import "UIKBBackdropView.h"

@interface UIKBViewBackedKeyView : UIKBKeyView

@property (retain, nonatomic) UIKBBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIView<UIKBKeyViewContentView> *contentView; // ivar: _contentView


-(id)renderFlagsForTraits:(id)arg0 ;
-(void)layoutSubviews;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)retestSelectedVariantIndexForKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)setDrawFrame:(struct CGRect )arg0 ;
-(void)setRenderConfig:(id)arg0 ;
-(void)updateForKeyplane:(id)arg0 key:(id)arg1 ;


@end


#endif