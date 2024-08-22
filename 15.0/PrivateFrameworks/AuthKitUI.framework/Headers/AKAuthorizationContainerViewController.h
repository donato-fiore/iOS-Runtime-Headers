// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKAUTHORIZATIONCONTAINERVIEWCONTROLLER_H
#define AKAUTHORIZATIONCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString, AKAuthorizationPresentationContext;
@protocol UINavigationControllerDelegate, AKAuthorizationContainerViewControllerDelegate, AKAuthorizationPaneViewControllerDelegate;



@interface AKAuthorizationContainerViewController : UIViewController <UINavigationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AKAuthorizationContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<AKAuthorizationPaneViewControllerDelegate> *paneDelegate; // ivar: _paneDelegate
@property (readonly, nonatomic) AKAuthorizationPresentationContext *presentationContext; // ivar: _presentationContext
@property (retain, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;


-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 authorizationContext:(id)arg1 ;
-(void)_clearPaneDelegateForViewController:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif