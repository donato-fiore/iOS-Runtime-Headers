// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCPULLREFERENCESOPERATION_H
#define HDCLOUDSYNCPULLREFERENCESOPERATION_H

@class NSMutableDictionary, NSString;
@protocol HDSynchronousTaskGroupDelegate;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncCachedZone.h"
#import "HDSynchronousTaskGroup.h"

@interface HDCloudSyncPullReferencesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>

 {
    NSMutableDictionary *_attachmentRecordsToFetch;
    NSMutableDictionary *_referencesToPersist;
    HDCloudSyncCachedZone *_attachmentZone;
    NSInteger _epoch;
    HDSynchronousTaskGroup *_taskGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(void)main;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif