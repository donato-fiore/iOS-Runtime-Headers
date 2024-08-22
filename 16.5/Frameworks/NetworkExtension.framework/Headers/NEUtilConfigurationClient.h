// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEUTILCONFIGURATIONCLIENT_H
#define NEUTILCONFIGURATIONCLIENT_H

@class NSMutableArray, NSString, NSArray;
@protocol NEConfigurationCommandHandling;

#import <Foundation/Foundation.h>

#import "NEConfigurationManager.h"
#import "NEConfiguration.h"
#import "NEAppPush.h"
#import "NEDNSProxyProviderProtocol.h"
#import "NEDNSSettingsBundle.h"
#import "NEFilterProviderConfiguration.h"

@interface NEUtilConfigurationClient : NSObject <NEConfigurationCommandHandling>

 {
    NEConfigurationManager *_manager;
    NSMutableArray *_createdConfigurations;
    NSMutableArray *_currentConfigurations;
    NSMutableArray *_identities;
    NEConfiguration *_currentConfiguration;
}


@property (readonly) NEAppPush *appPush;
@property (readonly) NSString *clientName; // ivar: _clientName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disconnectOnDemandEnabled;
@property (readonly) NEDNSProxyProviderProtocol *dnsProxyConfiguration;
@property (readonly) NEDNSSettingsBundle *dnsSettingsBundle;
@property BOOL enabled;
@property (readonly) NEFilterProviderConfiguration *filterConfiguration;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isAlwaysOn; // ivar: _isAlwaysOn
@property BOOL onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property BOOL onDemandUserOverrideDisabled;
@property (readonly) Class superclass;


+(id)clientWithName:(id)arg0 ;
+(void)removeClientWithName:(id)arg0 ;
-(BOOL)addOnDemandRuleWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)createConfigurationWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)removeOnDemandRuleWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setCommonParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setDNSParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setDNSProxyWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setFilterPluginWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setIPSecParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setPasswordWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setProtocolWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setProviderTypeWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setProxyParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setProxyServer:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setSharedSecretWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetCommonParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetDNSParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetDNSProxyWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetFilterPluginParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetIPSecParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetPasswordWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetProxyParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetProxyServer:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetSharedSecretWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(id)initInternalWithClientName:(id)arg0 ;
-(id)initWithClientName:(id)arg0 ;
-(id)protocolForParameters:(id)arg0 ;
-(void)dealloc;
-(void)handleCommand:(int)arg0 forConfigWithName:(id)arg1 withParameters:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif