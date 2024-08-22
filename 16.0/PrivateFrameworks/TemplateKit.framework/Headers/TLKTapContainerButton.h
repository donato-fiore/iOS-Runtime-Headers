// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLKTAPCONTAINERBUTTON_H
#define TLKTAPCONTAINERBUTTON_H

@class UIButton, UIView;



@interface TLKTapContainerButton : UIButton

@property (weak, nonatomic) UIView *containerView; // ivar: _containerView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif