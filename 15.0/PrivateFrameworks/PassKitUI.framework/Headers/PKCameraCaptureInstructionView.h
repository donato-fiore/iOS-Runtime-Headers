// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCAMERACAPTUREINSTRUCTIONVIEW_H
#define PKCAMERACAPTUREINSTRUCTIONVIEW_H

@class UIView, UIScrollView, UIButton;


#import "PKTableHeaderView.h"

@interface PKCameraCaptureInstructionView : UIView {
    NSInteger _context;
    UIScrollView *_scrollView;
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
}


@property (retain, nonatomic) PKTableHeaderView *headerView; // ivar: _headerView


-(BOOL)hasSecondaryButton;
-(BOOL)isBuddyiPad;
-(id)initWithFrame:(struct CGRect )arg0 context:(NSInteger)arg1 primaryAction:(id)arg2 primaryActionTitle:(id)arg3 secondaryAction:(id)arg4 secondaryActionTitle:(id)arg5 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)removeSecondaryButton;
-(void)setPrimaryButtonEnabled:(BOOL)arg0 ;
-(void)setPrimaryButtonHidden:(BOOL)arg0 ;
-(void)setPrimaryButtonTitle:(id)arg0 ;
-(void)setSecondaryButtonTitle:(id)arg0 ;
-(void)setupHeaderView;
-(void)setupPrimaryButtonWithTitle:(id)arg0 action:(id)arg1 ;
-(void)setupScrollView;
-(void)setupSecondaryButtonWithTitle:(id)arg0 action:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif