// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOSERVICEURLSACTIVETILEGROUPMIGRATOR_H
#define GEOSERVICEURLSACTIVETILEGROUPMIGRATOR_H

@class NSString;
@protocol GEOActiveTileGroupMigrator;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestConfiguration.h"

@interface GEOServiceURLsActiveTileGroupMigrator : NSObject <GEOActiveTileGroupMigrator>

 {
    GEOResourceManifestConfiguration *_manifestConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)needsMigrationForNewTileGroup:(id)arg0 inResourceManifest:(id)arg1 oldTileGroup:(id)arg2 dataSet:(id)arg3 ;
-(id)initWithManifestConfiguration:(id)arg0 mapLayerDataManager:(id)arg1 ;
-(id)taskForNewTileGroup:(id)arg0 inResourceManifest:(id)arg1 oldTileGroup:(id)arg2 activeScales:(id)arg3 activeScenarios:(id)arg4 dataSet:(id)arg5 updateType:(NSInteger)arg6 ;


@end


#endif