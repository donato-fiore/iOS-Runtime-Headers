// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDSHARINGVIEWEDSTATECHANGEJOB_H
#define PLCLOUDSHARINGVIEWEDSTATECHANGEJOB_H

@class NSString, NSDate;


#import "PLCloudSharingJob.h"

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob

@property (retain, nonatomic) NSString *albumGUID; // ivar: _albumGUID
@property (nonatomic) BOOL albumHasUnseenContent; // ivar: _albumHasUnseenContent
@property (nonatomic) NSInteger albumUnviewedAssetCount; // ivar: _albumUnviewedAssetCount
@property (retain, nonatomic) NSString *assetCollectionGUID; // ivar: _assetCollectionGUID
@property (nonatomic) BOOL assetCollectionHasUnreadComments; // ivar: _assetCollectionHasUnreadComments
@property (retain, nonatomic) NSDate *assetCollectionLastViewedCommentDate; // ivar: _assetCollectionLastViewedCommentDate
@property (nonatomic) NSInteger jobType; // ivar: _jobType


+(void)markAlbum:(id)arg0 asHavingUnseenContent:(BOOL)arg1 ;
+(void)markAssetCollection:(id)arg0 asHavingUnreadComments:(BOOL)arg1 inAlbum:(id)arg2 ;
+(void)setLastViewedCommentDate:(id)arg0 forAssetCollection:(id)arg1 inAlbum:(id)arg2 ;
+(void)updateUnviewedAssetCollectionCount:(int)arg0 forAlbum:(id)arg1 ;
-(NSInteger)daemonOperation;
-(id)description;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(void)_executeAlbumUnviewedAssetCountChangedWithGroup;
-(void)_executeAlbumViewedStateChanged;
-(void)_executeAssetCommentsReadStateChangedWithGroup;
-(void)_executeAssetLastViewedCommentDateChangedWithGroup;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)run;
-(void)runDaemonSide;


@end


#endif