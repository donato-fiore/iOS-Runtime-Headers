// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWSERVICEVIEWCONTROLLER_H
#define _UIVIEWSERVICEVIEWCONTROLLER_H

@class UIViewController, UINavigationController, NSString;
@protocol UINavigationControllerDelegate;



@interface _UIViewServiceViewController : UIViewController <UINavigationControllerDelegate>



@property (readonly, nonatomic) UINavigationController *containedNavController; // ivar: _containedNavController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *hostingViewController; // ivar: _hostingViewController
@property (readonly) Class superclass;


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )_updatedContentSizeForPreferredContentSize:(struct CGSize )arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif