// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PKFLATINKTOOLBUTTON_H
#define _PKFLATINKTOOLBUTTON_H

@class UIButton, UIColor, NSString, UIImageView;
@protocol PKInkToolButton;


#import "_PKInkToolOpacityLabel.h"

@interface _PKFlatInkToolButton : UIButton <PKInkToolButton>



@property (nonatomic) NSUInteger attributeSet; // ivar: _attributeSet
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isUsedOnDarkBackground; // ivar: _isUsedOnDarkBackground
@property (retain, nonatomic) UIImageView *nibImageView; // ivar: _nibImageView
@property (retain, nonatomic) UIImageView *nibOutlineImageView; // ivar: _nibOutlineImageView
@property (retain, nonatomic) _PKInkToolOpacityLabel *opacityLabel; // ivar: _opacityLabel
@property (nonatomic) NSUInteger sizeState; // ivar: _sizeState
@property (retain, nonatomic) UIImageView *toolBaseImageView; // ivar: _toolBaseImageView


+(id)buttonWithIdentifier:(id)arg0 color:(id)arg1 sizeState:(NSUInteger)arg2 ;
+(struct CGSize )_toolBaseImageSizeForIdentifier:(id)arg0 sizeState:(NSUInteger)arg1 ;
-(id)imageNameForIdentifier:(id)arg0 ;
-(id)imageNameForIdentifier:(id)arg0 sizeState:(NSUInteger)arg1 imageType:(id)arg2 isDarkUI:(BOOL)arg3 ;
-(id)initWithIdentifier:(id)arg0 color:(id)arg1 sizeState:(NSUInteger)arg2 ;
-(id)nibImageName;
-(id)nibStrokeImageName;
-(id)toolBaseImageName;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 sizeState:(NSUInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif