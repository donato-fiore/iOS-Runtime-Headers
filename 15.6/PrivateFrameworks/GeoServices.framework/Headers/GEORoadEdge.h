// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROADEDGE_H
#define GEOROADEDGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GEOMultiSectionFeature.h"

@interface GEORoadEdge : NSObject <NSCopying>

 {
    ? _edge;
    GEOMultiSectionFeature *_feature;
}


@property (readonly, nonatomic) *GeoCodecsConnectivityJunction junctionA;
@property (readonly, nonatomic) *GeoCodecsConnectivityJunction junctionB;
@property (readonly, nonatomic) NSUInteger junctionIndexA;
@property (readonly, nonatomic) NSUInteger junctionIndexB;
@property (readonly, nonatomic) GEOMultiSectionFeature *road;
@property (readonly, nonatomic) NSUInteger vertexIndexA;
@property (readonly, nonatomic) NSUInteger vertexIndexB;


-(?)initwithMultiSectionFeatureInterface;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct GeoCodecsRoadEdge *)get;
-(void)setMultiSectionFeature:(id)arg0 ;


@end


#endif