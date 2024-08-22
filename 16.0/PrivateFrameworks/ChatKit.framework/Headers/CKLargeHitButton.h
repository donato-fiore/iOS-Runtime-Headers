// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLARGEHITBUTTON_H
#define CKLARGEHITBUTTON_H

@class UIButton;



@interface CKLargeHitButton : UIButton

@property (nonatomic) UIEdgeInsets ck_hitTestInsets; // ivar: _ck_hitTestInsets


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif