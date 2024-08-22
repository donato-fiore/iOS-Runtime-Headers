// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTRANSFERFLOW_H
#define TSTRANSFERFLOW_H

@class NSError, NSString, UIBarButtonItem, NSArray, CTDisplayPlanList, CUMessageSession;
@protocol TSSIMSetupFlowDelegate, OS_dispatch_group;


#import "TSSIMSetupFlow.h"
#import "TSTransferFlowModel.h"

@interface TSTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>

 {
    NSError *_planInstallError;
    BOOL _confirmationCodeRequired;
    NSString *_name;
    UIBarButtonItem *_cancelButton;
    NSObject<OS_dispatch_group> *_queryGroup;
    NSArray *_transferItems;
    CTDisplayPlanList *_pendingInstallItems;
    BOOL _isActivationPolicyMismatch;
    BOOL _isDualeSIMCapablityLoss;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *firstViewControllerCallback; // ivar: _firstViewControllerCallback
@property BOOL hasTransferablePlan; // ivar: _hasTransferablePlan
@property (readonly) NSUInteger hash;
@property BOOL isAvailableOptionsQueryCompleted; // ivar: _isAvailableOptionsQueryCompleted
@property BOOL isStandaloneProximityTransfer; // ivar: _isStandaloneProximityTransfer
@property (retain) TSTransferFlowModel *model; // ivar: _model
@property (retain) CUMessageSession *session; // ivar: _session
@property (readonly) Class superclass;


+(void)needsToRunUsingMessageSession:(id)arg0 completion:(id)arg1 ;
+(void)needsToRunUsingMessageSession:(id)arg0 transferablePlanOnSource:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_hasTransferablePlan:(id)arg0 ;
-(id)_createIntroViewController;
-(id)_firstViewController:(id)arg0 ;
-(id)firstViewController;
-(id)init;
-(id)initWithSession:(id)arg0 hasTransferablePlan:(BOOL)arg1 isStandaloneProximityTransfer:(BOOL)arg2 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)_userDidTapCancel;
-(void)dealloc;
-(void)firstViewController:(id)arg0 ;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)startOverWithFirstViewController:(id)arg0 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif