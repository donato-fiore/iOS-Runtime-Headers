// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPFEATUREBUILDINGFINDER_H
#define GEOMAPFEATUREBUILDINGFINDER_H



#import "GEOMapFeatureAccessFinder.h"
#import "GEOTileLoader.h"

@interface GEOMapFeatureBuildingFinder : GEOMapFeatureAccessFinder {
    GEOTileLoader *_tileLoader;
}




// -(id)findBuildingsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)initWithTileLoader:(id)arg0 ;


@end


#endif