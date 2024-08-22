// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANLOCALPLAYBACKSESSION_H
#define ANLOCALPLAYBACKSESSION_H

@class NSXPCConnection, NSString, NSUUID, NSDictionary;
@protocol ANLocalPlaybackSessionServiceInterfaceDelegate, ANLocalPlaybackSessionDelegate;

#import <Foundation/Foundation.h>


@interface ANLocalPlaybackSession : NSObject <ANLocalPlaybackSessionServiceInterfaceDelegate>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANLocalPlaybackSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *endpointIdentifier; // ivar: _endpointIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *lastPlayedAnnouncementInfo;
@property (readonly, nonatomic) NSUInteger playbackState;
@property (readonly) Class superclass;


+(id)stringForPlaybackState:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithEndpointIdentifier:(id)arg0 ;
-(void)_start;
-(void)announcementsStateUpdate:(NSUInteger)arg0 ;
-(void)announcementsWillStartPlaying:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)didReceiveAnnouncement:(id)arg0 forGroupID:(id)arg1 ;
-(void)invalidate;
-(void)lastPlayedAnnouncementInfoWithCompletion:(id)arg0 ;
-(void)nextAnnouncementWithCompletionHandler:(id)arg0 ;
-(void)playAnnouncements;
-(void)playAnnouncementsWithIDs:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)playAnnouncementsWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)playAnnouncementsWithOptions:(NSUInteger)arg0 startingAt:(id)arg1 completionHandler:(id)arg2 ;
-(void)previousAnnouncementWithCompletionHandler:(id)arg0 ;
-(void)sendPlaybackCommand:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopPlayingAnnouncements;
-(void)stopPlayingAnnouncementsWithCompletionHandler:(id)arg0 ;


@end


#endif