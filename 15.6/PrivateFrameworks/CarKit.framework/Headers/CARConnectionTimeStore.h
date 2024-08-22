// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARCONNECTIONTIMESTORE_H
#define CARCONNECTIONTIMESTORE_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CARConnectionTimeStore : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


+(id)_CARConnectionServiceInterface;
-(id)init;
-(void)_setupConnection;
// -(void)_xpcFetchWithServiceBlock:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_xpcFetchWithSynchronousServiceBlock:(id)arg0 errorHandler:(unk)arg1  ;
-(void)clearHistoricalConnectionsWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)fetchRecentSessions:(id)arg0 ;
-(void)sendConnectionEvent:(id)arg0 completion:(id)arg1 ;
-(void)syncSendConnectionEvent:(id)arg0 completion:(id)arg1 ;


@end


#endif