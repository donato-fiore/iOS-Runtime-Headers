// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNKINSULATINGVIEW_H
#define CNKINSULATINGVIEW_H

@class UIView;



@interface CNKInsulatingView : UIView

@property (nonatomic) BOOL forwardsHits; // ivar: _forwardsHits
@property (readonly, nonatomic) UIView *insulatedView; // ivar: _insulatedView


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 insulatedView:(id)arg1 ;


@end


#endif