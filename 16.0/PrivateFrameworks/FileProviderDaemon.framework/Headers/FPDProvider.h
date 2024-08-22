// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDPROVIDER_H
#define FPDPROVIDER_H

@class NSSet, NSString, NSMutableDictionary, NSURL, NSArray, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDExtension.h"
#import "FPDProviderDescriptor.h"
#import "FPDExtensionManager.h"
#import "FPDServer.h"

@interface FPDProvider : NSObject {
    NSObject<OS_dispatch_queue> *_domainQueue;
}


@property (readonly, nonatomic) FPDExtension *asAppExtensionBackedProvider;
@property (copy, nonatomic) NSSet *blockedProcessNames; // ivar: _blockedProcessNames
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) FPDProviderDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSMutableDictionary *domainsByID; // ivar: _domainsByID
@property (readonly, nonatomic) NSURL *domainsPlistURL; // ivar: _domainsPlistURL
@property (readonly, nonatomic) NSArray *extensionStorageURLs;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) BOOL isAppExtensionReachable;
@property (readonly, nonatomic) FPDExtensionManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSDictionary *nsDomainsByID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *presentersQueue; // ivar: _presentersQueue
@property (readonly, nonatomic) NSArray *providedItemsURLs;
@property (readonly, nonatomic) NSURL *providerPlistURL; // ivar: _providerPlistURL
@property (readonly, nonatomic) NSString *purposeIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSDictionary *relevantDomainsByID;
@property (retain, nonatomic) NSArray *requestedExtendedAttributes; // ivar: _requestedExtendedAttributes
@property (readonly, nonatomic) FPDServer *server; // ivar: _server
@property (readonly, nonatomic) BOOL shouldHideDomainDisplayName;
@property (readonly, nonatomic) NSURL *supportURL; // ivar: _supportURL
@property (readonly, nonatomic) BOOL supportsEnumeration;
@property (readonly, nonatomic) BOOL supportsFPFS;
@property (readonly, nonatomic) BOOL testingProvider;


+(id)defaultNSDomainForDescriptor:(id)arg0 ;
+(id)fpfsDomainXattrForURL:(id)arg0 ;
+(id)getXattr:(char *)arg0 at:(char *)arg1 ;
+(id)onDiskProvidersForServer:(id)arg0 ;
+(id)parseDomainProperties:(id)arg0 descriptor:(id)arg1 replicatedByDefault:(BOOL)arg2 ;
+(void)_garbageCollectFoldersWithNoRelatedDomain:(id)arg0 supportDir:(id)arg1 ;
+(void)dumpXattrsForContentsOfDirectoryAtURL:(id)arg0 dumper:(id)arg1 ;
+(void)dumpXattrsForItemAtURL:(id)arg0 to:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_recreateDefaultDomainIfNeeded;
-(id)defaultNSDomain;
-(id)description;
-(id)domainForIdentifier:(id)arg0 ;
-(id)domainForRealPathURL:(id)arg0 ;
-(id)domainForURL:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 server:(id)arg1 ;
-(id)newDomainFromNSDomain:(id)arg0 ;
-(id)providerDomainForDomain:(id)arg0 ;
-(void)_createSymlinkForDomain:(id)arg0 ;
-(void)_startOrClearDomain:(id)arg0 completion:(id)arg1 ;
-(void)_writeDomainProperties;
-(void)_writeDomainPropertiesIfChangedFrom:(id)arg0 ;
-(void)addDomain:(id)arg0 byImportingDirectoryAtURL:(id)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(void)addDomain:(id)arg0 byImportingDirectoryAtURL:(id)arg1 unableToStartup:(BOOL)arg2 reloadDomain:(BOOL)arg3 request:(id)arg4 completionHandler:(id)arg5 ;
-(void)dumpStateTo:(id)arg0 providerFilter:(id)arg1 limitNumberOfItems:(BOOL)arg2 ;
-(void)dumpValue:(id)arg0 forKey:(id)arg1 to:(id)arg2 ;
-(void)dumpXattrsForDomains:(id)arg0 dumper:(id)arg1 ;
-(void)enableAllDomainsIfNoUserElection;
-(void)importDomainsFromDiskAndUpdatePList:(BOOL)arg0 ;
-(void)invalidateWithReason:(id)arg0 ;
-(void)reloadDomain:(id)arg0 unableToStartup:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)removeAllDomainsForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDomain:(id)arg0 mode:(NSUInteger)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(void)setDomainUserInfo:(id)arg0 forDomainIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setEjectable:(BOOL)arg0 forDomainIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setEnabled:(BOOL)arg0 forDomainIdentifier:(id)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(void)startWithCompletion:(id)arg0 ;
-(void)writeDomainProperties;


@end


#endif