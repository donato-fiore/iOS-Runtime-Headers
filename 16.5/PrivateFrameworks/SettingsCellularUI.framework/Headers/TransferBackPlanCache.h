// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRANSFERBACKPLANCACHE_H
#define TRANSFERBACKPLANCACHE_H

@class NSTimer, NSString, NSArray, NSError, TSSIMSetupFlow, UINavigationController, UIViewController, CTCellularPlanItem;
@protocol TSSIMSetupDelegate, PSUIReActivateSIMSpecifierModelDelegate;

#import <Foundation/Foundation.h>


@interface TransferBackPlanCache : NSObject <TSSIMSetupDelegate>



@property (retain) NSTimer *activateTimer; // ivar: _activateTimer
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<PSUIReActivateSIMSpecifierModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSArray *existedIccids; // ivar: _existedIccids
@property (retain) NSError *failureWebsheetError; // ivar: _failureWebsheetError
@property (retain) TSSIMSetupFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (retain) NSString *installingIccid; // ivar: _installingIccid
@property BOOL isPlanReactivated; // ivar: _isPlanReactivated
@property (weak) UINavigationController *navigationController; // ivar: _navigationController
@property (retain) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;
@property (retain) id *transferBackItem; // ivar: _transferBackItem
@property (retain) NSError *transferError; // ivar: _transferError
@property (retain) CTCellularPlanItem *transferToItem; // ivar: _transferToItem


-(BOOL)_canLaunchSIMSetupFlow;
-(id)getLogger;
-(id)initWithDelegate:(id)arg0 navigationController:(id)arg1 transferBackPlan:(id)arg2 ;
-(void)_handleActivateExpiry;
-(void)_prepareSIMSetupFlow;
-(void)_presentViewController:(id)arg0 ;
-(void)_showWifiAlert;
-(void)_useLine:(BOOL)arg0 forPlan:(id)arg1 ;
-(void)cellularPlanChanged:(id)arg0 ;
-(void)dealloc;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;
-(void)transferBack:(id)arg0 ;


@end


#endif