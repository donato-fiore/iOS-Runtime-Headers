// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPXDOMAINCONTEXT_H
#define FPXDOMAINCONTEXT_H

@class NSDictionary;
@protocol OS_os_log, NSFileProviderReplicatedExtension;

#import <Foundation/Foundation.h>

#import "NSFileProviderDomainVersion.h"
#import "NSFileProviderDomain.h"
#import "FPXExtensionContext.h"
#import "FPProviderDomain.h"
#import "FPSpotlightIndexer.h"
#import "NSFileProviderExtension.h"

@interface FPXDomainContext : NSObject {
    NSFileProviderDomainVersion *_lastKnownDomainVersion;
    NSDictionary *_lastKnownUserInfo;
    NSInteger _sequenceNumber;
    int _selfPid;
}


@property (readonly, nonatomic) NSFileProviderDomain *domain; // ivar: _domain
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) NSUInteger extensionCapabilities; // ivar: _extensionCapabilities
@property (readonly, weak, nonatomic) FPXExtensionContext *extensionContext; // ivar: _extensionContext
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) FPProviderDomain *providerDomain; // ivar: _providerDomain
@property (readonly, nonatomic) FPSpotlightIndexer *spotlightIndexer; // ivar: _spotlightIndexer
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) BOOL usesFPFS; // ivar: _usesFPFS
@property (readonly, nonatomic) NSFileProviderExtension *v2Instance;
@property (readonly, nonatomic) NSObject<NSFileProviderReplicatedExtension> *vendorInstance; // ivar: _vendorInstance


-(BOOL)shouldIngestDomainUserInfoUpdateWithOldVersion:(id)arg0 newVersion:(id)arg1 ;
-(id)currentResponseWithRequest:(id)arg0 ;
-(id)initWithVendorInstance:(id)arg0 domain:(id)arg1 extensionContext:(id)arg2 providerDomain:(id)arg3 domainVersion:(id)arg4 ;
-(id)instanceWithPrivateSelector:(SEL)arg0 ;
-(id)internalErrorFromVendorError:(id)arg0 callerDescription:(id)arg1 ;
-(id)itemFromVendorItem:(id)arg0 ;
-(id)itemIDFromVendorItemID:(id)arg0 ;
-(id)itemIDsFromVendorItemIDs:(id)arg0 ;
-(id)itemsFromVendorItems:(id)arg0 ;
-(void)invalidate;
-(void)prepareForDomainRemovalWithCompletionHandler:(id)arg0 ;
-(void)retrieveUserInfoFromExtension;
-(void)updateCapabilities;


@end


#endif