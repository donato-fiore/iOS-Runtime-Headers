// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOSEARCHATTRIBUTIONMANIFESTVERSIONMIGRATIONTASK_H
#define _GEOSEARCHATTRIBUTIONMANIFESTVERSIONMIGRATIONTASK_H

@class NSURL, NSURLSession, NSURLSessionDataTask, NSString, NSProgress;
@protocol GEOActiveTileGroupMigrationTask, OS_dispatch_queue, GEORequestCounterTicket, NSObject;

#import <Foundation/Foundation.h>

#import "GEOSearchAttributionManifestVersionMigrator.h"
#import "GEOActiveTileGroup.h"
#import "GEOReportedProgress.h"
#import "GEOSearchAttributionManifest.h"
#import "GEOActiveTileGroupMigrationTaskOptions.h"

@interface _GEOSearchAttributionManifestVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask>

 {
    GEOSearchAttributionManifestVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _running;
    NSURL *_newSearchAttributionManifestURL;
    GEOActiveTileGroup *_oldTileGroup;
    id *_completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_downloadTask;
    id<GEORequestCounterTicket> *_requestCounterTicket;
    GEOSearchAttributionManifest *_attributionManifest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedWeight;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options; // ivar: _options
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NSObject> *transaction; // ivar: _transaction


-(id)init;
-(id)initWithMigrator:(id)arg0 newSearchAttributionManifestURL:(id)arg1 oldTileGroup:(id)arg2 ;
-(void)_completeWithError:(id)arg0 ;
-(void)_handleResponse:(id)arg0 withData:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)populateTileGroup:(id)arg0 ;
-(void)removeOldData:(id)arg0 ;
// -(void)startWithCompletionHandler:(id)arg0 callbackQueue:(unk)arg1  ;


@end


#endif