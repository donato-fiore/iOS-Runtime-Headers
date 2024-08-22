// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDYNAMICBUTTON_H
#define HKDYNAMICBUTTON_H

@class UIButton, NSLayoutConstraint;



@interface HKDynamicButton : UIButton

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint


-(CGFloat)_buttonLabelHeight;
-(struct CGSize )intrinsicContentSize;
-(void)_updateForCurrentSizeCategory;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif