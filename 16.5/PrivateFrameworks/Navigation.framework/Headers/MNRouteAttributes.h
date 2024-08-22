// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNROUTEATTRIBUTES_H
#define MNROUTEATTRIBUTES_H

@class GEORouteAttributes, NSArray, VGVehicle, NSError, geo_isolater;
@protocol NSSecureCoding, NSCopying;



@interface MNRouteAttributes : GEORouteAttributes <NSSecureCoding, NSCopying>

 {
    NSArray *_latLngs;
    BOOL _forceUpdate;
    VGVehicle *_vehicle;
    NSError *_vgError;
    geo_isolater *_vehicleIsolator;
    NSArray *_lprRules;
    NSError *_lprError;
}


@property (nonatomic) BOOL hasResolvedRules; // ivar: _hasResolvedRules


+(BOOL)supportsSecureCoding;
+(void)_loadLPRRulesForWaypoints:(id)arg0 forceUpdate:(BOOL)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttributes:(id)arg0 latLngs:(id)arg1 ;
-(id)initWithAttributes:(id)arg0 waypoints:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)vehicle;
-(void)_commonInit;
-(void)_loadRulesIfNecessaryWithVehicle:(id)arg0 queue:(id)arg1 finishedHandler:(id)arg2 ;
-(void)_populateRouteAttributesWithVehicle:(id)arg0 finishedHandler:(id)arg1 ;
-(void)_resolveSelectedVehicle:(id)arg0 ;
-(void)buildRouteAttributes:(id)arg0 queue:(id)arg1 result:(id)arg2 ;
-(void)buildRouteAttributes:(id)arg0 result:(id)arg1 ;
-(void)buildRouteAttributesForETAUpdateRequest:(id)arg0 queue:(id)arg1 result:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif