// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSSHAREDWEBCREDENTIALSAPPLINK_H
#define _LSSHAREDWEBCREDENTIALSAPPLINK_H

@class _SWCServiceDetails;


#import "LSAppLink.h"

@interface _LSSharedWebCredentialsAppLink : LSAppLink

@property (readonly) LSBinding binding; // ivar: _binding
@property (retain, nonatomic) _SWCServiceDetails *serviceDetails; // ivar: _serviceDetails


+(BOOL)_areAppLinksEnabledForServiceDetails:(id)arg0 cachedSettings:(*id)arg1 ;
+(BOOL)_setSWCSetting:(id)arg0 forKey:(id)arg1 withApplicationIdentifier:(id)arg2 error:(*id)arg3 ;
+(BOOL)removeAllSettingsReturningError:(*id)arg0 ;
+(BOOL)setSettingsSwitchState:(NSInteger)arg0 forApplicationIdentifier:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)settingsSwitchStateForApplicationIdentifier:(id)arg0 ;
+(id)_SWCSettingsWithApplicationIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)_SWCSpecifierForSettingsWithApplicationIdentifier:(id)arg0 ;
+(void)afterAppLinksBecomeAvailableForURL:(id)arg0 limit:(NSUInteger)arg1 performBlock:(id)arg2 ;
+(void)initialize;
-(BOOL)_setSWCSetting:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEnabled;
-(BOOL)removeSettingsReturningError:(*id)arg0 ;
-(BOOL)setBrowserSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)setEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(id)_SWCSettingsReturningError:(*id)arg0 ;
-(id)_SWCSpecifierForSettings;
-(id)browserSettings;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif