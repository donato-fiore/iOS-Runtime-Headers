// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYBUDDYDAEMONCLOUDSYNCCLIENT_H
#define BYBUDDYDAEMONCLOUDSYNCCLIENT_H

@class NSXPCConnection, NSString;
@protocol BYClientDaemonCloudSyncProtocol;

#import <Foundation/Foundation.h>


@interface BYBuddyDaemonCloudSyncClient : NSObject <BYClientDaemonCloudSyncProtocol>



@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<BYClientDaemonCloudSyncProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL syncDidComplete; // ivar: _syncDidComplete
@property (nonatomic) BOOL syncDidStart; // ivar: _syncDidStart


+(id)clientInterface;
-(id)init;
-(void)cancelSync;
-(void)cloudSyncProgressUpdate:(NSInteger)arg0 completedClients:(NSInteger)arg1 errors:(id)arg2 ;
-(void)connectToDaemon;
-(void)fetchCurrentSyncState:(id)arg0 ;
-(void)isSyncInProgress:(id)arg0 ;
-(void)needsToSync:(id)arg0 ;
-(void)startSync;
-(void)syncCompletedWithErrors:(id)arg0 ;
-(void)syncProgress:(CGFloat)arg0 ;


@end


#endif