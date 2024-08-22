// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFBETAAPPLICATIONPROXY_H
#define TFBETAAPPLICATIONPROXY_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface TFBetaApplicationProxy : NSObject

@property (nonatomic) NSInteger bundleAppPlatform; // ivar: _bundleAppPlatform
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, copy, nonatomic) NSString *logKey; // ivar: _logKey
@property (readonly, copy, nonatomic) NSString *preferredLocalizedDisplayNameForInstalledVersion;


-(BOOL)isBetaAppLaunchScreenEnabledForInstalledVersion;
-(BOOL)isProactiveFeedbackEnabledForInstalledVersion;
-(NSInteger)_asdAppPlatform;
-(id)initForAppWithBundleURL:(id)arg0 ;
-(id)initForAppWithIdentifier:(id)arg0 ;
-(id)initForAppWithIdentifier:(id)arg0 appPlatform:(NSInteger)arg1 ;
-(void)deviceWillInstallVersion:(id)arg0 build:(id)arg1 withLocalizedDisplayNames:(id)arg2 localizedTestNotes:(id)arg3 primaryLocaleKey:(id)arg4 developerName:(id)arg5 expirationDate:(id)arg6 iconUrlTemplate:(id)arg7 testerEmail:(id)arg8 ;
-(void)overwriteMetadataForInstalledVersion:(id)arg0 build:(id)arg1 withLocalizedDisplayNames:(id)arg2 localizedTestNotes:(id)arg3 primaryLocaleKey:(id)arg4 developerName:(id)arg5 expirationDate:(id)arg6 iconUrlTemplate:(id)arg7 testerEmail:(id)arg8 ;
-(void)setBetaAppLaunchScreenEnabled:(BOOL)arg0 forVersion:(id)arg1 build:(id)arg2 ;
-(void)setProactiveFeedbackEnabled:(BOOL)arg0 forVersion:(id)arg1 build:(id)arg2 ;
-(void)updateLocalizedTestNotes:(id)arg0 forVersion:(id)arg1 build:(id)arg2 ;


@end


#endif