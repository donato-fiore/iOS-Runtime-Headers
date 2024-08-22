// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BARCONTAINERVIEW_H
#define BARCONTAINERVIEW_H

@class UIView, NSSet;



@interface BarContainerView : UIView

@property (readonly, copy, nonatomic) NSSet *barViews; // ivar: _barViews


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToSuperview;
-(void)registerBarView:(id)arg0 ;
-(void)unregisterBarView:(id)arg0 ;


@end


#endif