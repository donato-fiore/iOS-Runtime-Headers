// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCOLLABORATIONNOTICEDISPATCHER_H
#define IMCOLLABORATIONNOTICEDISPATCHER_H

@protocol IMDaemonMultiplexedConnectionManaging;

#import <Foundation/Foundation.h>


@interface IMCollaborationNoticeDispatcher : NSObject

@property (retain, nonatomic) NSObject<IMDaemonMultiplexedConnectionManaging> *daemonConnection; // ivar: _daemonConnection


-(id)_bestSendingHandle;
-(id)init;
-(void)dealloc;
-(void)disconnectFromDaemon;
-(void)sendClearNotice:(id)arg0 toHandles:(id)arg1 completion:(id)arg2 ;
-(void)sendNotice:(id)arg0 toHandles:(id)arg1 completion:(id)arg2 ;
-(void)setUpConnectionToDaemon;


@end


#endif