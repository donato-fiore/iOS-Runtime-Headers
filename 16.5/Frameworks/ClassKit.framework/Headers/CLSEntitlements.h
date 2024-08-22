// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSENTITLEMENTS_H
#define CLSENTITLEMENTS_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CLSEntitlements : NSObject

@property (readonly, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, nonatomic) NSString *classKitEnvironment;
@property (readonly, copy, nonatomic) NSDictionary *entitlements; // ivar: _entitlements


+(BOOL)isDashboardAppProcess;
+(BOOL)isInternalProcess;
+(BOOL)isPrivateSearchEnabledProcess;
+(BOOL)isSearchEnabledProcess;
+(id)allowedEntitlements;
+(id)entitlementsForCurrentTaskWithError:(*id)arg0 ;
+(id)entitlementsWithConnection:(id)arg0 error:(*id)arg1 ;
+(id)entitlementsWithSecTask:(struct __SecTask *)arg0 overrides:(id)arg1 error:(*id)arg2 ;
-(BOOL)boolValueForEntitlement:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)isDashboardAPIEnabled;
-(BOOL)isInDevelopmentEnvironment;
-(BOOL)isInternal;
-(BOOL)isPrivateSearchAPIEnabled;
-(BOOL)isPublicClassKitAPIEnabled;
-(BOOL)isRegisterDashboardEnabled;
-(BOOL)isSearchAPIEnabled;
-(id)init;
-(id)initWithEntitlements:(id)arg0 ;
-(id)stringValueForEntitlement:(id)arg0 error:(*id)arg1 ;


@end


#endif