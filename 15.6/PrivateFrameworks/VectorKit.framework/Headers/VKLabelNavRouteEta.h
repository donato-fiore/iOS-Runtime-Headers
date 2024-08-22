// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKLABELNAVROUTEETA_H
#define VKLABELNAVROUTEETA_H

@class NSString;
@protocol VKLabelNavFeature;

#import <Foundation/Foundation.h>

#import "VKRouteEtaDescription.h"
#import "VKLabelNavRoadLabel.h"
#import "VKRouteInfo.h"

@interface VKLabelNavRouteEta : NSObject <VKLabelNavFeature>

 {
    NSUInteger _etaLabelArtworkKey;
    unsigned char _orientation;
}


@property (nonatomic) BOOL didStyleChange; // ivar: _didStyleChange
@property (readonly, nonatomic) VKRouteEtaDescription *displayEtaDescription; // ivar: _displayEtaDescription
@property (readonly, nonatomic) unsigned char etaComparisonToMain;
@property (readonly, nonatomic) NSInteger intraRoadPriority;
@property (readonly, nonatomic) BOOL isAwayFromRoute; // ivar: _isAwayFromRoute
@property (readonly, nonatomic) BOOL isEtaFeature;
@property (readonly, nonatomic) BOOL isGuidanceStepStart;
@property (readonly, nonatomic) BOOL isInGuidance;
@property (readonly, nonatomic) BOOL isOnRoute; // ivar: _isOnRoute
@property (nonatomic) BOOL isPicked; // ivar: _isPicked
@property (readonly, nonatomic) BOOL isRamp;
@property (nonatomic) BOOL isRepositioning; // ivar: _isRepositioning
@property (readonly, nonatomic) BOOL isStartOfRoadName;
@property (readonly, nonatomic) BOOL isTrafficCameraFeature;
@property (readonly, nonatomic) VKLabelNavRoadLabel *label; // ivar: _etaLabel
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) unsigned char orientation;
@property (retain, nonatomic) VKRouteInfo *routeInfo; // ivar: _routeInfo
@property (readonly, nonatomic) PolylineCoordinate routeOffset; // ivar: _routeOffset
@property (nonatomic) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) NSString *shieldDisplayGroup;
@property (nonatomic) optional<gss::When> when; // ivar: _when
@property (readonly, nonatomic) CGFloat worldUnitsPerMeterAtPoint; // ivar: _worldUnitsPerMeterAtPoint


+(?)baseAttributesForEtaLabel:(?)arg0 focused:(?)arg1 etaComparison:(?)arg2 transportType:(?)arg3 navLabelType:(?)arg4 whenadditionalAttributes;
+(id)artworkForEtaDescription:(id)arg0 navContext:(struct NavContext *)arg1 roadSignStyleGroup:(*void)arg2 mercatorPoint:(*void)arg3 orientation:(unsigned char)arg4 isSelected:(BOOL)arg5 artworkCache:(*void)arg6 ;
+(struct RoadSignStyleGroup )styleForNavContext:(struct NavContext *)arg0 selected:(BOOL)arg1 focused:(BOOL)arg2 etaComparison:(unsigned char)arg3 transportType:(unsigned char)arg4 navLabelType:(unsigned char)arg5 when:(struct optional<gss::When> )arg6 additionalAttributes:(id)arg7 ;
+(unsigned char)toStyleEtaComparison:(unsigned char)arg0 ;
+(unsigned char)toStyleNavLabelType:(NSInteger)arg0 ;
-(BOOL)hasLabel;
-(id)initWithRouteInfo:(id)arg0 routeCoord:(struct PolylineCoordinate )arg1 ;
-(struct Matrix<double, 3, 1> )worldPointWithContext:(struct NavContext *)arg0 ;
-(struct _retain_ptr<VKLabelNavRoadLabel *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> )updateRoadSignWithNavContext:(struct NavContext *)arg0 artworkCache:(*void)arg1 ;
-(void)_clearLabel;
-(void)createLabelWithNavContext:(struct NavContext *)arg0 orientation:(unsigned char)arg1 etaDescription:(id)arg2 selected:(BOOL)arg3 when:(struct optional<gss::When> )arg4 artworkCache:(*void)arg5 ;
-(void)dealloc;
-(void)layoutWithNavContext:(struct NavContext *)arg0 ;
-(void)prepareStyleVarsWithContext:(struct NavContext *)arg0 ;
-(void)repositionAtRouteCoord:(struct PolylineCoordinate )arg0 ;


@end


#endif