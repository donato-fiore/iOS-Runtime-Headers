// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSERACTIVITYDAEMONJOB_H
#define PLUSERACTIVITYDAEMONJOB_H

@class NSString, NSArray;


#import "PLDaemonJob.h"

@interface PLUserActivityDaemonJob : PLDaemonJob

@property NSInteger actionType; // ivar: _actionType
@property (copy, nonatomic) NSString *albumUUID; // ivar: _albumUUID
@property (retain, nonatomic) NSArray *assetUUIDs; // ivar: _assetUUIDs
@property (nonatomic) NSInteger cloudFeedContent; // ivar: _cloudFeedContent
@property (copy, nonatomic) NSString *momentShareUUID; // ivar: _momentShareUUID
@property (copy, nonatomic) NSString *suggestedCMMUUID; // ivar: _suggestedCMMUUID


+(id)newUserActivityDaemonJob;
+(void)userDidChangeStatusForMomentShare:(id)arg0 ;
+(void)userDidChangeStatusForSuggestedCMM:(id)arg0 ;
+(void)userDidDeleteSharedAlbum:(id)arg0 ;
+(void)userDidDeleteSharedAssets:(id)arg0 ;
+(void)userDidLeavePhotosApplication;
+(void)userDidNavigateAwayFromAllSharedAlbums;
+(void)userDidNavigateAwayFromSharedAlbum:(id)arg0 ;
+(void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg0 ;
+(void)userDidNavigateIntoSharedAlbum:(id)arg0 ;
+(void)userDidReadCommentOnSharedAsset:(id)arg0 ;
+(void)userDidViewCloudFeedContent:(NSInteger)arg0 ;
+(void)userDidViewSharedLibraryParticipantAssetTrashNotification;
-(NSInteger)daemonOperation;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(id)initWithAssetsdClient:(id)arg0 ;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)run;
-(void)runDaemonSide;


@end


#endif