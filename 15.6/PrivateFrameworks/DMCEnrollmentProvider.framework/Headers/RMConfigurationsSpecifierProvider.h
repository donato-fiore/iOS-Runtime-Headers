// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMCONFIGURATIONSSPECIFIERPROVIDER_H
#define RMCONFIGURATIONSSPECIFIERPROVIDER_H

@class RMObserverStore;


#import "DMCSpecifierProvider.h"
#import "RMLegacyProfilesSpecifierProvider.h"
#import "RMPasscodeSpecifierProvider.h"

@interface RMConfigurationsSpecifierProvider : DMCSpecifierProvider

@property (nonatomic) BOOL knownNoObserverStore; // ivar: _knownNoObserverStore
@property (retain, nonatomic) RMLegacyProfilesSpecifierProvider *legacyProfilesProvider; // ivar: _legacyProfilesProvider
@property (retain, nonatomic) RMObserverStore *observerStore; // ivar: _observerStore
@property (retain, nonatomic) RMPasscodeSpecifierProvider *passcodeProvider; // ivar: _passcodeProvider


-(id)_activityIndicatorSpecifier;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 ;
-(id)specifiers;
-(id)specifiersReloadedNotificationName;
-(void)_loadObserverStore;
-(void)_reloadControllers;
-(void)reloadNotificationPosted:(id)arg0 ;


@end


#endif