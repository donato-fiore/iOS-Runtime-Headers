// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPDSECUREBACKUPCONFIGURATION_H
#define CDPDSECUREBACKUPCONFIGURATION_H

@class CDPContext, NSDictionary, NSURLSession;

#import <Foundation/Foundation.h>


@interface CDPDSecureBackupConfiguration : NSObject {
    CDPContext *_context;
    NSDictionary *_configurationURLs;
    NSDictionary *_escrowConfigurationURLs;
    NSURLSession *_session;
}




+(id)_configurationRequestWithURLString:(id)arg0 ;
+(id)configurationWithContext:(id)arg0 ;
+(id)configurationWithContext:(id)arg0 andSession:(id)arg1 ;
-(id)_configurationInfoURLRequest;
-(id)_escrowConfigurationBag;
-(id)_escrowConfigurationBagFull;
-(id)_escrowProxyConfigurationURL;
-(id)_escrowProxyConfigurationURLRequest;
-(id)_escrowProxyURL;
-(id)_fetchConfigurationDictionary;
-(id)_fetchConfigurationWithRequest:(id)arg0 ;
-(id)_fetchEscrowConfigurationBag;
-(id)_iCloudEnvironment;
-(id)_setupConfigurationURLs;
-(id)accountInfoFetchSetupDictionary;
-(id)escrowAuthInfo;


@end


#endif