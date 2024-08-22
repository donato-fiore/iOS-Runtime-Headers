// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDSHAREDCOMMENTSJOB_H
#define PLCLOUDSHAREDCOMMENTSJOB_H

@class NSString, NSArray, NSDictionary;


#import "PLCloudSharingJob.h"

@interface PLCloudSharedCommentsJob : PLCloudSharingJob

@property (retain, nonatomic) NSString *albumGUID; // ivar: _albumGUID
@property (retain, nonatomic) NSString *assetGUID; // ivar: _assetGUID
@property (retain, nonatomic) NSString *commentGUID; // ivar: _commentGUID
@property (nonatomic) NSInteger jobType; // ivar: _jobType
@property (retain, nonatomic) NSArray *msASComments; // ivar: _msASComments
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // ivar: _mstreamdInfoDictionary


+(void)assetsdLocallyProcessAddedComments:(id)arg0 assetGUID:(id)arg1 albumGUID:(id)arg2 info:(id)arg3 libraryServicesManager:(id)arg4 ;
+(void)deleteSharedCommentFromServer:(id)arg0 ;
+(void)locallyProcessAddedComments:(id)arg0 assetGUID:(id)arg1 albumGUID:(id)arg2 info:(id)arg3 ;
+(void)locallyProcessDeletedComments:(id)arg0 info:(id)arg1 ;
+(void)publishCommentToServer:(id)arg0 ;
-(BOOL)shouldArchiveXPCToDisk;
-(NSInteger)daemonOperation;
-(id)description;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)executeDeleteCommentFromServer;
-(void)executeProcessServerNotificationOfCommentChanges;
-(void)executePublishCommentToServer;
-(void)run;
-(void)runDaemonSide;


@end


#endif