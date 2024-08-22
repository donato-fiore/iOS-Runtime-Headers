// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEACCESSARBITERPROXY_H
#define NSFILEACCESSARBITERPROXY_H

@class NSMutableDictionary, NSMutableSet;
@protocol NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate, NSXPCConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSXPCConnection.h"
#import "NSMapTable.h"
#import "NSString.h"

@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate, NSXPCConnectionDelegate>

 {
    NSXPCConnection *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_presentersByID;
    NSMutableDictionary *_presenterMessengersByID;
    NSMutableSet *_providers;
    NSMapTable *_providerMessengersByID;
    BOOL _disableFileProviderReregistration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_fileReactorDebuggingInformation;
+(id)_idForReactor:(id)arg0 ;
+(id)_willBeginOperationForReactor:(id)arg0 withDescription:(id)arg1 ;
+(void)_accessPresenterOperationRecordsUsingBlock:(id)arg0 ;
-(BOOL)itemHasPresentersAtURL:(id)arg0 ;
-(id)_onqueue_filePresenters;
-(id)_onqueue_fileProviders;
-(id)filePresenters;
-(id)fileProviders;
-(id)grantAccessClaim:(id)arg0 synchronouslyIfPossible:(BOOL)arg1 ;
-(id)idForFileReactor:(id)arg0 ;
-(id)initWithServer:(id)arg0 queue:(id)arg1 ;
-(id)replacementObjectForXPCConnection:(id)arg0 encoder:(id)arg1 object:(id)arg2 ;
-(void)addFilePresenter:(id)arg0 ;
-(void)addFileProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelAccessClaimForID:(id)arg0 ;
-(void)dealloc;
-(void)getDebugInfoWithCompletionHandler:(id)arg0 ;
-(void)grantSubarbitrationClaim:(id)arg0 withServer:(id)arg1 ;
-(void)handleCanceledServer;
-(void)performBarrier;
-(void)performBarrierAsync:(id)arg0 ;
-(void)removeFilePresenter:(id)arg0 ;
-(void)removeFileProvider:(id)arg0 ;
-(void)revokeAccessClaimForID:(id)arg0 ;
-(void)revokeSubarbitrationClaimForID:(id)arg0 ;
-(void)setAutomaticFileProviderReregistrationDisabled:(BOOL)arg0 ;
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