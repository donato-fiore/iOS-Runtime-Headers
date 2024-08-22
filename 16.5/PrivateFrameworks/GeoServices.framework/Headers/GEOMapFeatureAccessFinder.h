// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATUREACCESSFINDER_H
#define GEOMAPFEATUREACCESSFINDER_H


#import <Foundation/Foundation.h>

#import "_GEOMapFeatureAccessRequest.h"
#import "_GEOMapFeatureAccessRequestParameters.h"

@interface GEOMapFeatureAccessFinder : NSObject {
    _GEOMapFeatureAccessRequest *_existingRequest;
}


@property (retain, nonatomic) _GEOMapFeatureAccessRequestParameters *requestParameters; // ivar: _requestParameters


-(BOOL)_boundingCircle:(*void)arg0 intersectsFeature:(id)arg1 ;
-(BOOL)_boundingCircle:(*void)arg0 intersectsPoints:(struct GeoCodecsVectorTilePoint *)arg1 pointCount:(NSUInteger)arg2 ;
-(BOOL)_boundingCircle:(*void)arg0 intersectsTransitLink:(id)arg1 ;
-(BOOL)_featureHasValidGeometry:(id)arg0 ;
-(id)init;
-(id)initWithRequestParameters:(id)arg0 ;
-(struct Sphere<float, 2, std::enable_if<true>> )_boundingCircleWithCenter:(struct ? )arg0 radius:(CGFloat)arg1 inTile:(struct _GEOTileKey )arg2 ;
-(void)setExistingRequest:(id)arg0 ;


@end


#endif