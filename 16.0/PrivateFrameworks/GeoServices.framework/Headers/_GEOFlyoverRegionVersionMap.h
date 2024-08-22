// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOFLYOVERREGIONVERSIONMAP_H
#define _GEOFLYOVERREGIONVERSIONMAP_H


#import <Foundation/Foundation.h>

#import "GEOFlyoverRegionVersions.h"

@interface _GEOFlyoverRegionVersionMap : NSObject {
    GEOFlyoverRegionVersions *_versions;
    unordered_map<unsigned int, unsigned long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> _regionToIndex;
}




-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithFlyoverRegions:(id)arg0 ;
-(struct GEOFlyoverRegion *)regionForID:(unsigned int)arg0 ;
-(void)enumerateFlyoverRegions:(id)arg0 ;


@end


#endif