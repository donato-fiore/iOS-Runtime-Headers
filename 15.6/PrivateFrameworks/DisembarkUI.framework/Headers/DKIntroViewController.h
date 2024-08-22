// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKINTROVIEWCONTROLLER_H
#define DKINTROVIEWCONTROLLER_H

@class OBWelcomeController, NSArray;


#import "DKNotableUserData.h"

@interface DKIntroViewController : OBWelcomeController

@property (copy, nonatomic) id *beginEraseBlock; // ivar: _beginEraseBlock
@property (copy, nonatomic) id *eraseLaterBlock; // ivar: _eraseLaterBlock
@property (copy, nonatomic) id *fetchRestoreState; // ivar: _fetchRestoreState
@property (copy, nonatomic) id *hasInternetConnectivity; // ivar: _hasInternetConnectivity
@property (nonatomic) BOOL isBasebandDead; // ivar: _isBasebandDead
@property (retain, nonatomic) NSArray *localPaymentCards; // ivar: _localPaymentCards
@property (retain, nonatomic) DKNotableUserData *notableUserData; // ivar: _notableUserData
@property (nonatomic) BOOL preventOpeningSafari; // ivar: _preventOpeningSafari


-(id)_createNotableUserDataCardForAccounts:(id)arg0 ;
-(id)_createNotableUserDataCardForAppsAndData:(NSInteger)arg0 ;
-(id)_createNotableUserDataCardForCellularPlans:(id)arg0 ;
-(id)_createNotableUserDataCardForFindMy:(BOOL)arg0 ;
-(id)_createNotableUserDataCardForWallet:(id)arg0 ;
-(id)init;
-(void)_addNotableUserDataItemsView;
-(void)_continueTapped:(id)arg0 ;
-(void)_notNowTapped:(id)arg0 ;
-(void)_presentBasebandDeadWarning:(id)arg0 ;
-(void)_presentLocalDataWarning:(id)arg0 ;
-(void)_presentLocalPaymentCardConfirmation:(id)arg0 ;
-(void)_presentRestoreWarning:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif