// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEUTILCONFIGURATIONCLIENT_H
#define NEUTILCONFIGURATIONCLIENT_H

@class NSString, NSMutableArray, NSArray;
@protocol NEConfigurationCommandHandling;

#import <Foundation/Foundation.h>

#import "NEAppPush.h"
#import "NEConfiguration.h"
#import "NEDNSProxyProviderProtocol.h"
#import "NEDNSSettingsBundle.h"
#import "NEFilterProviderConfiguration.h"
#import "NEConfigurationManager.h"

@interface NEUtilConfigurationClient : NSObject <NEConfigurationCommandHandling>



@property (readonly) NEAppPush *appPush;
@property (readonly) NSString *clientName; // ivar: _clientName
@property (retain) NSMutableArray *createdConfigurations; // ivar: _createdConfigurations
@property (retain) NEConfiguration *currentConfiguration; // ivar: _currentConfiguration
@property (retain) NSMutableArray *currentConfigurations; // ivar: _currentConfigurations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disconnectOnDemandEnabled;
@property (readonly) NEDNSProxyProviderProtocol *dnsProxyConfiguration;
@property (readonly) NEDNSSettingsBundle *dnsSettingsBundle;
@property BOOL enabled;
@property (readonly) NEFilterProviderConfiguration *filterConfiguration;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableArray *identities; // ivar: _identities
@property (readonly) BOOL isAlwaysOn; // ivar: _isAlwaysOn
@property (readonly) NEConfigurationManager *manager; // ivar: _manager
@property BOOL onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property BOOL onDemandUserOverrideDisabled;
@property (readonly) Class superclass;


+(id)allClients;
+(id)clientWithName:(id)arg0 ;
+(void)removeClientWithName:(id)arg0 ;
-(BOOL)addAppRuleWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)addOnDemandRuleWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)addPathRuleWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)createConfigurationWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)isIsAlwaysOn;
-(BOOL)removeAppRuleWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)removeOnDemandRuleWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)removePathRuleWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setAlwaysOnParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setCommonParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setDNSParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setDNSProxyWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setFilterPluginWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setIPSecParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setPPPParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setPasswordWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setPathControllerWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setProtocolWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setProviderTypeWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setProxyParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setProxyServer:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setSharedSecretWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)swapConfigurationTypeWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetAlwaysOnParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetCommonParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetDNSParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetDNSProxyWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetFilterPluginParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetIPSecParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetPPPParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetPasswordWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetProxyParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetProxyServer:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetSharedSecretWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(id)decodeConfigurationWithIdentifier:(id)arg0 andDecoder:(id)arg1 ;
-(id)initInternalWithClientName:(id)arg0 ;
-(id)initWithClientName:(id)arg0 ;
-(id)protocolForParameters:(id)arg0 ;
-(id)readIndexFromDiskForGivenPatahWithError:(id)arg0 returnError:(*id)arg1 fileDecoder:(*id)arg2 ;
-(void)addIdentityProperties:(id)arg0 withDomain:(NSInteger)arg1 ;
-(void)dealloc;
-(void)handleCommand:(int)arg0 forConfigWithName:(id)arg1 withParameters:(id)arg2 completionHandler:(id)arg3 ;
-(void)loadConfigurationWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadConfigurationsForceRefresh:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)loadFromDiskForGivenPath:(id)arg0 configName:(id)arg1 completionHandler:(id)arg2 ;
-(void)reloadIdentityListWithCompletionHandler:(id)arg0 ;


@end


#endif