// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCROSSFADETITLEVIEW_H
#define NUCROSSFADETITLEVIEW_H

@class UIView, UIImageView, UILabel;
@protocol NUTitleViewStyler;


#import "NUCrossFadeViewAnimator.h"
#import "NUTextAndGlyphView.h"
#import "NUTitleViewUpdate.h"

@interface NUCrossFadeTitleView : UIView

@property (readonly, nonatomic) NUCrossFadeViewAnimator *animator; // ivar: _animator
@property (nonatomic) NSUInteger displayValueType; // ivar: _displayValueType
@property (retain, nonatomic) NSObject<NUTitleViewStyler> *styler; // ivar: _styler
@property (readonly, nonatomic) NUTextAndGlyphView *textAndGlyphView; // ivar: _textAndGlyphView
@property (readonly, nonatomic) UIImageView *titleImageView; // ivar: _titleImageView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NUTitleViewUpdate *update; // ivar: _update
@property (readonly, nonatomic) CGRect visibleFrame;


-(id)_applyStylesToText:(id)arg0 styleType:(NSUInteger)arg1 ;
-(id)_applyStylesToTextAndGlyph:(id)arg0 styleType:(NSUInteger)arg1 ;
-(id)applyStylesToValueFromTitleViewUpdate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyler:(id)arg0 ;
-(id)viewForValueType:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)relayoutWithAnimation:(BOOL)arg0 ;
-(void)updateTitleViewWithUpdate:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif