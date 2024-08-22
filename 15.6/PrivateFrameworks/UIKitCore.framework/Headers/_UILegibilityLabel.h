// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UILEGIBILITYLABEL_H
#define _UILEGIBILITYLABEL_H

@class UILegibilityView, UIFont, NSString;



@interface _UILegibilityLabel : UILegibilityView

@property (readonly, nonatomic) CGFloat baselineOffset;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (copy, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) BOOL usesSecondaryColor; // ivar: _usesSecondaryColor


-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 string:(id)arg2 font:(id)arg3 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 string:(id)arg2 font:(id)arg3 options:(NSInteger)arg4 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)updateImage;


@end


#endif