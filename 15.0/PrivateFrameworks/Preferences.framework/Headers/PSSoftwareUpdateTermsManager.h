// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSSOFTWAREUPDATETERMSMANAGER_H
#define PSSOFTWAREUPDATETERMSMANAGER_H

@class RemoteUIController, SUDescriptor, UINavigationController, UIViewController, NSString, RUIStyle;
@protocol RemoteUIControllerDelegate;

#import <Foundation/Foundation.h>


@interface PSSoftwareUpdateTermsManager : NSObject <RemoteUIControllerDelegate>

 {
    RemoteUIController *_termsRemoteUI;
    id *_termsCompletion;
    SUDescriptor *_update;
    BOOL _overrideNextRUIAction;
    BOOL _agreeToCombinedTOSInProgress;
    UINavigationController *_showProgressViewController;
    UIViewController *_hostController;
    UIViewController *_presentedViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIStyle *serverFlowStyle; // ivar: _serverFlowStyle
@property (readonly) Class superclass;


-(id)versionFromLicenseText:(id)arg0 ;
-(void)_acceptedTermsFromAsset;
-(void)_acceptedTermsVersion:(id)arg0 ;
-(void)_finishTermsWithAcceptance:(BOOL)arg0 error:(id)arg1 ;
-(void)_handleAgreeFromObjectModel:(id)arg0 ;
-(void)_loadRemoteUITermsWithCloudAtURL:(id)arg0 ;
-(void)_loadTermsFromUpdateAsset;
-(void)_loadTermsRemoteUIFailureWithError:(id)arg0 ;
-(void)_presentModalController:(id)arg0 ;
-(void)_termsDisagree;
-(void)cancelLoadingTerms:(id)arg0 ;
-(void)presentTermsIfNecessaryForUpdate:(id)arg0 overController:(id)arg1 showLoadSpinner:(BOOL)arg2 completion:(id)arg3 ;
-(void)remoteUIController:(id)arg0 didFinishLoadWithError:(id)arg1 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)remoteUIController:(id)arg0 willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg0 ;
-(void)showLoadingSpinnerViewController;


@end


#endif