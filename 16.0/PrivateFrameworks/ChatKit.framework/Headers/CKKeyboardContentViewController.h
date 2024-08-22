// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKKEYBOARDCONTENTVIEWCONTROLLER_H
#define CKKEYBOARDCONTENTVIEWCONTROLLER_H

@class UIInputViewController, NSString, UIViewController;



@interface CKKeyboardContentViewController : UIInputViewController

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 identifier:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif