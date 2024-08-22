// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANANNOUNCE_H
#define ANANNOUNCE_H

@class NSXPCConnection, NSUUID, NSArray;
@protocol ANAnnounceDelegate;

#import <Foundation/Foundation.h>


@interface ANAnnounce : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<ANAnnounceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUUID *endpointIdentifier; // ivar: _endpointIdentifier
@property (readonly, nonatomic) NSArray *receivedAnnouncements;
@property (readonly, nonatomic) NSArray *unplayedAnnouncements;


-(BOOL)isAnnounceEnabledForAnyAccessoryInHome:(id)arg0 ;
-(BOOL)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)arg0 ;
-(BOOL)isEndpointWithUUID:(id)arg0 inRoomWithName:(id)arg1 ;
-(BOOL)isLocalDeviceInRoom:(id)arg0 ;
-(id)announcementForID:(id)arg0 ;
-(id)contextFromAnnouncement:(id)arg0 ;
-(id)homeNamesForContext:(id)arg0 ;
-(id)init;
-(id)initWithEndpointIdentifier:(id)arg0 ;
-(id)receivedAnnouncementIDs;
-(void)_sendRequestLegacy:(id)arg0 completion:(id)arg1 ;
-(void)announcementForID:(id)arg0 reply:(id)arg1 ;
-(void)broadcastReply:(id)arg0 completion:(id)arg1 ;
-(void)broadcastReply:(id)arg0 forAnnouncement:(id)arg1 completion:(id)arg2 ;
-(void)broadcastReply:(id)arg0 forAnnouncementID:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)getReceivedAnnouncementsWithCompletionHandler:(id)arg0 ;
-(void)getScanningDeviceCandidates:(id)arg0 ;
-(void)invalidate;
-(void)lastPlayedAnnouncementInfo:(id)arg0 ;
-(void)localParticipant:(id)arg0 ;
-(void)mockAnnouncement:(id)arg0 forHomeWithName:(id)arg1 playbackDeadline:(id)arg2 completion:(id)arg3 ;
-(void)prewarmWithHandler:(id)arg0 ;
-(void)receivedAnnouncementIDs:(id)arg0 ;
-(void)sendAnnouncement:(id)arg0 toHomeWithID:(id)arg1 completion:(id)arg2 ;
-(void)sendAnnouncement:(id)arg0 toHomeWithName:(id)arg1 completion:(id)arg2 ;
-(void)sendAnnouncement:(id)arg0 toRoomsWithIDs:(id)arg1 andZonesWithIDs:(id)arg2 inHomeWithID:(id)arg3 completion:(id)arg4 ;
-(void)sendAnnouncement:(id)arg0 toRoomsWithIDs:(id)arg1 inHomeWithID:(id)arg2 completion:(id)arg3 ;
-(void)sendAnnouncement:(id)arg0 toRoomsWithNames:(id)arg1 andZonesWithNames:(id)arg2 inHomeWithName:(id)arg3 completion:(id)arg4 ;
-(void)sendAnnouncement:(id)arg0 toRoomsWithNames:(id)arg1 inHomeWithName:(id)arg2 completion:(id)arg3 ;
-(void)sendAnnouncement:(id)arg0 toZonesWithIDs:(id)arg1 inHomeWithID:(id)arg2 completion:(id)arg3 ;
-(void)sendAnnouncement:(id)arg0 toZonesWithNames:(id)arg1 inHomeWithName:(id)arg2 completion:(id)arg3 ;
-(void)sendReply:(id)arg0 forAnnouncement:(id)arg1 completion:(id)arg2 ;
-(void)sendRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif