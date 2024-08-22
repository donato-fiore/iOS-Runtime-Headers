// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDSHARINGJOB_H
#define PLCLOUDSHARINGJOB_H

@class NSString;


#import "PLDaemonJob.h"
#import "PLPhotoLibrary.h"

@interface PLCloudSharingJob : PLDaemonJob {
    NSString *_archiveFilename;
}


@property (nonatomic) BOOL shouldPrioritize; // ivar: _shouldPrioritize
@property (readonly, nonatomic) PLPhotoLibrary *transientPhotoLibrary;


+(id)highPriorityOperationQueue;
+(id)lowPriorityOperationQueue;
+(id)recoveredEventsWithPathManager:(id)arg0 ;
+(void)deleteAllRecoveryEventsWithPathManager:(id)arg0 ;
-(BOOL)shouldArchiveXPCToDisk;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(id)initWithAssetsdClient:(id)arg0 ;
-(void)archiveXPCToDisk:(id)arg0 ;
-(void)runAndWaitForMessageToBeSent;
-(void)runDaemonSide;


@end


#endif