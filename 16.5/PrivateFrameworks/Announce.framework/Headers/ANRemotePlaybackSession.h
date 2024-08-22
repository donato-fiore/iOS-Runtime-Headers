// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANREMOTEPLAYBACKSESSION_H
#define ANREMOTEPLAYBACKSESSION_H

@class NSXPCConnection, NSString;
@protocol ANRemotePlaybackSessionServiceClientInterface, ANRemotePlaybackSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ANRemotePlaybackSession : NSObject <ANRemotePlaybackSessionServiceClientInterface>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANRemotePlaybackSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)endSession;
-(BOOL)startSessionForGroupID:(id)arg0 announcementsHandler:(id)arg1 ;
-(id)init;
-(void)_callHandler:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveAnnouncement:(id)arg0 forGroupID:(id)arg1 ;
-(void)didUpdateAnnouncements:(id)arg0 forGroupID:(id)arg1 ;
-(void)invalidate;
-(void)lastPlayedAnnouncementInfoWithCompletion:(id)arg0 ;
-(void)setPlaybackEndedForAnnouncement:(id)arg0 ;
-(void)setPlaybackStartedForAnnouncement:(id)arg0 ;
-(void)setPlaybackStoppedForAnnouncement:(id)arg0 ;


@end


#endif