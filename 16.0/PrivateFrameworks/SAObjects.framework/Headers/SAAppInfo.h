// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAAPPINFO_H
#define SAAPPINFO_H

@class NSString, NSDictionary, NSArray, NSNumber;


#import "SADomainObject.h"
#import "SASyncAppIdentifyingInfo.h"
#import "SAGlance.h"
#import "SASiriSupport.h"
#import "SAStarkSupport.h"

@interface SAAppInfo : SADomainObject

@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) SASyncAppIdentifyingInfo *appIdentifyingInfo;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSDictionary *appNameMap;
@property (copy, nonatomic) NSArray *appNameSynonyms;
@property (copy, nonatomic) NSDictionary *appNameSynonymsMap;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) BOOL betaApp;
@property (copy, nonatomic) NSString *carPlayAlternativeDisplayName;
@property (copy, nonatomic) NSDictionary *carPlayAlternativeDisplayNameMap;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *displayAppName;
@property (copy, nonatomic) NSDictionary *displayAppNameMap;
@property (retain, nonatomic) SAGlance *glance;
@property (nonatomic) BOOL hasSiriIntegration;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL isMacApp;
@property (nonatomic) BOOL isNanoApp;
@property (copy, nonatomic) NSNumber *nowPlayingAppWithBrowsableContent;
@property (copy, nonatomic) NSString *providerName;
@property (retain, nonatomic) SASiriSupport *siriSupport;
@property (copy, nonatomic) NSString *spokenName;
@property (copy, nonatomic) NSDictionary *spokenNameMap;
@property (copy, nonatomic) NSString *spotlightName;
@property (copy, nonatomic) NSDictionary *spotlightNameMap;
@property (retain, nonatomic) SAStarkSupport *starkSupport;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) NSArray *supportedSchemes;
@property (nonatomic) BOOL supportsUniversalSearchSubscription;


+(id)appInfo;
+(id)appInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif