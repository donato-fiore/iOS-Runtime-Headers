// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMUICONFIGURATIONINTERFACE_H
#define RMUICONFIGURATIONINTERFACE_H

@class NSString, NSArray, ACAccount;

#import <Foundation/Foundation.h>

#import "RMUIAccountViewModelProvider.h"
#import "RMUILegacyProfilesViewModelProvider.h"
#import "RMUIPasscodeViewModelProvider.h"
#import "RMUIPasscodeViewModel.h"

@interface RMUIConfigurationInterface : NSObject

@property (readonly, nonatomic) NSString *accountDeclarationsHeading;
@property (retain, nonatomic) RMUIAccountViewModelProvider *accountProvider; // ivar: _accountProvider
@property (readonly, nonatomic) NSArray *accountViewModels;
@property (retain, nonatomic) RMUILegacyProfilesViewModelProvider *legacyProfilesProvider; // ivar: _legacyProfilesProvider
@property (readonly, copy, nonatomic) NSString *mdmProfileIdentifier; // ivar: _mdmProfileIdentifier
@property (readonly, nonatomic) NSString *passcodeDeclarationsHeading;
@property (retain, nonatomic) RMUIPasscodeViewModelProvider *passcodeProvider; // ivar: _passcodeProvider
@property (readonly, nonatomic) RMUIPasscodeViewModel *passcodeViewModel;
@property (retain, nonatomic) NSArray *privAccountViewModels; // ivar: _privAccountViewModels
@property (retain, nonatomic) RMUIPasscodeViewModel *privPasscodeViewModel; // ivar: _privPasscodeViewModel
@property (retain, nonatomic) NSArray *privProfileViewModels; // ivar: _privProfileViewModels
@property (readonly, nonatomic) NSString *profileDeclarationsHeading;
@property (readonly, nonatomic) NSArray *profileViewModels;
@property (readonly, nonatomic) ACAccount *rmAccount; // ivar: _rmAccount
@property (readonly, nonatomic) NSInteger scope; // ivar: _scope
@property (readonly, nonatomic) NSString *scopeHeading;


-(NSInteger)_rmManagementScope;
-(NSInteger)_rmScoreScope;
-(id)_observerStore;
-(id)initForTest:(NSInteger)arg0 ;
-(id)initWithAccount:(id)arg0 scope:(NSInteger)arg1 ;
-(id)initWithMDMProfileIdentifier:(id)arg0 scope:(NSInteger)arg1 ;
-(id)initWithScope:(NSInteger)arg0 ;
-(void)_activateConfiguration:(id)arg0 observerStore:(id)arg1 completionHandler:(id)arg2 ;
-(void)_deactivateConfiguration:(id)arg0 observerStore:(id)arg1 completionHandler:(id)arg2 ;
-(void)_loadObserverStore;
-(void)_reloadUI;
-(void)_reloadViewModels;
-(void)refresh;
-(void)reloadNotificationPosted:(id)arg0 ;
-(void)setConfigurationActivated:(BOOL)arg0 forViewModel:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif