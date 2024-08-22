// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLIBRARYAUTHSERVICECLIENTTOKENPROVIDER_H
#define ICLIBRARYAUTHSERVICECLIENTTOKENPROVIDER_H

@class NSOperationQueue, NSMutableDictionary, NSXPCListener, NSMutableSet, NSXPCConnection, AFMultiUserConnection, NSString;
@protocol ICLibraryAuthServiceClientTokenProviderProtocol, NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICLibraryAuthServiceClientTokenProvider : NSObject <ICLibraryAuthServiceClientTokenProviderProtocol, NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_tokenCache;
    BOOL _isService;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
    AFMultiUserConnection *_siriConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedProvider;
-(BOOL)_isPrivacyAcknowledgementRequired;
-(BOOL)_shouldStopBackgroundRefreshForError:(id)arg0 ;
-(BOOL)_updateEntriesForAccountsChanges;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_clientConnection;
-(id)cachedTokenAndResetCache:(BOOL)arg0 ;
-(id)init;
-(void)_addConnection:(id)arg0 ;
-(void)_commitCache;
-(void)_handleLibraryAuthServiceClientTokenDidChangeDistributedNotification:(id)arg0 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg0 ;
-(void)_loadCache;
-(void)_refreshTokenForDSID:(id)arg0 forExternalRequest:(BOOL)arg1 completion:(id)arg2 ;
-(void)_refreshTokensForDSIDs:(id)arg0 forExternalRequest:(BOOL)arg1 completion:(id)arg2 ;
-(void)_removeConnection:(id)arg0 ;
-(void)_updateRefreshTimer;
-(void)_updateTokenCacheEntryForDSID:(id)arg0 tokenResult:(id)arg1 error:(id)arg2 ;
-(void)addTokenResult:(id)arg0 forDSID:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)getAllTokenStatusForAssistantForcingRefresh:(BOOL)arg0 completion:(id)arg1 ;
-(void)getAllTokensForAssistantForcingRefresh:(BOOL)arg0 completion:(id)arg1 ;
-(void)getTokenForDSID:(id)arg0 forceRefresh:(BOOL)arg1 completion:(id)arg2 ;
-(void)getTokenForcingRefresh:(BOOL)arg0 completion:(id)arg1 ;
-(void)getTokenResultForDSID:(id)arg0 forceRefresh:(BOOL)arg1 completion:(id)arg2 ;
-(void)getTokenResultsForDSIDs:(id)arg0 forceRefresh:(BOOL)arg1 completion:(id)arg2 ;
-(void)getTokenStatusForDSIDs:(id)arg0 forcingRefresh:(BOOL)arg1 completion:(id)arg2 ;
-(void)getTokenStatusForcingRefresh:(BOOL)arg0 completion:(id)arg1 ;
-(void)startService;
-(void)stopService;


@end


#endif