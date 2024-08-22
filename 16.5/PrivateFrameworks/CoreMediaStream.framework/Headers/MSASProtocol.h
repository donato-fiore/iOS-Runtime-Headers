// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSASPROTOCOL_H
#define MSASPROTOCOL_H

@class NSURL, NSString;
@protocol NSURLConnectionDelegate, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "MSASPConnectionGate.h"

@interface MSASProtocol : NSObject <NSURLConnectionDelegate>



@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MSASPConnectionGate *gate; // ivar: _gate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *headerVersion; // ivar: _headerVersion
@property (nonatomic) BOOL isShuttingDown; // ivar: _isShuttingDown
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) NSObject<OS_dispatch_group> *pendingConnectionsGroup; // ivar: _pendingConnectionsGroup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pendingConnectionsQueue; // ivar: _pendingConnectionsQueue
@property (readonly, retain, nonatomic) NSString *personID; // ivar: _personID
@property (retain, nonatomic) NSString *serverSideConfigVersion; // ivar: _serverSideConfigVersion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)responseDict:(id)arg0 containsLimitErrorCode:(id)arg1 outMaxAllowed:(*id)arg2 ;
-(id)HTTPErrorWithStatusCode:(NSInteger)arg0 ;
-(id)_addCommentURLWithBaseURL:(id)arg0 ;
-(id)_albumStateURL;
-(id)_albumSummaryURLWithBaseURL:(id)arg0 ;
-(id)_couldNotReauthorizeError;
-(id)_createAlbumURL;
-(id)_deleteAssetsURLWithBaseURL:(id)arg0 ;
-(id)_deleteCommentURLWithBaseURL:(id)arg0 ;
-(id)_deleteURLWithBaseURL:(id)arg0 ;
-(id)_enableMultipleContributorsURLWithBaseURL:(id)arg0 ;
-(id)_enablePublicAccessURLWithBaseURL:(id)arg0 ;
-(id)_getAlbumURL;
-(id)_getAssetsURLWithBaseURL:(id)arg0 ;
-(id)_getChangesURL;
-(id)_getCommentsURLWithBaseURL:(id)arg0 ;
-(id)_getTokensURLWithBaseURL:(id)arg0 ;
-(id)_getUploadTokensURLWithBaseURL:(id)arg0 ;
-(id)_getVideoURLWithBaseURL:(id)arg0 ;
-(id)_putAssetsURLWithBaseURL:(id)arg0 ;
-(id)_reportSpamURL;
-(id)_serverSideConfigURL;
-(id)_setAlbumStateURL;
-(id)_setAssetStateURL;
-(id)_setCommentPositionURL;
-(id)_shareURL;
-(id)_sharingInfoURLWithBaseURL:(id)arg0 ;
-(id)_subscribeURL;
-(id)_unshareURL;
-(id)_unsubscribeURL;
-(id)_updateAlbumURLWithBaseURL:(id)arg0 ;
-(id)_uploadCompleteURLWithBaseURL:(id)arg0 ;
-(id)_validateInvitationURL;
-(id)errorFromStandardProcessingOnResponse:(id)arg0 responseObject:(id)arg1 checkServerSideConfigVersion:(BOOL)arg2 error:(id)arg3 body:(id)arg4 ;
-(id)initWithPersonID:(id)arg0 ;
-(id)shutDownError;
-(id)stopHandlerBlock:(SEL)arg0 ;
-(id)stoppingError;
-(void)_prepareHeadersForRequest:(id)arg0 ;
-(void)_sendOneURLRequest:(id)arg0 checkServerSideConfigVersion:(BOOL)arg1 retryCount:(NSUInteger)arg2 completionBlock:(id)arg3 ;
-(void)acceptInvitationWithToken:(id)arg0 completionBlock:(id)arg1 ;
-(void)addComment:(id)arg0 toAssetCollection:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4 ;
-(void)addSharingRelationships:(id)arg0 toAlbum:(id)arg1 completionBlock:(id)arg2 ;
-(void)albumSummaryAlbum:(id)arg0 albumURLString:(id)arg1 resetSync:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)createAlbum:(id)arg0 completionBlock:(id)arg1 ;
-(void)deleteAlbum:(id)arg0 completionBlock:(id)arg1 ;
-(void)deleteAssetCollections:(id)arg0 inAlbum:(id)arg1 completionBlock:(id)arg2 ;
-(void)deleteComment:(id)arg0 fromAssetCollection:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4 ;
// -(void)getAlbumSyncedStateForAlbum:(id)arg0 assetCollectionStateBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(void)getAlbumURLForAlbumWithGUID:(id)arg0 completionBlock:(id)arg1 ;
-(void)getAssetCollections:(id)arg0 inAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id)arg3 ;
-(void)getChangesRootCtag:(id)arg0 completionBlock:(id)arg1 ;
-(void)getCommentChanges:(id)arg0 inAlbumWithGUID:(id)arg1 albumURLString:(id)arg2 completionBlock:(id)arg3 ;
-(void)getServerSideConfigCompletionBlock:(id)arg0 ;
-(void)getSharingInfoForAlbum:(id)arg0 albumURLString:(id)arg1 completionBlock:(id)arg2 ;
-(void)getTokensForAssets:(id)arg0 inAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id)arg3 ;
-(void)getUploadTokens:(id)arg0 forAssetCollectionWithGUID:(id)arg1 inAlbumWithGUID:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4 ;
-(void)getVideoURL:(id)arg0 forAssetCollectionWithGUID:(id)arg1 inAlbumWithGUID:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4 ;
-(void)markAsSpamInvitationForAlbum:(id)arg0 completionBlock:(id)arg1 ;
-(void)markAsSpamInvitationForToken:(id)arg0 completionBlock:(id)arg1 ;
-(void)putAssetCollections:(id)arg0 intoAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id)arg3 ;
-(void)removeSharingRelationships:(id)arg0 fromAlbum:(id)arg1 completionBlock:(id)arg2 ;
-(void)sendURLRequest:(id)arg0 bodyObj:(id)arg1 completionBlock:(id)arg2 ;
-(void)sendURLRequest:(id)arg0 method:(id)arg1 bodyObj:(id)arg2 checkServerSideConfigVersion:(BOOL)arg3 completionBlock:(id)arg4 ;
-(void)sendUploadCompleteSuccessfulAssetCollections:(id)arg0 failedAssetCollections:(id)arg1 album:(id)arg2 completionBlock:(id)arg3 ;
-(void)setAlbumSyncedState:(id)arg0 forAlbum:(id)arg1 albumStateCtag:(id)arg2 completionBlock:(id)arg3 ;
-(void)setAssetCollectionSyncedState:(id)arg0 forAssetCollection:(id)arg1 inAlbum:(id)arg2 assetCollectionStateCtag:(id)arg3 completionBlock:(id)arg4 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg0 forAlbum:(id)arg1 completionBlock:(id)arg2 ;
-(void)setPublicAccessEnabled:(BOOL)arg0 forAlbum:(id)arg1 completionBlock:(id)arg2 ;
-(void)shutDownCompletionBlock:(id)arg0 ;
-(void)stopCompletionBlock:(id)arg0 ;
-(void)subscribeToAlbum:(id)arg0 completionBlock:(id)arg1 ;
-(void)unsubscribeFromAlbum:(id)arg0 completionBlock:(id)arg1 ;
-(void)updateAlbum:(id)arg0 albumURLString:(id)arg1 completionBlock:(id)arg2 ;
-(void)validateInvitationForAlbum:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif