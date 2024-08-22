// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGHITTESTEXTENDABLEVIEW_H
#define PGHITTESTEXTENDABLEVIEW_H

@class UIView;



@interface PGHitTestExtendableView : UIView

@property (weak, nonatomic) UIView *hitTestExtenderView; // ivar: _hitTestExtenderView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif