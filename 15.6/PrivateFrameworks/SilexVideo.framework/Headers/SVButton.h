// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVBUTTON_H
#define SVBUTTON_H

@class UIButton;



@interface SVButton : UIButton

@property (nonatomic) UIEdgeInsets touchInsets; // ivar: _touchInsets
@property (copy, nonatomic, setter=onTouchUpInside:) id *touchUpInsideBlock; // ivar: _touchUpInsideBlock


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_privateButtonTapped;
-(void)onTouchUpInside:(id)arg0 ;


@end


#endif