// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVECTORTRANSITLINE_H
#define GEOVECTORTRANSITLINE_H


#import <Foundation/Foundation.h>

#import "GEOFeature.h"

@interface GEOVectorTransitLine : NSObject {
    *void _vectorTransitLine;
    GEOFeature *_feature;
}


@property (readonly, nonatomic) unsigned int cartoId;
@property (readonly, nonatomic) *GeoCodecsRGBAColor8 color;
@property (readonly, nonatomic) GEOFeature *feature;
@property (readonly, nonatomic) float minZoom;
@property (readonly, nonatomic) unsigned int order;
@property (readonly, nonatomic) unsigned int subtitleOffset;
@property (readonly, nonatomic) unsigned int systemIndex;


-(*void)get;
-(id)init:(*void)arg0 withVectorTile:(id)arg1 ;


@end


#endif