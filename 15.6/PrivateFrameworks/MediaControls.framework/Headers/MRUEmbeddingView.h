// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUEMBEDDINGVIEW_H
#define MRUEMBEDDINGVIEW_H

@class UIView, UIViewController;



@interface MRUEmbeddingView : UIView

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) UIViewController *embeddedViewController; // ivar: _embeddedViewController
@property (weak, nonatomic) UIViewController *parent; // ivar: _parent


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)embedViewController:(id)arg0 parent:(id)arg1 ;
-(void)hideViewController;
-(void)layoutSubviews;
-(void)removeViewController;
-(void)showViewController;


@end


#endif