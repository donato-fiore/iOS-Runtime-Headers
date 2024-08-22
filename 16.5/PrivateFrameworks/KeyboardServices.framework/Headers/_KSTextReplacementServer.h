// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _KSTEXTREPLACEMENTSERVER_H
#define _KSTEXTREPLACEMENTSERVER_H

@class NSString, NSXPCListener, APSConnection;
@protocol NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementSyncProtocol, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_KSTRClient.h"
#import "_KSTextReplacementManager.h"

@interface _KSTextReplacementServer : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementSyncProtocol, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    _KSTRClient *_daemonClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *directoryPath; // ivar: _directoryPath
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) APSConnection *pushConnection; // ivar: _pushConnection
@property (readonly) Class superclass;
@property (retain, nonatomic) _KSTextReplacementManager *textReplacementManager; // ivar: _textReplacementManager


+(BOOL)isBlackListed:(unsigned int)arg0 ;
+(id)textReplacementServer;
-(BOOL)_cancelPendingUpdateForClient:(id)arg0 ;
-(BOOL)isSetupAssistantRunning;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithDatabaseDirectoryPath:(id)arg0 ;
-(id)textReplacementEntries;
-(id)textReplacementEntriesForClient:(id)arg0 ;
-(void)_performCleanup;
-(void)addEntries:(id)arg0 removeEntries:(id)arg1 forClient:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)addEntries:(id)arg0 removeEntries:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)buddySetupDidFinish;
-(void)cancelPendingUpdates;
-(void)cleanup;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)dealloc;
-(void)queryTextReplacementsWithCallback:(id)arg0 ;
-(void)queryTextReplacementsWithPredicate:(id)arg0 callback:(id)arg1 ;
-(void)registerForPushNotifications;
-(void)removeAllEntries;
-(void)requestSync:(NSUInteger)arg0 withCompletionBlock:(id)arg1 ;
-(void)requestSyncWithCompletionBlock:(id)arg0 ;
-(void)scheduleSyncTask;
-(void)shutdown;
-(void)start;


@end


#endif