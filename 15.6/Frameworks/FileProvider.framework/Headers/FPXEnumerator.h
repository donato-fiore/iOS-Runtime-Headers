// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPXENUMERATOR_H
#define FPXENUMERATOR_H

@class NSString;
@protocol FPXEnumerator, NSFileProviderEnumerator, OS_dispatch_queue, OS_os_log, FPXEnumeratorObserver;

#import <Foundation/Foundation.h>

#import "FPXDomainContext.h"
#import "NSFileProviderRequest.h"
#import "FPItemID.h"

@interface FPXEnumerator : NSObject <FPXEnumerator>

 {
    FPXDomainContext *_domainContext;
    id<NSFileProviderEnumerator> *_vendorEnumerator;
    NSFileProviderRequest *_nsFileProviderRequest;
    FPItemID *_observedItemID;
    BOOL _invalidated;
    BOOL _isWorkingSetEnum;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) FPItemID *observedItemID;
@property (readonly) NSObject<FPXEnumeratorObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


-(id)initWithObservedItemID:(id)arg0 domainContext:(id)arg1 vendorEnumerator:(id)arg2 nsFileProviderRequest:(id)arg3 observer:(id)arg4 isWorkingSetEnum:(BOOL)arg5 queue:(id)arg6 ;
-(id)vendorEnumerator;
-(void)_invalidate;
-(void)alternateContentsWereUpdatedAtURL:(id)arg0 forItem:(id)arg1 ;
-(void)currentSyncAnchorWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)enumerateChangesFromToken:(id)arg0 suggestedBatchSize:(NSInteger)arg1 reply:(id)arg2 ;
-(void)enumerateItemsFromPage:(id)arg0 suggestedPageSize:(NSInteger)arg1 reply:(id)arg2 ;
-(void)forceAddFileURLsForItems:(id)arg0 ;
-(void)forceItemUpdate:(id)arg0 ;
-(void)invalidate;
-(void)invalidateVendorEnumeration;
-(void)keepAliveConnectionForRegisteredObserver:(id)arg0 ;


@end


#endif