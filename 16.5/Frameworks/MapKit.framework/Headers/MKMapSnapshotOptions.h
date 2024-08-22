// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMAPSNAPSHOTOPTIONS_H
#define MKMAPSNAPSHOTOPTIONS_H

@class NSArray, GEOApplicationAuditToken, GEOComposedRoute, VKRouteContext, UITraitCollection;
@protocol NSSecureCoding, NSCopying, VKRouteOverlay;

#import <Foundation/Foundation.h>

#import "MKMapCamera.h"
#import "MKPointOfInterestFilter.h"

@interface MKMapSnapshotOptions : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, getter=_allowsSimultaneousLightDarkSnapshots, setter=_setAllowsSimultaneousLightDarkSnapshots:) BOOL allowsSimultaneousLightDarkSnapshots; // ivar: _allowsSimultaneousLightDarkSnapshots
@property (copy, nonatomic) NSArray *annotationViews; // ivar: _annotationViews
@property (retain, nonatomic, getter=_auditToken, setter=_setAuditToken:) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (copy, nonatomic) MKMapCamera *camera; // ivar: _camera
@property (nonatomic, getter=_cartographicConfiguration, setter=_setCartographicConfiguration:) ? cartographicConfiguration; // ivar: _cartographicConfiguration
@property (retain, nonatomic, getter=_composedRouteForRouteLine, setter=_setComposedRouteForRouteLine:) GEOComposedRoute *composedRouteForRouteLine; // ivar: _composedRouteForRouteLine
@property (copy, nonatomic, getter=_customFeatureAnnotations, setter=_setCustomFeatureAnnotations:) NSArray *customFeatureAnnotations; // ivar: _customFeatureAnnotations
@property (nonatomic, getter=_edgeInsets, setter=_setEdgeInsets:) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) ? mapRect; // ivar: _mapRect
@property (nonatomic) NSUInteger mapType; // ivar: _mapType
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // ivar: _pointOfInterestFilter
@property (nonatomic) ? region; // ivar: _region
@property (nonatomic, getter=_rendersInBackground, setter=_setRendersInBackground:) BOOL rendersInBackground; // ivar: _rendersInBackground
@property (retain, nonatomic, getter=_routeContext, setter=_setRouteContext:) VKRouteContext *routeContext; // ivar: _routeContext
@property (retain, nonatomic, getter=_routeOverlay, setter=_setRouteOverlay:) NSObject<VKRouteOverlay> *routeOverlay; // ivar: _routeOverlay
@property (nonatomic) CGFloat scale;
@property (nonatomic, getter=_searchResultsType, setter=_setSearchResultsType:) unsigned char searchResultsType; // ivar: _searchResultsType
@property (nonatomic, getter=_showsAppleLogo, setter=_setShowsAppleLogo:) BOOL showsAppleLogo; // ivar: _showsAppleLogo
@property (nonatomic) BOOL showsBuildings; // ivar: _showsBuildings
@property (nonatomic, getter=_showsNightMode, setter=_setShowsNightMode:) BOOL showsNightMode;
@property (nonatomic, getter=_showsPointLabels, setter=_setShowsPointLabels:) BOOL showsPointLabels; // ivar: _showsPointLabels
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic, getter=_showsRoadLabels, setter=_setShowsRoadLabels:) BOOL showsRoadLabels; // ivar: _showsRoadLabels
@property (nonatomic, getter=_showsRoadShields, setter=_setShowsRoadShields:) BOOL showsRoadShields; // ivar: _showsRoadShields
@property (nonatomic, getter=_showsVenues, setter=_setShowsVenues:) BOOL showsVenues; // ivar: _showsVenues
@property (nonatomic) NSUInteger signpostId; // ivar: _signpostId
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic, getter=_snapshotServiceSerialPerProcess, setter=_setSnapshotServiceSerialPerProcess:) BOOL snapshotServiceSerialPerProcess; // ivar: _snapshotServiceSerialPerProcess
@property (copy, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (nonatomic, getter=_useSnapshotService, setter=_setUseSnapshotService:) BOOL useSnapshotService; // ivar: _useSnapshotService
@property (readonly, nonatomic) BOOL usingRect; // ivar: _usingRect
@property (readonly, nonatomic, getter=_viewportMode) NSInteger viewportMode; // ivar: _mode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_prepareToSubmit;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif