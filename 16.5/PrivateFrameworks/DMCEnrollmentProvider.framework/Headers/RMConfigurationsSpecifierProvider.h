// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMCONFIGURATIONSSPECIFIERPROVIDER_H
#define RMCONFIGURATIONSSPECIFIERPROVIDER_H

@class RMUIConfigurationInterface;


#import "DMCSpecifierProvider.h"

@interface RMConfigurationsSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) RMUIConfigurationInterface *rmuiConfigInterface; // ivar: _rmuiConfigInterface


-(id)_accountSpecifiers;
-(id)_isActivatedProfileText:(id)arg0 ;
-(id)_passcodeSpecifier;
-(id)_profileSpecifiers;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithMDMProfileIdentifier:(id)arg0 ;
-(id)specifiers;
-(id)specifiersReloadedNotificationName;


@end


#endif