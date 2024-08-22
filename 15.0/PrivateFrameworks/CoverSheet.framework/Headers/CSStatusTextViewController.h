// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSTATUSTEXTVIEWCONTROLLER_H
#define CSSTATUSTEXTVIEWCONTROLLER_H

@class MCProfileConnection, SBFRemoteBasebandLoggingManager, SBLockScreenDefaults, NSString;
@protocol SBFRemoteBasebandLoggingObserver, CSStatusTextViewControllerDelegate;


#import "CSCoverSheetViewControllerBase.h"
#import "CSStatusTextView.h"

@interface CSStatusTextViewController : CSCoverSheetViewControllerBase <SBFRemoteBasebandLoggingObserver>

 {
    CSStatusTextView *_view;
    MCProfileConnection *_profileConnection;
    SBFRemoteBasebandLoggingManager *_basebandLoggingManager;
    SBLockScreenDefaults *_lockScreenDefaults;
}


@property (weak, nonatomic) NSObject<CSStatusTextViewControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *overrideFooterText; // ivar: _overrideFooterText


-(BOOL)_isSecurityResearchDevice;
-(id)_legalContact;
-(id)_legalString;
-(id)init;
-(id)statusTextView;
-(void)_profileStateChangedNotification:(id)arg0 ;
-(void)_updateText;
-(void)_updateTextForDeviceInformation;
-(void)_updateTextForLegal;
-(void)_updateTextForProfiles;
-(void)_updateTextForProvisionalEnrollment;
-(void)_updateTextForSupervision;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)loadView;
-(void)remoteBasebandLogCollectionStateDidChange:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif