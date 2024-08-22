// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEACCESSARBITER_H
#define NSFILEACCESSARBITER_H

@class NSMutableDictionary;
@protocol NSXPCListenerDelegate, NSFileAccessArbiterXPCInterface, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NSXPCListener.h"
#import "NSFileAccessNode.h"
#import "NSXPCConnection.h"
#import "NSString.h"

@interface NSFileAccessArbiter : NSObject <NSXPCListenerDelegate, NSFileAccessArbiterXPCInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listenerConnection;
    BOOL _isStopped;
    BOOL _isSubarbiter;
    NSMutableDictionary *_accessClaimsByID;
    NSMutableDictionary *_accessClaimTransactionsByID;
    NSMutableDictionary *_subarbitrationClaimsByID;
    NSMutableDictionary *_reactorsByID;
    NSMutableDictionary *_reactorTransactionsByID;
    NSMutableDictionary *_kernelMaterializationClaimCancellers;
    NSMutableDictionary *_kernelMaterializationClaimTransactions;
    NSFileAccessNode *_rootNode;
    NSXPCConnection *_superarbitrationServer;
    NSObject<OS_dispatch_source> *_debugSignalSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSXPCConnection *superarbitrationConnection;
@property (readonly) Class superclass;


+(id)entitlementForConnection:(id)arg0 key:(id)arg1 ;
+(void)_wakeUpFileProviderWithUID:(unsigned int)arg0 urls:(id)arg1 queue:(id)arg2 thenContinue:(id)arg3 ;
+(void)ensureProvidersIfNecessaryForClaim:(id)arg0 user:(unsigned int)arg1 atLocations:(id)arg2 queue:(id)arg3 thenContinue:(id)arg4 ;
-(BOOL)_addPresenter:(id)arg0 ofItemAtURL:(id)arg1 watchingFile:(BOOL)arg2 withLastEventID:(id)arg3 ;
-(BOOL)_addProvider:(id)arg0 ofItemsAtURL:(id)arg1 ;
-(BOOL)_materializeProviderlessDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithQueue:(id)arg0 isSubarbiter:(BOOL)arg1 listener:(id)arg2 ;
-(id)rootNode;
-(void)_enumerateSubarbitersUsingBlock:(id)arg0 ;
-(void)_grantAccessClaim:(id)arg0 ;
-(void)_grantSubarbitrationClaim:(id)arg0 withServer:(id)arg1 ;
-(void)_handleCanceledClient:(id)arg0 ;
-(void)_registerForDebugInfoRequests;
-(void)_removeReactorForID:(id)arg0 ;
-(void)_revokeAccessClaimForID:(id)arg0 fromLocal:(BOOL)arg1 ;
-(void)_startArbitratingItemsAtURLs:(id)arg0 withSuperarbitrationServer:(id)arg1 ;
-(void)_willRemoveReactor:(id)arg0 ;
-(void)_writerWithPurposeID:(id)arg0 didMoveItemAtURL:(id)arg1 toURL:(id)arg2 ;
-(void)addPresenter:(id)arg0 withID:(id)arg1 fileURL:(id)arg2 lastPresentedItemEventIdentifier:(id)arg3 ubiquityAttributes:(id)arg4 options:(NSUInteger)arg5 responses:(NSUInteger)arg6 ;
-(void)addProvider:(id)arg0 withID:(id)arg1 uniqueID:(id)arg2 forProvidedItemsURL:(id)arg3 options:(NSUInteger)arg4 withServer:(id)arg5 reply:(id)arg6 ;
-(void)cancelAccessClaimForID:(id)arg0 ;
-(void)cancelMaterializationWithRequestID:(id)arg0 ;
-(void)dealloc;
-(void)getDebugInformationIncludingEverything:(BOOL)arg0 withString:(id)arg1 fromPid:(int)arg2 thenContinue:(id)arg3 ;
-(void)getItemHasPresentersAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)grantAccessClaim:(id)arg0 withReply:(id)arg1 ;
-(void)grantSubarbitrationClaim:(id)arg0 withServer:(id)arg1 reply:(id)arg2 ;
-(void)makeProviderMaterializeFileAtURL:(id)arg0 kernelInfo:(id)arg1 withRequestID:(id)arg2 fromProcess:(struct ? )arg3 completionHandler:(id)arg4 ;
-(void)performBarrierWithCompletionHandler:(id)arg0 ;
-(void)prepareToArbitrateForURLs:(id)arg0 ;
-(void)provideDebugInfoWithLocalInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)provideSubarbiterDebugInfoIncludingEverything:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)removePresenterWithID:(id)arg0 ;
-(void)removeProviderWithID:(id)arg0 uniqueID:(id)arg1 ;
-(void)revokeAccessClaimForID:(id)arg0 ;
-(void)revokeSubarbitrationClaimForID:(id)arg0 ;
-(void)startArbitratingWithReply:(id)arg0 ;
-(void)stopArbitrating;
-(void)tiePresenterForID:(id)arg0 toItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didChangeItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didChangeSharingOfItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didChangeUbiquityAttributes:(id)arg1 ofItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg0 didChangeUbiquityOfItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didDisconnectItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didMakeItemDisappearAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didMoveItemAtURL:(id)arg1 toURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg0 didReconnectItemAtURL:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg0 didVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4 ;


@end


#endif