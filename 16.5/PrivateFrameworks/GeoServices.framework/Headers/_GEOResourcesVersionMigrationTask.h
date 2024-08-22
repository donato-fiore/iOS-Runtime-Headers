// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEORESOURCESVERSIONMIGRATIONTASK_H
#define _GEORESOURCESVERSIONMIGRATIONTASK_H

@class NSSet, NSArray, NSString, NSProgress;
@protocol GEOActiveTileGroupMigrationTask, OS_dispatch_queue, NSObject;

#import <Foundation/Foundation.h>

#import "GEOResourcesVersionMigrator.h"
#import "GEOResourceManifestConfiguration.h"
#import "GEOTileGroup.h"
#import "GEOResources.h"
#import "GEODataSetDescription.h"
#import "GEOActiveTileGroup.h"
#import "GEOResourceLoader.h"
#import "GEOReportedProgress.h"
#import "GEOPowerAssertion.h"
#import "GEOActiveTileGroupMigrationTaskOptions.h"

@interface _GEOResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask>

 {
    GEOResourcesVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _running;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEODataSetDescription *_preferredDataSet;
    GEOActiveTileGroup *_oldTileGroup;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    id *_completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOResourceLoader *_immediateResourceLoader;
    GEOResourceLoader *_wifiOnlyResourceLoader;
    NSArray *_loadedResources;
    NSArray *_unloadedConditionalResources;
    GEOReportedProgress *_progress;
    GEOPowerAssertion *_powerAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedWeight;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options; // ivar: _options
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NSObject> *transaction; // ivar: _transaction


+(Class)_resourceLoaderClass;
+(id)_resourcesDirectory:(id)arg0 ;
-(id)_resourcesDirectory;
-(id)_staleResourceForResource:(id)arg0 ;
-(id)init;
-(id)initWithMigrator:(id)arg0 manifestConfiguration:(id)arg1 newTileGroup:(id)arg2 inResourceManifest:(id)arg3 dataSet:(id)arg4 oldTileGroup:(id)arg5 activeScales:(id)arg6 activeScenarios:(id)arg7 ;
-(void)_loadImmediateResources:(id)arg0 conditionalWifiResources:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancel;
-(void)populateTileGroup:(id)arg0 ;
-(void)removeOldData:(id)arg0 ;
// -(void)startWithCompletionHandler:(id)arg0 callbackQueue:(unk)arg1  ;


@end


#endif