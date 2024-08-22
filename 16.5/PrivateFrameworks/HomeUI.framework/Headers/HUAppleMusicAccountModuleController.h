// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAPPLEMUSICACCOUNTMODULECONTROLLER_H
#define HUAPPLEMUSICACCOUNTMODULECONTROLLER_H

@class NSMapTable, NAFuture;
@protocol HUAppleMusicAccountModuleControllerDelegate;


#import "HUItemModuleController.h"
#import "HUButtonCell.h"
#import "HUAppleMusicAccountModule.h"

@interface HUAppleMusicAccountModuleController : HUItemModuleController

@property (weak, nonatomic) HUButtonCell *activeAuthCell; // ivar: _activeAuthCell
@property (weak, nonatomic) NSObject<HUAppleMusicAccountModuleControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMapTable *itemToCellMap; // ivar: _itemToCellMap
@property (weak, nonatomic) HUButtonCell *loginButton; // ivar: _loginButton
@property (retain, nonatomic) NAFuture *loginFuture; // ivar: _loginFuture
@property (weak, nonatomic) HUButtonCell *logoutButton; // ivar: _logoutButton
@property (retain, nonatomic) NAFuture *logoutFuture; // ivar: _logoutFuture
@property (readonly, nonatomic) HUAppleMusicAccountModule *module;


-(BOOL)_canExecuteAccountAction;
-(BOOL)canSelectItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)_authCells;
-(id)_authenticationContextForAccessory:(id)arg0 account:(id)arg1 ;
-(id)_companionLoginWithAccount:(id)arg0 cell:(id)arg1 ;
-(id)_proxyLoginWithAccount:(id)arg0 cell:(id)arg1 ;
-(id)initWithModule:(id)arg0 ;
-(id)kickOffManualLogin;
-(void)_disableCells;
-(void)_enableCells;
-(void)_reloadForAuthEvent;
-(void)_setupButtonCell:(id)arg0 enabled:(BOOL)arg1 ;
-(void)_setupCompanionAuthenticationForAccount:(id)arg0 cell:(id)arg1 ;
-(void)_setupProxyAuthenticationForAccount:(id)arg0 cell:(id)arg1 ;
-(void)_updateModuleState:(NSUInteger)arg0 notifyDelegate:(BOOL)arg1 ;
-(void)clearLogoutFuture;
-(void)dealloc;
-(void)logout;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif