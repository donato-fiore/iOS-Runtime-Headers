// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPXOBSERVER_H
#define FPXOBSERVER_H

@protocol OS_dispatch_queue, NSFileProviderReplicatedExtension;

#import <Foundation/Foundation.h>

#import "FPItemID.h"
#import "FPXDomainContext.h"
#import "FPXExtensionContext.h"
#import "NSFileProviderRequest.h"

@interface FPXObserver : NSObject {
    FPItemID *_observedItemID;
    FPXDomainContext *_domainContext;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSFileProviderReplicatedExtension> *_strongVendorInstance;
    FPXExtensionContext *_strongExtensionContext;
    NSFileProviderRequest *_nsFileProviderRequest;
}


@property (readonly, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated


-(id)init;
-(id)initWithObservedItemID:(id)arg0 domainContext:(id)arg1 nsFileProviderRequest:(id)arg2 ;
-(id)updateForProviderItem:(id)arg0 ;
-(void)_fixupFavoriteRank:(id)arg0 ;
-(void)invalidate;
-(void)verifyVendorToken:(id)arg0 ;


@end


#endif