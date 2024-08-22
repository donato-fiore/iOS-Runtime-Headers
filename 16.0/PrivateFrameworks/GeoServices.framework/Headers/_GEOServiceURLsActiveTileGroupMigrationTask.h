// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOSERVICEURLSACTIVETILEGROUPMIGRATIONTASK_H
#define _GEOSERVICEURLSACTIVETILEGROUPMIGRATIONTASK_H

@class NSString, NSProgress;
@protocol GEOActiveTileGroupMigrationTask, NSObject;

#import <Foundation/Foundation.h>

#import "GEOServiceURLsActiveTileGroupMigrator.h"
#import "GEOResourceManifestConfiguration.h"
#import "GEOTileGroup.h"
#import "GEOResources.h"
#import "GEOActiveTileGroup.h"
#import "GEODataSetDescription.h"
#import "GEOReportedProgress.h"
#import "GEOActiveTileGroupMigrationTaskOptions.h"

@interface _GEOServiceURLsActiveTileGroupMigrationTask : NSObject <GEOActiveTileGroupMigrationTask>

 {
    GEOServiceURLsActiveTileGroupMigrator *_migrator;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEOActiveTileGroup *_oldTileGroup;
    GEODataSetDescription *_dataSetDescription;
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


-(id)init;
-(id)initWithMigrator:(id)arg0 manifestConfiguration:(id)arg1 newTileGroup:(id)arg2 inResourceManifest:(id)arg3 oldTileGroup:(id)arg4 dataSet:(id)arg5 ;
-(void)cancel;
-(void)populateTileGroup:(id)arg0 ;
-(void)removeOldData:(id)arg0 ;
// -(void)startWithCompletionHandler:(id)arg0 callbackQueue:(unk)arg1  ;


@end


#endif