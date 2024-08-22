// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDSHAREDDELETEALBUMSJOB_H
#define PLCLOUDSHAREDDELETEALBUMSJOB_H

@class NSArray, NSString;


#import "PLCloudSharingJob.h"

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob

@property (retain, nonatomic) NSArray *albumCloudGUIDsToDelete; // ivar: _albumCloudGUIDsToDelete
@property (retain, nonatomic) NSString *inviterAddress; // ivar: _inviterAddress


+(void)deleteLocalAlbumForMSASAlbumGUID:(id)arg0 inviterAddress:(id)arg1 ;
+(void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg0 ;
-(NSInteger)daemonOperation;
-(id)description;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)run;
-(void)runDaemonSide;


@end


#endif