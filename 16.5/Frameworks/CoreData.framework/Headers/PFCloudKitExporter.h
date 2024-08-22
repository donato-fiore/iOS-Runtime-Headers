// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITEXPORTER_H
#define PFCLOUDKITEXPORTER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, PFCloudKitExporterDelegate;

#import <Foundation/Foundation.h>

#import "PFCloudKitExporterOptions.h"
#import "NSCloudKitMirroringRequest.h"
#import "PFCloudKitExportContext.h"
#import "PFCloudKitStoreMonitor.h"

@interface PFCloudKitExporter : NSObject {
    NSMutableDictionary *_operationIDToResult;
    id *_exportCompletionBlock;
    PFCloudKitExporterOptions *_options;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSCloudKitMirroringRequest *_request;
    NSObject<PFCloudKitExporterDelegate> *_delegate;
    PFCloudKitExportContext *_exportContext;
    PFCloudKitStoreMonitor *_monitor;
}




-(id)initWithOptions:(id)arg0 request:(id)arg1 monitor:(id)arg2 workQueue:(id)arg3 ;
-(void)dealloc;


@end


#endif