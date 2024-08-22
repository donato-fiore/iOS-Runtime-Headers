// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPUBLISHCLOUDSHAREDASSETSJOB_H
#define PLPUBLISHCLOUDSHAREDASSETSJOB_H

@class NSString, NSDictionary, NSArray;


#import "PLCloudSharingJob.h"

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob

@property (retain, nonatomic) NSString *batchCommentText; // ivar: _batchCommentText
@property (retain, nonatomic) NSDictionary *customExportsInfo; // ivar: _customExportsInfo
@property (nonatomic) BOOL isNewAlbum; // ivar: _isNewAlbum
@property (retain, nonatomic) NSArray *originalAssetUUIDs; // ivar: _originalAssetUUIDs
@property (retain, nonatomic) NSString *publishAlbumCloudGUID; // ivar: _publishAlbumCloudGUID
@property (retain, nonatomic) NSArray *stillImageOnlyAssetUUIDs; // ivar: _stillImageOnlyAssetUUIDs
@property (retain, nonatomic) NSDictionary *trimmedVideoPathInfo; // ivar: _trimmedVideoPathInfo


+(id)videoComplementURLForSharingFromAsset:(id)arg0 ;
+(void)publishBatchOfOriginalAssetUUIDs:(id)arg0 toSharedAlbum:(id)arg1 withAssetsSharingInfos:(id)arg2 customExportsInfo:(id)arg3 trimmedVideoPathInfo:(id)arg4 isNewAlbum:(BOOL)arg5 batchCommentText:(id)arg6 ;
-(BOOL)retrieveURLsFromAssetWithUUID:(id)arg0 withExportedFileURL:(id)arg1 primaryURL:(*id)arg2 videoComplementURL:(*id)arg3 ;
-(BOOL)shouldArchiveXPCToDisk;
-(NSInteger)daemonOperation;
-(id)description;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)executeDaemonOperation;
-(void)run;
-(void)runDaemonSide;


@end


#endif