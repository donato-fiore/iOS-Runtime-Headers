// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANANNOUNCESERVICELISTENER_H
#define ANANNOUNCESERVICELISTENER_H

@class NSString, NSXPCListener;
@protocol ANAnnounceServiceInterface, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface ANAnnounceServiceListener : NSObject <ANAnnounceServiceInterface, NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_handleError:(NSInteger)arg0 request:(id)arg1 requestSentCompletionHandler:(id)arg2 ;
-(void)_handleError:(NSInteger)arg0 request:(id)arg1 sentCompletionHandler:(id)arg2 ;
-(void)_sendReplyRequest:(id)arg0 completion:(id)arg1 ;
-(void)_sendRequest:(id)arg0 completion:(id)arg1 ;
-(void)_translateSentHandlerResponseAnnouncement:(id)arg0 request:(id)arg1 error:(id)arg2 toRequestSentHandler:(id)arg3 ;
-(void)announcementForID:(id)arg0 endpointID:(id)arg1 reply:(id)arg2 ;
-(void)cleanForExit;
-(void)contextFromAnnouncement:(id)arg0 reply:(id)arg1 ;
-(void)getReceivedAnnouncementsForEndpointID:(id)arg0 completionHandler:(id)arg1 ;
-(void)getScanningDeviceCandidates:(id)arg0 ;
-(void)getUnplayedAnnouncementsForEndpointID:(id)arg0 completionHandler:(id)arg1 ;
-(void)homeNamesForContext:(id)arg0 reply:(id)arg1 ;
-(void)isAnnounceEnabledForAnyAccessoryInHome:(id)arg0 reply:(id)arg1 ;
-(void)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)arg0 reply:(id)arg1 ;
-(void)isEndpointWithUUID:(id)arg0 inRoomWithName:(id)arg1 reply:(id)arg2 ;
-(void)isLocalDeviceInRoom:(id)arg0 reply:(id)arg1 ;
-(void)lastPlayedAnnouncementInfo:(id)arg0 ;
-(void)localParticipant:(id)arg0 ;
-(void)mockAnnouncement:(id)arg0 forHomeWithName:(id)arg1 playbackDeadline:(id)arg2 completion:(id)arg3 ;
-(void)prewarm:(id)arg0 ;
-(void)receivedAnnouncementIdentifiersForEndpointID:(id)arg0 reply:(id)arg1 ;
-(void)sendRequest:(id)arg0 completion:(id)arg1 ;
-(void)sendRequestLegacy:(id)arg0 completion:(id)arg1 ;


@end


#endif