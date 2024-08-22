// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPACCESSROAD_H
#define GEOMAPACCESSROAD_H

@class NSString;
@protocol GEOMapRoad;


#import "GEOMapAccessLine.h"

@interface GEOMapAccessRoad : GEOMapAccessLine <GEOMapRoad>

 {
    ? _roadEdge;
    NSUInteger _roadID;
}


@property (readonly, nonatomic) NSUInteger coordinateCount;
@property (readonly, nonatomic) *? coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int formOfWay;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *internalRoadName;
@property (readonly, nonatomic) BOOL isBridge;
@property (readonly, nonatomic) BOOL isRail;
@property (readonly, nonatomic) BOOL isTunnel;
@property (readonly, nonatomic) CGFloat length;
@property (readonly, nonatomic) int rampType;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) NSUInteger roadID;
@property (readonly, nonatomic) CGFloat roadWidth;
@property (readonly, nonatomic) NSUInteger speedLimit;
@property (readonly, nonatomic) BOOL speedLimitIsMPH;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int travelDirection;


+(CGFloat)estimatedWidthForRoad:(id)arg0 ;
-(?)initWithMaproadEdge;
// -(id)findRoadsFrom:(id)arg0 completionHandler:(unk)arg1  ;
// -(id)findRoadsFromNextIntersection:(id)arg0 completionHandler:(unk)arg1  ;
// -(id)findRoadsFromPreviousIntersection:(id)arg0 completionHandler:(unk)arg1  ;
// -(id)findRoadsToNextIntersection:(id)arg0 completionHandler:(unk)arg1  ;
// -(id)findRoadsToPreviousIntersection:(id)arg0 completionHandler:(unk)arg1  ;
-(id)tileKeys;
-(void)roadEdgesWithHandler:(id)arg0 ;
-(void)roadFeaturesWithHandler:(id)arg0 ;


@end


#endif