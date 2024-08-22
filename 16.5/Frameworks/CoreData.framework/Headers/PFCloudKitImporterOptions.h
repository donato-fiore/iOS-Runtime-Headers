// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITIMPORTEROPTIONS_H
#define PFCLOUDKITIMPORTEROPTIONS_H

@class CKDatabase, NSURL;
@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFCloudKitStoreMonitor.h"
#import "NSCloudKitMirroringDelegateOptions.h"

@interface PFCloudKitImporterOptions : NSObject <NSCopying>

 {
    CKDatabase *_database;
    PFCloudKitStoreMonitor *_monitor;
    NSCloudKitMirroringDelegateOptions *_options;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURL *_assetStorageURL;
}




-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOptions:(id)arg0 monitor:(id)arg1 assetStorageURL:(id)arg2 workQueue:(id)arg3 andDatabase:(id)arg4 ;
-(void)dealloc;


@end


#endif