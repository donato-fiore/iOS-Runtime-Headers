// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDEXTENSIONMANAGER_H
#define FPDEXTENSIONMANAGER_H

@class NSMutableDictionary, NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "FPDPushConnection.h"
#import "FPDServer.h"

@interface FPDExtensionManager : NSObject {
    NSMutableDictionary *_providersByIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_providersLoadedGroup;
    id *_matchingContext;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSMapTable *_sessionQueueForExtensionIdentifier;
    id *_updateHandler;
}


@property (readonly, nonatomic) FPDPushConnection *pushConnection; // ivar: _pushConnection
@property (weak, nonatomic) FPDServer *server; // ivar: _server


+(BOOL)shouldHideDomainDisplayNameWithRelevantDomains:(id)arg0 ;
-(id)_deserializedAlternateContentsDictionary;
-(id)_domainForURL:(id)arg0 ;
-(id)_matchingAttributes;
-(id)allProviders;
-(id)alternateContentsDictionaryForProviderIdentifier:(id)arg0 ;
-(id)alternateContentsURLForItemID:(id)arg0 ;
-(id)clouddocsExtensionIdentifier;
-(id)defaultProviderWithTopLevelBundleIdentifier:(id)arg0 ;
-(id)domainForActionOperationLocator:(id)arg0 ;
-(id)domainForURL:(id)arg0 ;
-(id)domainFromItemID:(id)arg0 ;
-(id)domainWithID:(id)arg0 ;
-(id)extensionsByID:(id)arg0 ;
-(id)initWithServer:(id)arg0 updateHandler:(id)arg1 ;
-(id)nonEvictableSizeByProviderDomain;
-(id)providerDomainsByID;
-(id)providerDomainsByIDFromExtensionsByID:(id)arg0 ;
-(id)providerWithIdentifier:(id)arg0 ;
-(id)providersWithGroupContainers:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)providersWithTopLevelBundleIdentifier:(id)arg0 ;
-(id)uniquedExtensions:(id)arg0 ;
-(void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)arg0 ;
-(void)_loadAlternateContentsDictionary;
-(void)_serializeAlternateContentsURLDictionary:(id)arg0 ;
-(void)_updateProviderListForMatchingExtensions:(id)arg0 allExtensionStartedHandler:(id)arg1 ;
-(void)_updateWithMatchingExtensions:(id)arg0 ;
-(void)accountsChanged;
-(void)afterFirstDiscovery;
-(void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
-(void)forceSynchronousProviderUpdate;
-(void)garbageCollectDomainsWithIdentifiers:(id)arg0 fromDirectory:(id)arg1 isUserData:(BOOL)arg2 ;
-(void)loadProvidersAndMonitor;
-(void)migrateEnabledStateIfNecessary:(id)arg0 ;
-(void)setAlternateContentsURL:(id)arg0 forItemID:(id)arg1 ;


@end


#endif