// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMULTISECTIONFEATURE_H
#define GEOMULTISECTIONFEATURE_H


#import <Foundation/Foundation.h>

#import "GEOFeature.h"

@interface GEOMultiSectionFeature : NSObject {
    *void _multiSectionFeature;
    GEOFeature *_feature;
}


@property (readonly, nonatomic) *GeoCodecsAddressRange addressRange;
@property (readonly, nonatomic) BOOL displaySpeedIsLimited;
@property (readonly, nonatomic) unsigned char displaySpeedLimit;
@property (readonly, nonatomic) BOOL displaySpeedLimitIsMPH;
@property (readonly, nonatomic) GEOFeature *feature;
@property (readonly, nonatomic) int formOfWay;
@property (readonly, nonatomic) *void get;
@property (readonly, nonatomic) BOOL isRoadSegmentReversed;
@property (readonly, nonatomic) *GeoCodecsLaneGeometry laneGeometry;
@property (readonly, nonatomic) unsigned int lineCrossingCount;
@property (readonly, nonatomic) unsigned int lineCrossingIndex;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) BOOL reverseDirectionDisplaySpeedIsLimited;
@property (readonly, nonatomic) unsigned char reverseDirectionDisplaySpeedLimit;
@property (readonly, nonatomic) BOOL reverseDirectionDisplaySpeedLimitIsMPH;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) NSUInteger roadPointCount;
@property (readonly, nonatomic) NSUInteger roadPointIndex;
@property (readonly, nonatomic) unsigned short roadWidth;
@property (readonly, nonatomic) NSUInteger sectionCount;
@property (readonly, nonatomic) NSUInteger sectionOffset;
@property (readonly, nonatomic) unsigned char speedLimit;
@property (readonly, nonatomic) unsigned int speedLimitShieldId;
@property (readonly, nonatomic) int travelDirection;


-(*unsigned char)bounds:(short)arg0 ;
-(id)init:(*void)arg0 withVectorTile:(id)arg1 ;


@end


#endif