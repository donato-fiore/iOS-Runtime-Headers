// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKISSUERPROVISIONINGEXTENSIONCONSUMERCOORDINATOR_H
#define PKISSUERPROVISIONINGEXTENSIONCONSUMERCOORDINATOR_H

@class NSString, NSExtension;
@protocol PKInvalidatable, NSCopying;

#import <Foundation/Foundation.h>

#import "PKIssuerProvisioningExtensionConsumerContext.h"

@interface PKIssuerProvisioningExtensionConsumerCoordinator : NSObject <PKInvalidatable>

 {
    id<NSCopying> *_requestIdentifier;
    PKIssuerProvisioningExtensionConsumerContext *_context;
    os_unfair_lock_s _lock;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


+(id)beginWithExtension:(id)arg0 completion:(id)arg1 ;
-(id)_initWithExtension:(id)arg0 ;
-(id)init;
-(void)_performWhenConnected:(id)arg0 ;
-(void)dealloc;
-(void)generateRequestWithEntryIdentifier:(id)arg0 configuration:(id)arg1 certificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(id)arg5 ;
-(void)invalidate;
-(void)passEntriesWithCompletion:(id)arg0 ;
-(void)remotePassEntriesWithCompletion:(id)arg0 ;
-(void)statusWithCompletion:(id)arg0 ;


@end


#endif