// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSEMERGENCYRESETCONTROLLER_H
#define DSEMERGENCYRESETCONTROLLER_H

@class DSAppSharing, SPBeaconManager, OBBoldTrayButton, NSString, DSSharingPermissions, UIStackView, UIProgressView, NSError;
@protocol DSController, DSNavigationDelegate, OS_dispatch_queue;


#import "DSOBWelcomeController.h"

@interface DSEmergencyResetController : DSOBWelcomeController <DSController>



@property (retain, nonatomic) DSAppSharing *appSharing; // ivar: _appSharing
@property (retain, nonatomic) SPBeaconManager *beaconManager; // ivar: _beaconManager
@property (retain, nonatomic) OBBoldTrayButton *boldButton; // ivar: _boldButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFetching; // ivar: _isFetching
@property (retain, nonatomic) DSSharingPermissions *permissions; // ivar: _permissions
@property (retain, nonatomic) UIStackView *progressStackView; // ivar: _progressStackView
@property (retain, nonatomic) UIProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) NSError *resetError; // ivar: _resetError
@property (readonly) Class superclass;
@property (nonatomic) BOOL userDidPressReset; // ivar: _userDidPressReset
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(void)initialize;
-(id)init;
-(void)fetchSharingPermissions:(id)arg0 ;
-(void)handleErrorsAndMoveToNextPane;
-(void)hideProgressBar;
-(void)removeAllPairedDevicesOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)resetAllFirstPartySharing:(id)arg0 ;
-(void)resetAllThirdPartyTCCs:(id)arg0 ;
-(void)resetNecessaryFirstPartyPermissions:(id)arg0 ;
-(void)safetyResetAll;
-(void)safetyResetAllPressed;
-(void)setDigitalSeparationTipsFlag;
-(void)showProgressBar;
-(void)updateProgressBar;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif