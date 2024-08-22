// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKADJUSTABLETAPTARGETBUTTON_H
#define NTKADJUSTABLETAPTARGETBUTTON_H

@class UIButton;



@interface NTKAdjustableTapTargetButton : UIButton

@property (nonatomic) UIEdgeInsets touchEdgeInsets; // ivar: _touchEdgeInsets


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif