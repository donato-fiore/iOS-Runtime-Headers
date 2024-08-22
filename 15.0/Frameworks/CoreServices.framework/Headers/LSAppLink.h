// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSAPPLINK_H
#define LSAPPLINK_H

@class NSURL, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LSApplicationProxy.h"
#import "LSApplicationRecord.h"

@interface LSAppLink : NSObject <NSSecureCoding>



@property (copy) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSDictionary *browserSettings;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property NSInteger openStrategy;
@property (readonly) LSApplicationProxy *targetApplicationProxy; // ivar: _targetApplicationProxy
@property (retain) LSApplicationRecord *targetApplicationRecord; // ivar: _targetApplicationRecord


+(BOOL)URLComponentsAreValidForAppLinks:(id)arg0 error:(*id)arg1 ;
+(BOOL)_URLIsValidForAppLinks:(id)arg0 error:(*id)arg1 ;
+(BOOL)areEnabledByDefault;
+(BOOL)auditTokenHasReadAccess:(struct ? )arg0 ;
+(BOOL)auditTokenHasWriteAccess:(struct ? )arg0 ;
+(BOOL)currentProcessHasReadAccess;
+(BOOL)currentProcessHasWriteAccess;
+(BOOL)removeAllSettingsReturningError:(*id)arg0 ;
+(BOOL)setSettingsSwitchState:(NSInteger)arg0 forApplicationIdentifier:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)settingsSwitchStateForApplicationIdentifier:(id)arg0 ;
+(id)_appLinkWithURL:(id)arg0 applicationRecord:(id)arg1 plugInClass:(Class)arg2 ;
+(id)_appLinksWithState:(id)arg0 context:(struct LSContext *)arg1 limit:(NSUInteger)arg2 URLComponents:(id)arg3 error:(*id)arg4 ;
+(id)_appLinksWithState:(id)arg0 context:(struct LSContext *)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)_dispatchQueue;
+(id)appLinksWithURL:(id)arg0 limit:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)appLinksWithURL:(id)arg0 limit:(NSUInteger)arg1 includeLinksForCurrentApplication:(BOOL)arg2 error:(*id)arg3 ;
+(void)_openAppLink:(id)arg0 state:(id)arg1 completionHandler:(id)arg2 ;
+(void)_openWithAppLink:(id)arg0 state:(id)arg1 completionHandler:(id)arg2 ;
+(void)afterAppLinksBecomeAvailableForURL:(id)arg0 limit:(NSUInteger)arg1 performBlock:(id)arg2 ;
+(void)getAppLinkWithURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)getAppLinksWithURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)openWithURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)openWithURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)removeSettingsReturningError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)_userActivityWithState:(id)arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)openInWebBrowser:(BOOL)arg0 setAppropriateOpenStrategyAndWebBrowserState:(id)arg1 completionHandler:(id)arg2 ;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)openWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif