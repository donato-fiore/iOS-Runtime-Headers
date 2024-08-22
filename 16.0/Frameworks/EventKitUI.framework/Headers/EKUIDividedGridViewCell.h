// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIDIVIDEDGRIDVIEWCELL_H
#define EKUIDIVIDEDGRIDVIEWCELL_H

@class UIView, UIColor, UITextLabel, NSLayoutConstraint;


#import "EKUIDividedGridViewController.h"

@interface EKUIDividedGridViewCell : UIView {
    UIColor *_bgColor;
}


@property (retain) UITextLabel *label; // ivar: _label
@property (nonatomic) BOOL selected; // ivar: _selected
@property (weak) EKUIDividedGridViewController *viewController; // ivar: _viewController
@property (weak) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


-(id)init;
-(id)initWithBackgroundColor:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif