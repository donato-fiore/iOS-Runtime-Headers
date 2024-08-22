// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDSETUPUICONTROLLER_H
#define MSDSETUPUICONTROLLER_H

@class BFFNavigationController;

#import <Foundation/Foundation.h>


@interface MSDSetupUIController : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) BFFNavigationController *navigationController; // ivar: _navigationController


+(id)sharedInstance;
-(BOOL)hasSecureCookie;
-(void)_setupComplete:(BOOL)arg0 ;
-(void)_startEACSWithReason:(id)arg0 eraseDataPlan:(BOOL)arg1 ;
-(void)markAsNotDemoAndEraseDataPlan:(BOOL)arg0 ;
-(void)popTopmostViewController;
-(void)pushViewController:(id)arg0 andRemoveTopmostView:(BOOL)arg1 ;
-(void)quitToCustomerFlow;
-(void)quitToHomeScreen;
-(void)setupCompleteWithStoreID:(id)arg0 ;


@end


#endif