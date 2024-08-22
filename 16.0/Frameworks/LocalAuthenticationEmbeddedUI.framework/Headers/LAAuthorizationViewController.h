// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAAUTHORIZATIONVIEWCONTROLLER_H
#define LAAUTHORIZATIONVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol _AuthorizationRemoteViewControllerHostDelegate, LAAuthorizationViewControllerDelegate;


#import "_AuthorizationRemoteViewControllerHost.h"
#import "LAAuthenticatorServiceConfiguration.h"

@interface LAAuthorizationViewController : UIViewController <_AuthorizationRemoteViewControllerHostDelegate>

 {
    _AuthorizationRemoteViewControllerHost *_remoteVC;
    LAAuthenticatorServiceConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<LAAuthorizationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSInteger)preferredStatusBarStyle;
-(id)configuration;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)didProvideAuthorizationRequirementWithReply:(id)arg0 ;
-(void)dismiss;
-(void)loadView;
-(void)sheetDidFinishWithError:(id)arg0 ;


@end


#endif