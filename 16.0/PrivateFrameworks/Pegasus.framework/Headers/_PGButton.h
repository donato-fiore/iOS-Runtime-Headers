// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PGBUTTON_H
#define _PGBUTTON_H

@class UIButton;


#import "PGButtonView.h"

@interface _PGButton : UIButton

@property (weak, nonatomic) PGButtonView *buttonView; // ivar: _buttonView


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(struct CGRect )hitRect;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)tintColorDidChange;


@end


#endif