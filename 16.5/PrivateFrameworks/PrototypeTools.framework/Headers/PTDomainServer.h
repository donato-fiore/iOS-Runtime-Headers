// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTDOMAINSERVER_H
#define PTDOMAINSERVER_H

@class NSMutableSet, NSMutableDictionary, NSString, NSDictionary;
@protocol PTDomainServer, PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver, NSXPCListenerDelegate, PTEditingServerDataSource, PTEditingServerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PTDomainServer : NSObject <PTDomainServer, PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver, NSXPCListenerDelegate, PTEditingServerDataSource, PTEditingServerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_unregisteredClients;
    NSMutableDictionary *_clientsByDomainID;
    NSMutableDictionary *_domainInfoByID;
    NSMutableDictionary *_testRecipeInfoByID;
    NSMutableDictionary *_settingsArchivesByDomainID;
    NSMutableSet *_loadedDomainIDs;
    NSMutableDictionary *_localSettingsByClassName;
    NSMutableSet *_dirtyDomainIDs;
    BOOL _persistScheduled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *domainInfoByID;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *testRecipeInfoByID;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_queue_archiveForDomainID:(id)arg0 ;
-(id)_queue_proxyDefinitionForDomainID:(id)arg0 ;
-(id)activeTestRecipeID;
-(id)init;
-(id)localSettingsOfClass:(Class)arg0 ;
-(id)rootSettingsArchiveForDomainID:(id)arg0 ;
-(id)rootSettingsProxyDefinitionForDomainID:(id)arg0 ;
-(void)_queue_applyArchiveValue:(id)arg0 forKeyPath:(id)arg1 domainID:(id)arg2 ;
-(void)_queue_invokeOutletAtKeyPath:(id)arg0 domainID:(id)arg1 ;
-(void)_queue_persistChanges;
-(void)_queue_removeClient:(id)arg0 ;
-(void)_queue_restoreDefaultsForDomainID:(id)arg0 ;
-(void)_queue_schedulePersistChanges;
-(void)_queue_sendArchiveValue:(id)arg0 forKeyPath:(id)arg1 domainID:(id)arg2 ;
-(void)_queue_sendRestoreDefaultsForDomainID:(id)arg0 ;
-(void)applyArchiveValue:(id)arg0 forRootSettingsKeyPath:(id)arg1 domainID:(id)arg2 ;
-(void)invokeOutletAtKeyPath:(id)arg0 domainID:(id)arg1 ;
-(void)persistChanges;
-(void)registerDomainWithInfo:(id)arg0 ;
-(void)registerRootSettingsProxyDefinition:(id)arg0 forDomainID:(id)arg1 ;
-(void)registerTestRecipeWithInfo:(id)arg0 ;
-(void)restoreDefaultValuesForDomainID:(id)arg0 ;
-(void)sendEvent:(NSInteger)arg0 forTestRecipeID:(id)arg1 ;
-(void)setActiveTestRecipeID:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)settingsDidRestoreDefaults:(id)arg0 ;
-(void)settingsWillRestoreDefaults:(id)arg0 ;


@end


#endif