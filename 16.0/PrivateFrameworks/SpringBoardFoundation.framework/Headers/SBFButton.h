// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFBUTTON_H
#define SBFBUTTON_H

@class UIButton;



@interface SBFButton : UIButton



-(BOOL)_drawingAsSelected;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_touchUpInside;
-(void)_updateForStateChange;
-(void)_updateSelected:(BOOL)arg0 highlighted:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif