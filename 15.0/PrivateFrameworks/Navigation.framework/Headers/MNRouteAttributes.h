// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNROUTEATTRIBUTES_H
#define MNROUTEATTRIBUTES_H

@class GEORouteAttributes, NSArray, VGVehicle, NSError, VGVirtualGarage, geo_isolater;
@protocol VGVirtualGarageObserver, NSSecureCoding, NSCopying;



@interface MNRouteAttributes : GEORouteAttributes <VGVirtualGarageObserver, NSSecureCoding, NSCopying>

 {
    NSArray *_latLngs;
    BOOL _forceUpdate;
    BOOL _hasOpenedVirtualGarageConnection;
    BOOL _hasResolvedVehicle;
    VGVehicle *_vehicle;
    NSError *_vgError;
    VGVirtualGarage *_garage;
    geo_isolater *_vehicleIsolator;
    NSArray *_lprRules;
    NSError *_lprError;
}


@property (nonatomic) BOOL hasResolvedRules; // ivar: _hasResolvedRules
@property (nonatomic) BOOL hasResolvedVehicle;


+(BOOL)supportsSecureCoding;
+(void)_loadLPRRulesForWaypoints:(id)arg0 forceUpdate:(BOOL)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAttributes:(id)arg0 latLngs:(id)arg1 ;
-(id)initWithAttributes:(id)arg0 waypoints:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)vehicle;
-(void)_commonInit;
-(void)_loadRulesIfNecessary:(id)arg0 result:(id)arg1 ;
-(void)_populateRouteAttributes:(id)arg0 result:(id)arg1 ;
-(void)_resolveSelectedVehicle:(id)arg0 completion:(id)arg1 ;
-(void)buildRouteAttributes:(id)arg0 result:(id)arg1 ;
-(void)buildRouteAttributesForETAUpdateRequest:(id)arg0 queue:(id)arg1 result:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)virtualGarageDidUpdate:(id)arg0 ;


@end


#endif