// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSQRCODESCANFLOW_H
#define TSQRCODESCANFLOW_H

@class UIBarButtonItem, NSString, NSError;
@protocol TSCellularPlanManagerCacheDelegate, TSSIMSetupFlowDelegate;


#import "TSSIMSetupFlow.h"

@interface TSQRCodeScanFlow : TSSIMSetupFlow <TSCellularPlanManagerCacheDelegate, TSSIMSetupFlowDelegate>



@property (retain) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property BOOL confirmationCodeRequired; // ivar: _confirmationCodeRequired
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isPreinstallingViewControllerActive; // ivar: _isPreinstallingViewControllerActive
@property (retain) NSString *name; // ivar: _name
@property (retain) NSError *planInstallError; // ivar: _planInstallError
@property NSInteger signupUserConsentResponse; // ivar: _signupUserConsentResponse
@property (readonly) Class superclass;
@property NSUInteger userConsentType; // ivar: _userConsentType
@property BOOL withBackButton; // ivar: _withBackButton


-(id)firstViewController;
-(id)initWithBackButton:(BOOL)arg0 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)dealloc;
-(void)firstViewController:(id)arg0 ;
-(void)handleError:(id)arg0 ;
-(void)planItemsUpdated:(id)arg0 planListError:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif