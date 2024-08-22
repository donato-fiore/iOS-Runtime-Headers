// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSSIMSETUPFLOW_H
#define TSSIMSETUPFLOW_H

@class NSString, UIViewController;
@protocol TSSIMSetupFlowDelegate, TSSIMSetupDelegate;

#import <Foundation/Foundation.h>


@interface TSSIMSetupFlow : NSObject <TSSIMSetupFlowDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak) UIViewController *topViewController; // ivar: _topViewController


+(id)createTSRemotePlanWebsheetContext:(id)arg0 ;
+(id)flowWithOptions:(id)arg0 ;
+(id)initActivationCodeRequireSetup:(BOOL)arg0 ;
+(id)initWithActivationCodeOnlyFlow;
+(id)initWithAppName:(id)arg0 requireSetup:(BOOL)arg1 ;
+(id)initWithAppName:(id)arg0 requireSetup:(BOOL)arg1 skipGeneralInstallConsent:(BOOL)arg2 ;
+(id)initWithOptions:(id)arg0 ;
+(id)initWithSetupFlowWithIccid:(id)arg0 showAddPlan:(BOOL)arg1 ;
+(void)needsToRun:(id)arg0 ;
+(void)needsToRunUsingMessageSession:(id)arg0 completion:(id)arg1 ;
+(void)needsToRunUsingMessageSession:(id)arg0 transferablePlanOnSource:(BOOL)arg1 completion:(id)arg2 ;
-(id)firstViewController;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)firstViewController:(id)arg0 ;
-(void)navigateToNextPaneFrom:(id)arg0 navigationController:(id)arg1 ;
-(void)receivedResponse;
-(void)userDidTapCancel;
-(void)viewControllerDidComplete:(id)arg0 ;
-(void)waitForResponse:(id)arg0 ;


@end


#endif