// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCOLLABORATIONNOTICEDISPATCHER_H
#define IMCOLLABORATIONNOTICEDISPATCHER_H

@class IMDaemonController<IMDaemonProtocol>;

#import <Foundation/Foundation.h>


@interface IMCollaborationNoticeDispatcher : NSObject

@property (retain, nonatomic) IMDaemonController<IMDaemonProtocol> *daemon; // ivar: _daemon


-(id)_listenerID;
-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFromDaemon;
-(void)sendNotice:(id)arg0 toHandles:(id)arg1 completion:(id)arg2 ;
-(void)setUpConnectionToDaemon;


@end


#endif