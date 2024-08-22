// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSEARCHATTRIBUTIONMANIFESTVERSIONMIGRATOR_H
#define GEOSEARCHATTRIBUTIONMANIFESTVERSIONMIGRATOR_H

@class geo_isolater, NSMutableArray, NSString;
@protocol GEOActiveTileGroupMigrator;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestConfiguration.h"

@interface GEOSearchAttributionManifestVersionMigrator : NSObject <GEOActiveTileGroupMigrator>

 {
    GEOResourceManifestConfiguration *_manifestConfiguration;
    geo_isolater *_isolater;
    NSMutableArray *_runningTasks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)needsMigrationForNewTileGroup:(id)arg0 inResourceManifest:(id)arg1 oldTileGroup:(id)arg2 dataSet:(id)arg3 ;
-(id)initWithManifestConfiguration:(id)arg0 mapLayerDataManager:(id)arg1 ;
-(id)taskForNewTileGroup:(id)arg0 inResourceManifest:(id)arg1 oldTileGroup:(id)arg2 activeScales:(id)arg3 activeScenarios:(id)arg4 dataSet:(id)arg5 updateType:(NSInteger)arg6 ;
-(void)_addRunningTask:(id)arg0 ;
-(void)_removeRunningTask:(id)arg0 ;


@end


#endif