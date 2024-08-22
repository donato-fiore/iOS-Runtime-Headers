// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDSHAREDUPDATEALBUMMETADATAJOB_H
#define PLCLOUDSHAREDUPDATEALBUMMETADATAJOB_H

@class NSDictionary;


#import "PLCloudSharingJob.h"

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob

@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata


+(void)updateAlbumMetadata:(id)arg0 ;
-(NSInteger)daemonOperation;
-(id)_argumentsDictionaryAsData:(id)arg0 ;
-(id)_argumentsDictionaryFromXPCEvent:(id)arg0 ;
-(id)description;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)run;
-(void)runDaemonSide;


@end


#endif