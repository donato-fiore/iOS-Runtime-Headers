// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOREGIONALRESOURCESVERSIONMIGRATIONTASK_H
#define _GEOREGIONALRESOURCESVERSIONMIGRATIONTASK_H

@class NSSet, NSString, NSProgress;
@protocol GEOActiveTileGroupMigrationTask, OS_dispatch_queue, NSObject;

#import <Foundation/Foundation.h>

#import "GEORegionalResourcesVersionMigrator.h"
#import "GEOResourceManifestConfiguration.h"
#import "GEOTileGroup.h"
#import "GEOResources.h"
#import "GEOReportedProgress.h"
#import "GEOActiveTileGroupMigrationTaskOptions.h"

@interface _GEORegionalResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask>

 {
    GEORegionalResourcesVersionMigrator *_migrator;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    id *_completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedWeight;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options; // ivar: _options
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NSObject> *transaction; // ivar: _transaction


+(id)_resourcesDirectory:(id)arg0 ;
-(id)_resourcesDirectory;
-(id)init;
-(id)initWithMigrator:(id)arg0 manifestConfiguration:(id)arg1 newTileGroup:(id)arg2 inResourceManifest:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 ;
-(void)cancel;
-(void)populateTileGroup:(id)arg0 ;
-(void)removeOldData:(id)arg0 ;
// -(void)startWithCompletionHandler:(id)arg0 callbackQueue:(unk)arg1  ;


@end


#endif