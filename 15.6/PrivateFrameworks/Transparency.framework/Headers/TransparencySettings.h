// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYSETTINGS_H
#define TRANSPARENCYSETTINGS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TransparencySettings : NSObject

@property (retain) NSDictionary *settings; // ivar: _settings


+(BOOL)allowsInternalSecurityPolicies;
+(BOOL)getBool:(id)arg0 ;
+(BOOL)isAccountsInQA;
+(CGFloat)defaultNetworkTimeout;
+(CGFloat)defaultQueryCacheTimeout;
+(NSUInteger)getEnvironment;
+(id)deviceUserAgent;
+(id)getIMEnvironmentName;


@end


#endif