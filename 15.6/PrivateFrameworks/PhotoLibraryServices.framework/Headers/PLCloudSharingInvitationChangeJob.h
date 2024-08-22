// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDSHARINGINVITATIONCHANGEJOB_H
#define PLCLOUDSHARINGINVITATIONCHANGEJOB_H

@class NSArray, NSString, NSDictionary;


#import "PLCloudSharingJob.h"

@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob

@property (retain, nonatomic) NSArray *MSASSharingRelationships; // ivar: _MSASSharingRelationships
@property (retain, nonatomic) NSString *albumGUID; // ivar: _albumGUID
@property (nonatomic) NSInteger jobType; // ivar: _jobType
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // ivar: _mstreamdInfoDictionary
@property (nonatomic) NSInteger relationshipChangeType; // ivar: _relationshipChangeType
@property (retain, nonatomic) NSString *resendInvitationGUID; // ivar: _resendInvitationGUID


+(void)resendPendingInvitationWithGUID:(id)arg0 albumGUID:(id)arg1 ;
+(void)saveServerStateLocallyForSharingACLRelationships:(id)arg0 changeType:(NSInteger)arg1 info:(id)arg2 ;
+(void)saveServerStateLocallyForSharingInvitationRelationships:(id)arg0 changeType:(NSInteger)arg1 info:(id)arg2 ;
+(void)sendServerPendingInvitationsForAlbumWithGUID:(id)arg0 ;
-(BOOL)shouldArchiveXPCToDisk;
-(NSInteger)daemonOperation;
-(id)description;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)executeSaveServerStateLocallyForSharingACLRelationships;
-(void)executeSaveServerStateLocallyForSharingInvitationRelationships;
-(void)executeSendServerPendingInvitationsForAlbumWithGUID;
-(void)run;
-(void)runDaemonSide;


@end


#endif