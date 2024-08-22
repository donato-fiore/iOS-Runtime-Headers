// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPROFILEINGESTION_H
#define NEPROFILEINGESTION_H

@class NSString, NSMutableArray;
@protocol NEProfileIngestionDelegate;

#import <Foundation/Foundation.h>

#import "NEConfiguration.h"
#import "NEConfigurationManager.h"

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate>



@property (readonly) NSString *clientName; // ivar: _clientName
@property (retain) NSMutableArray *currentConfigurations; // ivar: _currentConfigurations
@property (retain) NEConfiguration *ingestedConfiguration; // ivar: _ingestedConfiguration
@property (readonly) NEConfigurationManager *manager; // ivar: _manager
@property (readonly) NSString *payloadType; // ivar: _payloadType


+(id)getServiceIDForPayload:(id)arg0 ;
+(void)profileMigrationComplete;
-(BOOL)createConfigurationFromPayload:(id)arg0 payloadType:(id)arg1 ;
-(BOOL)enableAlwaysOnVpn;
-(BOOL)isInstalled:(id)arg0 ;
-(BOOL)loadConfigurationsForceReloadFromDisk;
-(BOOL)lockConfigurations;
-(BOOL)removeConfiguration:(id)arg0 ;
-(BOOL)removeConfigurationWithIdentifier:(id)arg0 ;
-(BOOL)removeIngestedConfiguration;
-(BOOL)saveIngestedConfiguration;
-(BOOL)saveIngestedConfiguration:(*id)arg0 ;
-(BOOL)updateAccountIdentifiers:(id)arg0 ;
-(BOOL)updateAppLayerVPNMappingRules:(id)arg0 ;
-(BOOL)updateDefaultAfterAddingConfiguration;
-(BOOL)updateDefaultAfterDeletingConfiguration;
-(BOOL)updateManagedAppRules:(id)arg0 ;
-(BOOL)updatePerAppMappingRules:(id)arg0 ;
-(id)copyManagedConfigurationIDs;
-(id)findConfigurationByConfigurationID:(id)arg0 ;
-(id)findConfigurationByName:(id)arg0 ;
-(id)findConfigurationByPayloadUUID:(id)arg0 ;
-(id)getCertificatesForConfigurationWithIdentifier:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithNameAndType:(id)arg0 payloadType:(id)arg1 ;
-(id)setAsideConfigurationName:(id)arg0 unsetAside:(BOOL)arg1 ;
-(void)dealloc;
-(void)enableDefaultService;
-(void)removeAllConfigurationsWithPayload:(id)arg0 profile:(id)arg1 ;
-(void)unlockConfigurations;


@end


#endif