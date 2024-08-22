// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSIMSETUPPUBLICAPIINSTALLFLOW_H
#define TSSIMSETUPPUBLICAPIINSTALLFLOW_H

@class NSError, NSMutableArray, NSString, UIViewController<TSSetupFlowItem>, UIBarButtonItem;
@protocol TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate;


#import "TSSIMSetupFlow.h"

@interface TSSIMSetupPublicApiInstallFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>

 {
    BOOL _requireSetup;
    BOOL _skipGeneralInstallConsent;
    NSError *_planInstallError;
    NSMutableArray *_danglingPlanItems;
    NSString *_carrierName;
    NSString *_installName;
    UIViewController<TSSetupFlowItem> *_currentViewController;
    NSUInteger _userConsentType;
    UIBarButtonItem *_cancelButton;
    BOOL _confirmationCodeRequired;
    NSInteger _signupConsentResponse;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isPreinstallingViewControllerActive; // ivar: _isPreinstallingViewControllerActive
@property (readonly) Class superclass;


-(NSInteger)signupUserConsentResponse;
-(id)firstViewController;
-(id)initWithAppName:(id)arg0 requireSetup:(BOOL)arg1 skipGeneralInstallConsent:(BOOL)arg2 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)_maybeShowPreinstallConsentOnViewController:(id)arg0 ;
-(void)dealloc;
-(void)firstViewController:(id)arg0 ;
-(void)planItemsUpdated:(id)arg0 planListError:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif