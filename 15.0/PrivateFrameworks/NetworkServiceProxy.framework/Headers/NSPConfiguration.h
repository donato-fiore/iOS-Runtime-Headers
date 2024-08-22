// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPCONFIGURATION_H
#define NSPCONFIGURATION_H

@class NSString, NSArray, NSNumber, NSDate, NSDictionary, NSURLSession;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NSPConfiguration.h"
#import "NSPPrivacyProxyConfiguration.h"

@interface NSPConfiguration : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_configServerHost;
}


@property (copy) NSArray *appRules; // ivar: _appRules
@property (copy) NSNumber *cloudSubscriptionCheckEnabled; // ivar: _cloudSubscriptionCheckEnabled
@property (copy) NSNumber *configServerEnabled; // ivar: _configServerEnabled
@property (copy) NSString *configServerHost;
@property (copy) NSString *configServerPath; // ivar: _configServerPath
@property (copy) NSNumber *configServerPort; // ivar: _configServerPort
@property (copy) NSDate *configurationFetchDate; // ivar: _configurationFetchDate
@property (readonly) NSDate *dayPassExpirationDate;
@property (retain) NSPConfiguration *defaults; // ivar: _defaults
@property (readonly) NSInteger diskVersion; // ivar: _diskVersion
@property (readonly) NSDate *earliestEnableCheckDate;
@property (retain, nonatomic) NSDictionary *edgeSets; // ivar: _edgeSets
@property (copy) NSNumber *enabled; // ivar: _enabled
@property (copy) NSString *etag; // ivar: _etag
@property (retain, nonatomic) NSNumber *geohashSharingEnabledStatus; // ivar: _geohashSharingEnabledStatus
@property BOOL ignoreInvalidCerts; // ivar: _ignoreInvalidCerts
@property (readonly) BOOL isDead;
@property (copy) NSNumber *persistMetrics; // ivar: _persistMetrics
@property (retain, nonatomic) NSURLSession *privacyProxyURLSession; // ivar: _privacyProxyURLSession
@property (retain, nonatomic) NSNumber *proxyAccountType; // ivar: _proxyAccountType
@property (copy) NSPPrivacyProxyConfiguration *proxyConfiguration; // ivar: _proxyConfiguration
@property (copy) NSNumber *proxyTrafficState; // ivar: _proxyTrafficState
@property (copy) NSDate *resurrectionDate; // ivar: _resurrectionDate
@property (copy) NSNumber *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSNumber *trialConfigVersion; // ivar: _trialConfigVersion
@property (copy) NSNumber *urlRequestTimeout; // ivar: _urlRequestTimeout
@property (retain, nonatomic) NSNumber *userPreferredTier; // ivar: _userPreferredTier
@property (copy, nonatomic) NSNumber *userTier; // ivar: _userTier
@property (retain) NSNumber *version; // ivar: _version
@property (copy) NSString *waldoLeafOID; // ivar: _waldoLeafOID
@property (copy) NSNumber *waldoRevocationFailClosed; // ivar: _waldoRevocationFailClosed


+(BOOL)supportsSecureCoding;
+(BOOL)validatePrivacyProxyConfiguration:(id)arg0 ;
+(BOOL)validateSignature:(id)arg0 publicKey:(struct __SecKey *)arg1 signedData:(id)arg2 ;
+(id)defaultConfiguration;
+(id)proxyAccountTypeToString:(id)arg0 ;
+(id)proxyTrafficStateToString:(id)arg0 ;
+(void)verifyConfigurationSignature:(id)arg0 configuration:(id)arg1 host:(id)arg2 validateCert:(BOOL)arg3 completionHandler:(id)arg4 ;
-(BOOL)evaluateEnableRatios;
-(BOOL)resetStaleEdgeSets;
-(BOOL)saveToPreferences;
-(id)copyAgentResultsForAppRule:(id)arg0 ;
-(id)copyTLVData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createConfigFetchURLWithDomain:(id)arg0 timestamp:(id)arg1 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)diagnostics;
-(id)getCurrentKeyBagForAppRule:(id)arg0 ;
-(id)getEdgeSetForAppRule:(id)arg0 ;
-(id)getEdgeSetForSigningIdentifier:(id)arg0 ;
-(id)initFromKeychain;
-(id)initFromPreferences;
-(id)initFromTLVs:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 fromDictionary:(id)arg1 waldoSource:(NSInteger)arg2 ;
-(id)loadBuiltinAppRulesFromDisk;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateEdgeSetsWithBlock:(id)arg0 ;
-(void)incrementSessionCountersOnFirstLaunch;
-(void)merge:(id)arg0 ;
-(void)removeFromKeychain;
-(void)saveToKeychain;
-(void)setup;
-(void)setupNSURLSession;
-(void)teardown;
-(void)updateNetworkAgents;


@end


#endif