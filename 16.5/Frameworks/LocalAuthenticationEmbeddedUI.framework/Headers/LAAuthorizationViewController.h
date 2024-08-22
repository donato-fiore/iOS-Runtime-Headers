// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAAUTHORIZATIONVIEWCONTROLLER_H
#define LAAUTHORIZATIONVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol _AuthorizationRemoteViewControllerHostDelegate, LAAuthorizationViewControllerDelegate;


#import "_AuthorizationRemoteViewControllerHost.h"
#import "LAAuthenticatorServiceConfiguration.h"

@interface LAAuthorizationViewController : UIViewController <_AuthorizationRemoteViewControllerHostDelegate>

 {
    _AuthorizationRemoteViewControllerHost *_remoteVC;
    id *_completion;
    LAAuthenticatorServiceConfiguration *_configuration;
}


@property (readonly, nonatomic) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LAAuthorizationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSInteger)preferredStatusBarStyle;
-(id)initWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)didProvideAuthorizationRequirementWithReply:(id)arg0 ;
-(void)dismiss;
-(void)loadView;
-(void)presentInContainerViewController:(id)arg0 ;
-(void)sheetDidFinishWithError:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif