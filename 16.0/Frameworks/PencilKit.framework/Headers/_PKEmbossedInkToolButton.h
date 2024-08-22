// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PKEMBOSSEDINKTOOLBUTTON_H
#define _PKEMBOSSEDINKTOOLBUTTON_H

@class UIButton, UIColor, NSString, UIImageView;
@protocol PKInkToolButton;


#import "_PKInkToolOpacityLabel.h"

@interface _PKEmbossedInkToolButton : UIButton <PKInkToolButton>



@property (nonatomic) NSUInteger attributeSet; // ivar: _attributeSet
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isUsedOnDarkBackground; // ivar: _isUsedOnDarkBackground
@property (retain, nonatomic) UIImageView *nibEmbossImageView; // ivar: _nibEmbossImageView
@property (retain, nonatomic) UIImageView *nibImageView; // ivar: _nibImageView
@property (retain, nonatomic) _PKInkToolOpacityLabel *opacityLabel; // ivar: _opacityLabel
@property (nonatomic) NSUInteger sizeState; // ivar: _sizeState
@property (retain, nonatomic) UIImageView *toolBaseImageView; // ivar: _toolBaseImageView
@property (retain, nonatomic) UIImageView *toolDockMaskImageView; // ivar: _toolDockMaskImageView


+(id)buttonWithIdentifier:(id)arg0 color:(id)arg1 sizeState:(NSUInteger)arg2 ;
+(id)imageNameForIdentifier:(id)arg0 ;
+(id)imageNameForIdentifier:(id)arg0 sizeState:(NSUInteger)arg1 imageType:(id)arg2 ;
+(struct CGSize )_toolBaseImageSizeForIdentifier:(id)arg0 sizeState:(NSUInteger)arg1 ;
-(CGFloat)embossAlphaForColor:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 color:(id)arg1 sizeState:(NSUInteger)arg2 ;
-(id)nibEmbossImageName;
-(id)nibImageName;
-(id)toolBaseImageName;
-(id)toolDockMaskImageName;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 sizeState:(NSUInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif