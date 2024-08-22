// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPINSTALLERVIEWCONTROLLER_H
#define VUIAPPINSTALLERVIEWCONTROLLER_H

@class UINavigationController, NSString, NSURL;
@protocol WLKInstallable;


#import "VUIAppInstallConfirmationViewController.h"
#import "VUIASDDialogObserver.h"

@interface VUIAppInstallerViewController : UINavigationController

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) NSString *confirmationBody; // ivar: _confirmationBody
@property (retain, nonatomic) VUIAppInstallConfirmationViewController *confirmationController; // ivar: _confirmationController
@property (copy, nonatomic) NSString *confirmationInstallButtonTitle; // ivar: _confirmationInstallButtonTitle
@property (copy, nonatomic) NSString *confirmationTitle; // ivar: _confirmationTitle
@property (retain, nonatomic) VUIASDDialogObserver *dialogObserver; // ivar: _dialogObserver
@property (nonatomic) BOOL displayAppStoreLink; // ivar: _displayAppStoreLink
@property (nonatomic) BOOL displaySecondaryLink; // ivar: _displaySecondaryLink
@property (readonly, nonatomic) NSObject<WLKInstallable> *installable; // ivar: _installable
@property (nonatomic) CGFloat lastProgress; // ivar: _lastProgress
@property (copy, nonatomic) NSString *localizedContentTitle; // ivar: _localizedContentTitle
@property (copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (retain, nonatomic) NSURL *punchoutURL; // ivar: _punchoutURL
@property (copy, nonatomic) id *secondaryLinkHandler; // ivar: _secondaryLinkHandler
@property (copy, nonatomic) NSString *secondaryLinkTitle; // ivar: _secondaryLinkTitle
@property (copy, nonatomic) NSString *updateBody; // ivar: _updateBody
@property (copy, nonatomic) NSString *updateTitle; // ivar: _updateTitle


-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)initWithInstallable:(id)arg0 ;
-(id)initWithInstallable:(id)arg0 punchoutURL:(id)arg1 ;
-(void)_beginInstallingApp;
-(void)_dismissAppInstallWithCompletion:(id)arg0 ;
-(void)_finishInstallationWithCompletion:(id)arg0 ;
-(void)_initConfirmation;
-(void)_updateWithInstallProgress:(CGFloat)arg0 ;
// -(void)beginInstallingAppWithProgressHandler:(id)arg0 completion:(unk)arg1  ;
-(void)loadView;


@end


#endif