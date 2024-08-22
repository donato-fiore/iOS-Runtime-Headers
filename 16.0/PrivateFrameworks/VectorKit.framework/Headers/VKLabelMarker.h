// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKLABELMARKER_H
#define VKLABELMARKER_H

@class NSArray;


#import "VKMarker.h"

@interface VKLabelMarker : VKMarker {
    shared_ptr<md::LabelMarker> _labelMarker;
}


@property (readonly, nonatomic) NSArray *dataIconImageKeys;
@property (readonly, nonatomic) NSArray *iconImageKeys;
@property (readonly, nonatomic) NSArray *imageKeys;
@property (nonatomic) BOOL isDragged;
@property (readonly, nonatomic) NSArray *relatedSubTexts;
@property (readonly, nonatomic) NSArray *relatedTexts;
@property (readonly, nonatomic) NSArray *shields;
@property (readonly, nonatomic) NSArray *transitSystems;
@property (nonatomic) BOOL useVKSelectionBalloon;


+(id)markerWithLabelMarker:(*void)arg0 ;
-(*NSUInteger)featureIDs;
-(*void)labelMarkerImpl;
-(BOOL)hasBuildingFaceAzimuth;
-(BOOL)hasBusinessID;
-(BOOL)hasFacingDirection;
-(BOOL)hasVenueLookInsideFloorOrdinal;
-(BOOL)isARWalkingFeature;
-(BOOL)isAlongSelectedTransitLine;
-(BOOL)isCluster;
-(BOOL)isClusterChild;
-(BOOL)isFlyoverTour;
-(BOOL)isLabelHitAtScreenPoint:(struct CGPoint )arg0 selectableLabelsOnly:(BOOL)arg1 ;
-(BOOL)isLeafCluster;
-(BOOL)isOccluded;
-(BOOL)isOnRoute;
-(BOOL)isOneWayArrow;
-(BOOL)isRouteAnnotation;
-(BOOL)isRouteEta;
-(BOOL)isRouteWaypoint;
-(BOOL)isSelectable;
-(BOOL)isSelected;
-(BOOL)isTextVisible;
-(BOOL)isTrafficCamera;
-(BOOL)isTrafficIncident;
-(BOOL)isTransit;
-(BOOL)isTransitAccessPoint;
-(BOOL)isTransitLine;
-(BOOL)isVenueButton;
-(BOOL)isVisible;
-(BOOL)positionOfInterest:(struct ? *)arg0 zoom:(*float)arg1 ;
-(NSUInteger)animationID;
-(NSUInteger)businessID;
-(NSUInteger)clientFeatureID;
-(NSUInteger)clusterFeatureCount;
-(NSUInteger)countFeatureIDs;
-(NSUInteger)elementCount;
-(NSUInteger)featureLabelIdentifier;
-(NSUInteger)venueBuildingID;
-(NSUInteger)venueComponentID;
-(NSUInteger)venueID;
-(NSUInteger)venueLevelID;
-(float)buildingFaceAzimuth;
-(float)buildingHeight;
-(float)facingDirection;
-(id)arWalkingFeature;
-(id)clusterContentBounds;
-(id)clusterFeatureAnnotations;
-(id)clusterWaypointInfos;
-(id)debugAnchorPointString;
-(id)featureAnnotation;
-(id)featureHandles;
-(id)incident;
-(id)initWithLabelMarkerPtr:(*void)arg0 ;
-(id)locale;
-(id)mapRegion;
-(id)parentClusterLabelMarker;
-(id)routeAnnotations;
-(id)routeInfo;
-(id)subtext;
-(id)text;
-(id)trafficCamera;
-(id)waypointInfo;
-(int)featureType;
-(int)selectionType;
-(int)sortKey;
-(short)venueFloorOrdinal;
-(short)venueLookInsideFloorOrdinal;
-(struct ? )coordinate;
-(struct ? )coordinate3D;
-(struct Box<double, 2> )_bounds;
-(struct CGPoint )calloutAnchorPointWithSnapToPixels:(BOOL)arg0 ;
-(struct CGRect )_calloutAnchorRect:(BOOL)arg0 ;
-(struct CGRect )calloutAnchorRect;
-(struct CGRect )lateralCalloutAnchorRect;
-(struct CGRect )screenCollisionBounds;
-(unsigned char)externalFeatureCategory;
-(unsigned char)pickedLabelBalloonBehavior;
-(unsigned char)venueComponentType;
-(void)setLabelPressed:(BOOL)arg0 ;


@end


#endif