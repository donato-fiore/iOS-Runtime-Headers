// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NATOUCHINSETSBUTTON_H
#define NATOUCHINSETSBUTTON_H

@class UIButton;



@interface NATouchInsetsButton : UIButton

@property (nonatomic) UIEdgeInsets touchInsets; // ivar: _touchInsets


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif