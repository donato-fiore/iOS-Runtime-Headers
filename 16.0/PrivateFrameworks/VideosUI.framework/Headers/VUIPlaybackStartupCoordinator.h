// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLAYBACKSTARTUPCOORDINATOR_H
#define VUIPLAYBACKSTARTUPCOORDINATOR_H

@class NSString, NSDictionary, TVPStateMachine;

#import <Foundation/Foundation.h>

#import "VUIMediaInfo.h"
#import "VUIVideosPlayable.h"

@interface VUIPlaybackStartupCoordinator : NSObject

@property (copy, nonatomic) NSString *adamID; // ivar: _adamID
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) NSDictionary *contentMetadata; // ivar: _contentMetadata
@property (nonatomic) BOOL forceDownloadToStream; // ivar: _forceDownloadToStream
@property (nonatomic) BOOL isCellularAllowed; // ivar: _isCellularAllowed
@property (nonatomic) BOOL isRentAndWatchNow; // ivar: _isRentAndWatchNow
@property (retain, nonatomic) VUIMediaInfo *mediaInfo; // ivar: _mediaInfo
@property (copy, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (retain, nonatomic) VUIVideosPlayable *resolvedPlayable; // ivar: _resolvedPlayable
@property (copy, nonatomic) NSString *showCanonicalID; // ivar: _showCanonicalID
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (copy, nonatomic) NSString *videoCanonicalID; // ivar: _videoCanonicalID
@property (nonatomic) NSInteger watchType; // ivar: _watchType


+(void)initialize;
-(BOOL)_existingPlaybackSessionAllowsCellular;
-(BOOL)_mediaItemIsBeingDownloadedAndDownloadAllowsCellular:(id)arg0 ;
-(BOOL)_shouldPromptForExpiredDownload:(id)arg0 ;
-(BOOL)_shouldWarnAboutRentalPlaybackQualityForRentalMediaItem:(id)arg0 ;
-(BOOL)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg0 ;
-(id)_addQueryParamsToSharedWatchURL:(id)arg0 watchType:(NSInteger)arg1 groupActivityDay:(id)arg2 ;
-(id)_descriptionForStartupAction:(NSInteger)arg0 ;
-(id)_descriptionForWatchType:(NSInteger)arg0 ;
-(id)initWithAdamID:(id)arg0 watchType:(NSInteger)arg1 isRentAndWatchNow:(BOOL)arg2 ;
-(id)initWithAdamID:(id)arg0 watchType:(NSInteger)arg1 isRentAndWatchNow:(BOOL)arg2 contentMetadata:(id)arg3 ;
-(id)initWithCanonicalID:(id)arg0 showCanonicalID:(id)arg1 mediaType:(id)arg2 watchType:(NSInteger)arg3 isRentAndWatchNow:(BOOL)arg4 ;
-(id)initWithCanonicalID:(id)arg0 showCanonicalID:(id)arg1 mediaType:(id)arg2 watchType:(NSInteger)arg3 isRentAndWatchNow:(BOOL)arg4 contentMetadata:(id)arg5 ;
-(id)initWithMediaInfo:(id)arg0 watchType:(NSInteger)arg1 isRentAndWatchNow:(BOOL)arg2 ;
-(void)_addGroupActivityDayParamToPlayableAndMediaItem:(id)arg0 ;
-(void)_checkIfAllowedToPlayOnCellularNetworkWithMediaItem:(id)arg0 presentingController:(id)arg1 completion:(id)arg2 ;
-(void)_performRatingAndAgeVerificationWithMediaItem:(id)arg0 presentingController:(id)arg1 completion:(id)arg2 ;
-(void)_preflightPlaybackWithPlaylist:(id)arg0 presentingViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg0 presentingViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg0 presentingViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)_registerStateMachineHandlers;
-(void)_showAlertControllerForExpirationPromptForDownload:(id)arg0 presentingViewController:(id)arg1 ;
-(void)_showCellularPlaybackQualityOptionsForRentalMediaItem:(id)arg0 presentingViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)performPlaybackStartupFlowWithCompletion:(id)arg0 ;


@end


#endif