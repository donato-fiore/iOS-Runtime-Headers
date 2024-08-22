// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSASCONNECTION_H
#define MSASCONNECTION_H

@class NSString, NSMutableDictionary;
@protocol XPCNSClientConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "XPCNSClientConnection.h"

@interface MSASConnection : NSObject <XPCNSClientConnectionDelegate>



@property (retain, nonatomic) XPCNSClientConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *focusAlbumGUIDByPersonID; // ivar: _focusAlbumGUIDByPersonID
@property (retain, nonatomic) NSMutableDictionary *focusAlbumTimerByPersonID; // ivar: _focusAlbumTimerByPersonID
@property (retain, nonatomic) NSMutableDictionary *foregroundPingTimerContextByPersonID; // ivar: _foregroundPingTimerContextByPersonID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) NSMutableDictionary *serverSideConfigurationDictionaryByPersonID; // ivar: _serverSideConfigurationDictionaryByPersonID
@property (readonly) Class superclass;


+(id)sharedConnection;
-(id)_cloneArray:(id)arg0 ;
-(id)_communicationFailureError;
-(id)init;
-(void)XPCNSClientConnection:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)_sendMessageReliably:(id)arg0 ;
// -(void)_sendMessageReliably:(id)arg0 data:(id)arg1 successHandler:(id)arg2 failureHandler:(unk)arg3  ;
-(void)acceptInvitationWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)acceptInvitationWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)acceptInvitationWithToken:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)acceptInvitationWithToken:(id)arg0 personID:(id)arg1 info:(id)arg2 completionBlock:(id)arg3 ;
-(void)accessControlGUIDsForAlbumWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)accessControlWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)activityIsThrottledByLackOfDiskSpacePersonID:(id)arg0 completionBlock:(id)arg1 ;
-(void)addAccessControlEntries:(id)arg0 toAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)addAccessControlEntries:(id)arg0 toAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)addAlbum:(id)arg0 personID:(id)arg1 ;
-(void)addAlbum:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)addAssetCollections:(id)arg0 toAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)addAssetCollections:(id)arg0 toAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)addComments:(id)arg0 toAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)addComments:(id)arg0 toAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)albumGUIDsForPersonID:(id)arg0 completionBlock:(id)arg1 ;
-(void)albumWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)assetCollectionGUIDsInAlbumWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)assetCollectionWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)cancelActivitiesForPersonID:(id)arg0 ;
-(void)commentGUIDsForAssetCollectionWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)commentWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)deleteAlbumWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)deleteAlbumWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)deleteAssetCollectionWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)deleteAssetCollectionWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)deleteAssetCollectionsWithGUIDs:(id)arg0 personID:(id)arg1 ;
-(void)deleteCommentWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)deleteCommentWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)forgetEverythingAboutPersonID:(id)arg0 ;
-(void)handlePushNotificationForPersonID:(id)arg0 ;
-(void)invitationGUIDsForPersonID:(id)arg0 completionBlock:(id)arg1 ;
-(void)invitationWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)isAssetCollectionWithGUID:(id)arg0 markedAsUnviewedPersonID:(id)arg1 completionBlock:(id)arg2 ;
-(void)isInRetryStateHandler:(id)arg0 ;
-(void)markAlbumGUIDAsViewed:(id)arg0 personID:(id)arg1 ;
-(void)markAlbumGUIDAsViewed:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)markAlbumGUIDAsViewed:(id)arg0 personID:(id)arg1 moveLastViewedAssetCollectionMarker:(BOOL)arg2 info:(id)arg3 ;
-(void)markAsSpamAlbumWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)markAsSpamInvitationWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)markAsSpamInvitationWithToken:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg0 asViewedWithLastViewedDate:(id)arg1 personID:(id)arg2 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg0 asViewedWithLastViewedDate:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)modifyAlbumMetadata:(id)arg0 personID:(id)arg1 ;
-(void)modifyAlbumMetadata:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)nextActivityDateHandler:(id)arg0 ;
-(void)pingForeground;
-(void)refreshAccessControlListForAlbumWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)refreshAccessControlListForAlbumWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg0 resetSync:(BOOL)arg1 personID:(id)arg2 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg0 resetSync:(BOOL)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg0 resetSync:(BOOL)arg1 personID:(id)arg2 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg0 resetSync:(BOOL)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)refreshResetSync:(BOOL)arg0 personID:(id)arg1 ;
-(void)refreshResetSync:(BOOL)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)rejectInvitationWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)rejectInvitationWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)removeAccessControlEntryWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)removeAccessControlEntryWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)retrieveAssets:(id)arg0 inAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg0 assetTypeFlags:(int)arg1 personID:(id)arg2 ;
-(void)retryOutstandingActivities;
-(void)retryOutstandingActivitiesForPersonID:(id)arg0 ;
-(void)serverSideConfigurationDictionaryForPersonID:(id)arg0 completionBlock:(id)arg1 ;
-(void)setFocusAlbum:(id)arg0 forPersonID:(id)arg1 ;
-(void)setFocusAlbumGUID:(id)arg0 forPersonID:(id)arg1 ;
-(void)setFocusAssetCollectionGUID:(id)arg0 forPersonID:(id)arg1 ;
-(void)setIsUIForeground:(BOOL)arg0 forPersonID:(id)arg1 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id)arg3 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(id)arg4 ;
-(void)setPublicAccessEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id)arg3 ;
-(void)setPublicAccessEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(id)arg4 ;
-(void)subscribeToAlbumWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)subscribeToAlbumWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)timerPingQueueForegroundPingTimerExpiredContext:(id)arg0 personID:(id)arg1 ;
-(void)timerPingQueueSendSetUIForeground:(BOOL)arg0 personID:(id)arg1 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)videoURLForAssetCollectionWithGUID:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)videoURLsForAssetCollectionWithGUID:(id)arg0 forMediaAssetType:(NSUInteger)arg1 personID:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif