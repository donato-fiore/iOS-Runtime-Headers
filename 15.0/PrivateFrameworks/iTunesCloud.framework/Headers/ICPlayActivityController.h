// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICPLAYACTIVITYCONTROLLER_H
#define ICPLAYACTIVITYCONTROLLER_H

@class NSOperationQueue, NSMutableDictionary, NSMutableArray, NSXPCConnection, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICPlayActivityTable.h"

@interface ICPlayActivityController : NSObject {
    NSOperationQueue *_debugLogOperationQueue;
    NSMutableDictionary *_endpointIdentifierToEndpointRevisionInformation;
    int _endpointRevisionInformationDidChangeNotifyToken;
    BOOL _hasAttemptedTableCreation;
    BOOL _hasLoadedEndpointRevisionInformation;
    BOOL _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
    BOOL _hasValidEndpointRevisionInformationDidChangeNotifyToken;
    NSMutableArray *_pendingFlushingSessions;
    NSObject<OS_dispatch_queue> *_serialQueue;
    ICPlayActivityTable *_table;
    NSXPCConnection *_daemonPlayActivityControllerConnection;
    NSString *_databasePath;
}


@property (readonly, nonatomic) NSUInteger writingStyle; // ivar: _writingStyle


+(id)_requiredEndpointIdentifiers;
-(BOOL)_setEndpointRevisionInformation:(id)arg0 forEndpointIdentifier:(id)arg1 ;
-(id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)arg0 ;
-(id)_daemonPlayActivityControllerConnection;
-(id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg0 ;
-(id)_revisionsIndexSetForPlayActivityEvents:(id)arg0 ;
-(id)_sessionInformationForSessionToken:(NSUInteger)arg0 ;
-(id)_table;
-(id)init;
-(id)initWithWritingStyle:(NSUInteger)arg0 ;
-(id)initWithWritingStyle:(NSUInteger)arg0 databasePath:(id)arg1 ;
-(void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg0 withStoreAccountID:(NSUInteger)arg1 shouldFilterStoreAccountID:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_completePendingPlayEventsWithRevisionIndexSet:(id)arg0 forSessionToken:(NSUInteger)arg1 withResult:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_getFlushSessionInformationForEndpointIdentifier:(id)arg0 shouldAcquire:(BOOL)arg1 storeAccountID:(NSUInteger)arg2 shouldFilterStoreAccountID:(BOOL)arg3 withCompletionHandler:(id)arg4 ;
-(void)_loadEndpointIdentifierInformationIfNeeded;
-(void)_setupNotifyTokenIfNeeded;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg0 withStoreAccountID:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)completePendingPlayActivityEventPersistentIDs:(id)arg0 forSessionToken:(NSUInteger)arg1 withResult:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)completePendingPlayActivityEvents:(id)arg0 forSessionToken:(NSUInteger)arg1 withResult:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getPlayActivityEventsFromRevision:(NSUInteger)arg0 toRevision:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)getRevisionInformationWithCompletionHandler:(id)arg0 ;
-(void)recordPlayActivityEvents:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removeFlushedPlayActivityEventsWithCompletionHandler:(id)arg0 ;
-(void)removePlayActivityEventsUpToRevision:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)setCurrentRevision:(NSUInteger)arg0 revisionVersionToken:(id)arg1 forEndpointIdentifier:(id)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif