// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LACUSTOMPASSWORDCONTROLLER_H
#define LACUSTOMPASSWORDCONTROLLER_H

@class UIViewController, LAContext, NSString;
@protocol LAAuthorizationViewControllerDelegate, LACustomPasswordControllerDelegate;


#import "LAAuthorizationViewController.h"

@interface LACustomPasswordController : UIViewController <LAAuthorizationViewControllerDelegate>

 {
    LAContext *_laContext;
    LAAuthorizationViewController *_authorizationController;
    id *_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LACustomPasswordControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSInteger)preferredStatusBarStyle;
-(id)initWithConfiguration:(id)arg0 ;
-(void)authorizationController:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)authorizationController:(id)arg0 didProvideAuthorizationRequirementWithReply:(id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif