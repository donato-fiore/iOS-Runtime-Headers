// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKINAPPAUTHENTICATIONREMOTEUIDELEGATE_H
#define AKINAPPAUTHENTICATIONREMOTEUIDELEGATE_H

@class UIViewController, NSHTTPURLResponse, RUIObjectModel, NSString, UINavigationController, AAUICDPStingrayRemoteUIController;
@protocol RemoteUIControllerDelegate;

#import <Foundation/Foundation.h>

#import "AKAppleIDAuthenticationInAppContext.h"
#import "AKAppleIDServerUIContextController.h"

@interface AKInAppAuthenticationRemoteUIDelegate : NSObject <RemoteUIControllerDelegate>

 {
    AKAppleIDAuthenticationInAppContext *_context;
    UIViewController *_topViewControllerOnLoadStart;
    NSHTTPURLResponse *_deferredResponse;
    BOOL _navBarButtonOverridden;
}


@property (readonly, nonatomic) RUIObjectModel *currentRemoteOM; // ivar: _currentRemoteOM
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *modalRemoteUINavController; // ivar: _modalRemoteUINavController
@property (nonatomic) BOOL overrideFirstActionSignal; // ivar: _overrideFirstActionSignal
@property (retain, nonatomic) AKAppleIDServerUIContextController *serverUIContextController; // ivar: _serverUIContextController
@property (retain, nonatomic) AAUICDPStingrayRemoteUIController *stingrayController; // ivar: _stingrayController
@property (readonly) Class superclass;


-(BOOL)_isDeferrableFinalResponseHarvested;
-(id)initWithContext:(id)arg0 ;
-(void)_handleBackButtonTap:(id)arg0 ;
-(void)_processAndHandleConflictErrorFromResponse:(id)arg0 ;
-(void)_showAlert:(id)arg0 ;
-(void)clearObjectModel;
-(void)remoteUIController:(id)arg0 didDismissModalNavigationWithObjectModels:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didFinishLoadWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveHTTPResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)remoteUIController:(id)arg0 willPresentModalNavigationController:(id)arg1 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;


@end


#endif