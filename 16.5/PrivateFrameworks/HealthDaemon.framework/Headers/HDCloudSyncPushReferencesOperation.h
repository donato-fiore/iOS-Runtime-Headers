// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCPUSHREFERENCESOPERATION_H
#define HDCLOUDSYNCPUSHREFERENCESOPERATION_H

@class NSMutableArray, NSMutableSet;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncCachedZone.h"

@interface HDCloudSyncPushReferencesOperation : HDCloudSyncOperation {
    NSMutableArray *_unsynchronizedReferences;
    NSMutableArray *_referencesToPush;
    NSMutableSet *_attachmentRecordsToPush;
    HDCloudSyncCachedZone *_attachmentZone;
}




-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;


@end


#endif