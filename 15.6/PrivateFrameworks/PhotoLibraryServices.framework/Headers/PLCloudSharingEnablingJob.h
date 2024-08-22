// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDSHARINGENABLINGJOB_H
#define PLCLOUDSHARINGENABLINGJOB_H



#import "PLCloudSharingJob.h"

@interface PLCloudSharingEnablingJob : PLCloudSharingJob

@property (nonatomic) BOOL enableSharing; // ivar: _enableSharing


+(void)deleteAllLocalSharedAlbumsInLibrary:(id)arg0 keepPendingAlbums:(BOOL)arg1 withReason:(id)arg2 ;
+(void)disableCloudSharingWithLibraryServicesManager:(id)arg0 ;
+(void)enableCloudSharing:(BOOL)arg0 withPathManager:(id)arg1 ;
-(BOOL)shouldArchiveXPCToDisk;
-(NSInteger)daemonOperation;
-(id)description;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)run;
-(void)runDaemonSide;


@end


#endif