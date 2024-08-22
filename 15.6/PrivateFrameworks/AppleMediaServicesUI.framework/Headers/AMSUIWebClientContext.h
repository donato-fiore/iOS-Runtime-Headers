// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBCLIENTCONTEXT_H
#define AMSUIWEBCLIENTCONTEXT_H

@class AMSURLSession, ACAccount, NSDictionary, AMSSnapshotBag, AMSProcessInfo, NSString, AMSMescalAccountPrimeSession, AMSMetrics;
@protocol AMSUIWebActionRunnerDelegate, AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSUIWebJSDataProvider.h"
#import "AMSUIWebFlowController.h"
#import "AMSUIWebPluginLoader.h"
#import "AMSUIWebPageViewController.h"

@interface AMSUIWebClientContext : NSObject

@property (retain, nonatomic) AMSURLSession *URLSession; // ivar: _URLSession
@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (weak, nonatomic) NSObject<AMSUIWebActionRunnerDelegate> *actionDelegate; // ivar: _actionDelegate
@property (retain, nonatomic) NSDictionary *additionalHeaders; // ivar: _additionalHeaders
@property (retain, nonatomic) NSObject<AMSBagProtocol> *backingBag; // ivar: _backingBag
@property (readonly, nonatomic) AMSSnapshotBag *bag; // ivar: _bag
@property (readonly, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (retain, nonatomic) NSDictionary *clientOptions; // ivar: _clientOptions
@property (retain, nonatomic) AMSUIWebJSDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, nonatomic) BOOL disableTrustedDomains;
@property (retain, nonatomic) AMSUIWebFlowController *flowController; // ivar: _flowController
@property (nonatomic) BOOL loadUsingWebKit; // ivar: _loadUsingWebKit
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) AMSMescalAccountPrimeSession *mescalSession; // ivar: _mescalSession
@property (retain, nonatomic) AMSMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) NSDictionary *metricsOverlay; // ivar: _metricsOverlay
@property (retain, nonatomic) AMSUIWebPluginLoader *pluginLoader; // ivar: _pluginLoader
@property (nonatomic) BOOL signatureResumption; // ivar: _signatureResumption
@property (weak, nonatomic) AMSUIWebPageViewController *webPage; // ivar: _webPage


+(BOOL)_boolForKey:(id)arg0 defaultValue:(BOOL)arg1 domain:(struct __CFString *)arg2 ;
+(id)_createClientInfoFromAccount:(id)arg0 clientInfo:(id)arg1 ;
-(id)JSAccountFromAccount:(id)arg0 store:(id)arg1 ;
-(id)iTunesAccountFromJSAccount:(id)arg0 ;
-(id)iTunesAccountFromJSDSID:(id)arg0 ;
-(id)initWithAccount:(id)arg0 clientInfo:(id)arg1 backingBag:(id)arg2 ;
-(id)loadSnapshot;
-(void)replaceCurrentAccount:(id)arg0 clientInfo:(id)arg1 ;
-(void)updateBackingBag:(id)arg0 ;


@end


#endif