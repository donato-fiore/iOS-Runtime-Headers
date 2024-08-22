// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKLABELNAVROAD_H
#define VKLABELNAVROAD_H

@class NSString;
@protocol VKLabelNavFeature;

#import <Foundation/Foundation.h>

#import "VKLabelNavRoadLabel.h"
#import "VKLabelNavJunction.h"

@interface VKLabelNavRoad : NSObject <VKLabelNavFeature>

 {
    *void _data;
    optional<gss::LineType> _lineType;
    NSUInteger _vertexIndexA;
    NSUInteger _vertexIndexB;
    *GeoCodecsConnectivityJunction _junctionA;
    vector<gm::Matrix<double, 2, 1>, geo::StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator>> _simplifiedPoints;
    vector<float, geo::StdAllocator<float, mdm::Allocator>> _simplifiedPointElevations;
    Matrix<float, 2, 1> _direction2D;
    Matrix<float, 3, 1> _direction3D;
    CGFloat _length;
    NSString *_shieldDisplayGroup;
    NSString *_shieldGroup;
    VKLabelNavRoadLabel *_roadSign;
    VKLabelNavRoadLabel *_roadShield;
    BOOL _isVisibilityCached;
    BOOL _cachedSignVisibility;
    BOOL _cachedShieldVisibility;
    BOOL _hasVisibleSigns;
    BOOL _hasVisibleShields;
}


@property (nonatomic) BOOL areLabelsDisabled; // ivar: _areLabelsDisabled
@property (readonly, nonatomic) char * cstrName;
@property ? direction2D;
@property ? direction3D;
@property (nonatomic) NSInteger intraRoadPriorityForRoadLabel; // ivar: _intraRoadPriorityForRoadLabel
@property (nonatomic) NSInteger intraRoadPriorityForShieldLabel; // ivar: _intraRoadPriorityForShieldLabel
@property (readonly, nonatomic) BOOL isAwayFromRoute;
@property (readonly, nonatomic) BOOL isEtaFeature;
@property (nonatomic) BOOL isGuidanceStepStart; // ivar: _isGuidanceStepStart
@property (nonatomic) BOOL isInGuidance; // ivar: _isInGuidance
@property (nonatomic) BOOL isOnRoute; // ivar: _isOnRoute
@property (readonly, nonatomic) BOOL isOnewayToJunction;
@property (nonatomic) BOOL isPicked; // ivar: _isPicked
@property (readonly, nonatomic) BOOL isRamp;
@property (nonatomic) BOOL isRoadLabelUnique; // ivar: _isRoadLabelUnique
@property (nonatomic) BOOL isStartOfRoadName; // ivar: _isStartOfRoadName
@property (readonly, nonatomic) BOOL isTrafficCameraFeature;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) *GeoCodecsConnectivityJunction junctionB; // ivar: _junctionB
@property (nonatomic) NSUInteger labelVertexIndexA; // ivar: _labelVertexIndexA
@property (nonatomic) NSUInteger labelVertexIndexB; // ivar: _labelVertexIndexB
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, weak, nonatomic) VKLabelNavJunction *navJunctionA; // ivar: _navJunctionA
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) unsigned char roadSignAlignment;
@property (nonatomic) float routeCrossProduct; // ivar: _routeCrossProduct
@property (nonatomic) PolylineCoordinate routeOffset; // ivar: _routeOffset
@property (readonly, nonatomic) NSString *shieldDisplayGroup;
@property (readonly, nonatomic) NSString *shieldGroup;
@property (nonatomic) BOOL suppressRoadSignIfDeduped; // ivar: _suppressRoadSignIfDeduped
@property (readonly, nonatomic) BOOL suppressRoadSignIfShieldPresent; // ivar: _suppressRoadSignIfShieldPresent
@property (readonly, nonatomic) *void tile; // ivar: _tile


-(?)getRoadEdge;
-(?)matchesRoadEdge;
-(BOOL)matchesRoad:(id)arg0 ;
-(id)_newLabelWithNavContext:(struct NavContext *)arg0 isShieldLabel:(BOOL)arg1 worldPoint:(struct Mercator3<double> )arg2 alignment:(unsigned char)arg3 artworkCache:(*void)arg4 ;
-(id)labelWithType:(BOOL)arg0 ;
-(void)_updateWithNavContext:(struct NavContext *)arg0 ;
-(void)_updateWithNavContext:(struct NavContext *)arg0 threshold:(CGFloat)arg1 ;
-(void)_worldRoadPoints:(*void)arg0 elevations:(*void)arg1 ;
-(void)appendSimplifiedWorldRoadPoints:(*void)arg0 pointElevations:(*void)arg1 ;
-(void)layoutWithNavContext:(struct NavContext *)arg0 ;
-(void)prepareStyleVarsWithContext:(struct NavContext *)arg0 ;
-(void)recreateRoadShieldWithNavContext:(struct NavContext *)arg0 artworkCache:(*void)arg1 ;
-(void)recreateRoadSignWithAlignment:(unsigned char)arg0 navContext:(struct NavContext *)arg1 artworkCache:(*void)arg2 ;


@end


#endif