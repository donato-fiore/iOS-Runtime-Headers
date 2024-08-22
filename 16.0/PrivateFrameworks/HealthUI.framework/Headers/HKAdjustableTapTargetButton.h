// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKADJUSTABLETAPTARGETBUTTON_H
#define HKADJUSTABLETAPTARGETBUTTON_H

@class UIButton;



@interface HKAdjustableTapTargetButton : UIButton {
    BOOL _insetSet;
}


@property (nonatomic) UIEdgeInsets hitTargetInsets; // ivar: _hitTargetInsets


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif