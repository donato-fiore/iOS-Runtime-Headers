// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOREGIONALRESOURCESVERSIONMIGRATOR_H
#define GEOREGIONALRESOURCESVERSIONMIGRATOR_H

@class NSString;
@protocol GEOActiveTileGroupMigrator;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestConfiguration.h"

@interface GEORegionalResourcesVersionMigrator : NSObject <GEOActiveTileGroupMigrator>

 {
    GEOResourceManifestConfiguration *_manifestConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithManifestConfiguration:(id)arg0 mapLayerDataManager:(id)arg1 ;
-(id)taskForNewTileGroup:(id)arg0 inResourceManifest:(id)arg1 oldTileGroup:(id)arg2 activeScales:(id)arg3 activeScenarios:(id)arg4 dataSet:(id)arg5 updateType:(NSInteger)arg6 ;


@end


#endif