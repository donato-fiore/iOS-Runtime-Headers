// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCONTAINEEINPUTVIEWCONTROLLER_H
#define MFCONTAINEEINPUTVIEWCONTROLLER_H

@class UIInputViewController, UIViewController, NSLayoutConstraint;



@interface MFContaineeInputViewController : UIInputViewController

@property (nonatomic) BOOL allowsSelfSizing; // ivar: _allowsSelfSizing
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint


-(id)initWithContentViewController:(id)arg0 ;
-(void)_updateContentViewControllerHeight;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif