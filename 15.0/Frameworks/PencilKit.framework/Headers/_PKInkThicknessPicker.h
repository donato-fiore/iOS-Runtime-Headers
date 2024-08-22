// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PKINKTHICKNESSPICKER_H
#define _PKINKTHICKNESSPICKER_H

@class UIControl, NSString, NSArray;



@interface _PKInkThicknessPicker : UIControl

@property (retain, nonatomic) NSString *inkIdentifier; // ivar: _inkIdentifier
@property (retain, nonatomic) NSArray *thicknessButtons; // ivar: _thicknessButtons
@property (nonatomic) CGFloat weight; // ivar: _weight


+(CGFloat)_nearestButtonWeightForWeight:(CGFloat)arg0 ;
+(CGFloat)_weightForButtonFrame:(struct CGRect )arg0 ;
+(CGFloat)_weightForButtonIndex:(NSInteger)arg0 ;
+(NSInteger)_nearestButtonIndexForWeight:(CGFloat)arg0 ;
+(struct CGRect )_buttonFrameForButtonIndex:(NSInteger)arg0 ;
+(struct CGRect )_buttonFrameForWeight:(CGFloat)arg0 ;
-(id)initWithInkIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif