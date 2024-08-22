// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPITEMBUILDER_H
#define GEOMAPITEMBUILDER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOAddress.h"
#import "GEOLatLng.h"
#import "GEOLocation.h"
#import "GEOMapRegion.h"

@interface GEOMapItemBuilder : NSObject {
    ? _has;
}


@property (retain, nonatomic) GEOAddress *address; // ivar: _address
@property (retain, nonatomic) GEOLatLng *latlng; // ivar: _latlng
@property (retain, nonatomic) GEOLocation *location; // ivar: _location
@property (retain, nonatomic) GEOMapRegion *mapRegion; // ivar: _mapRegion
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int referenceFrame; // ivar: _referenceFrame


+(id)buildWithSetterBlock:(id)arg0 ;
-(id)build;
-(id)init;


@end


#endif