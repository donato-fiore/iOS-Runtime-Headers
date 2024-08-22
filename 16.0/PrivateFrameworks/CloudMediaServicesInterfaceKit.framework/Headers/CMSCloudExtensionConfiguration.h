// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSCLOUDEXTENSIONCONFIGURATION_H
#define CMSCLOUDEXTENSIONCONFIGURATION_H

@class NSURL, NSDictionary, NSDate, NSMutableDictionary, NSString, NSError;

#import <Foundation/Foundation.h>

#import "CMSNetworkActivity.h"

@interface CMSCloudExtensionConfiguration : NSObject

@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) NSDictionary *configDictionary; // ivar: _configDictionary
@property (retain, nonatomic) NSDate *configExpiry; // ivar: _configExpiry
@property (readonly, nonatomic) NSURL *configUrl; // ivar: _configUrl
@property (retain, nonatomic) NSMutableDictionary *endpointConfigs; // ivar: _endpointConfigs
@property (readonly, nonatomic, getter=isExpiringSoon) BOOL expiringSoon;
@property (readonly, nonatomic) NSDictionary *globalHeaders; // ivar: _globalHeaders
@property (readonly, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) CMSNetworkActivity *parentNetworkActivity; // ivar: _parentNetworkActivity
@property (readonly, nonatomic) NSError *parsingError; // ivar: _parsingError
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(id)_configurationFromJWS:(id)arg0 URL:(id)arg1 parentNetworkActivity:(id)arg2 keyID:(id)arg3 publicKey:(id)arg4 languageCode:(id)arg5 error:(*id)arg6 ;
+(void)configurationFromURL:(id)arg0 forSession:(id)arg1 usingAuth:(id)arg2 authProvider:(id)arg3 parentNetworkActivity:(id)arg4 keyID:(id)arg5 publicKey:(id)arg6 URLSessionConfiguration:(id)arg7 languageCode:(id)arg8 completion:(id)arg9 ;
-(id)configForEndpoint:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 fromURL:(id)arg1 parentNetworkActivity:(id)arg2 languageCode:(id)arg3 ;
-(void)_configureEndpoint:(id)arg0 withDictionary:(id)arg1 headers:(id)arg2 ;


@end


#endif