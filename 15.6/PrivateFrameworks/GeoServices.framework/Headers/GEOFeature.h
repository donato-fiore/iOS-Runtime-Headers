// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOFEATURE_H
#define GEOFEATURE_H


#import <Foundation/Foundation.h>

#import "GEOVectorTile.h"
#import "GEOFeatureStyleAttributes.h"

@interface GEOFeature : NSObject {
    GEOVectorTile *_containingTile;
    *void _feature;
    GEOFeatureStyleAttributes *_attributes;
}


@property (readonly, nonatomic) GEOFeatureStyleAttributes *attributes;
@property (readonly, nonatomic) NSUInteger businessID;
@property (readonly, nonatomic) GEOVectorTile *containingTile;
@property (readonly, nonatomic) NSUInteger featureID;
@property (readonly, nonatomic) NSUInteger flyoverAnimationID;
@property (readonly, nonatomic) BOOL hasBusinessID;
@property (readonly, nonatomic) NSUInteger labelCount;
@property (readonly, nonatomic) NSUInteger labelOffset;
@property (readonly, nonatomic) float minZoomRank;
@property (readonly, nonatomic) char * name;
@property (readonly, nonatomic) NSUInteger shieldCount;
@property (readonly, nonatomic) NSUInteger shieldOffset;
@property (readonly, nonatomic) unsigned int styleID;
@property (readonly, nonatomic) int type;


-(*void)get;
-(id)init:(*void)arg0 withVectorTile:(id)arg1 ;
-(void)dealloc;


@end


#endif