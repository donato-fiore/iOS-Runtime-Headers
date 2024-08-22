// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOALTITUDEMANIFESTRESERVED_H
#define GEOALTITUDEMANIFESTRESERVED_H

@class geo_isolater;

#import <Foundation/Foundation.h>


@interface GEOAltitudeManifestReserved : NSObject {
    map<unsigned int, _GEOAltitudeTriggerData, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, _GEOAltitudeTriggerData>>> _reservedTriggerData;
    unsigned int _reservedCurrentRegion;
    unsigned char _reservedTourServerType;
    geo_isolater *_reservedIsolater;
}






@end


#endif