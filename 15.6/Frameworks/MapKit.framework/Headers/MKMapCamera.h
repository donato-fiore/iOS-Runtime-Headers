// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMAPCAMERA_H
#define MKMAPCAMERA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MKMapView.h"

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying>

 {
    MKMapView *_mapView;
    BOOL _pitchAdjustsAltitude;
    BOOL _needsStateUpdate;
}


@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (nonatomic) CLLocationCoordinate2D centerCoordinate; // ivar: _centerCoordinate
@property (nonatomic) CGFloat centerCoordinateDistance;
@property (nonatomic) CGFloat heading; // ivar: _heading
@property (nonatomic) CGFloat pitch;
@property (nonatomic, getter=_precisePitch, setter=_setPrecisePitch:) CGFloat precisePitch; // ivar: _pitch


+(BOOL)supportsSecureCoding;
+(id)_cameraLookingAtGEOMapRect:(struct ? *)arg0 aspectRatio:(float)arg1 ;
+(id)_cameraLookingAtMapRect:(struct ? )arg0 forViewSize:(struct CGSize )arg1 ;
+(id)camera;
+(id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D )arg0 fromDistance:(CGFloat)arg1 pitch:(CGFloat)arg2 heading:(CGFloat)arg3 ;
+(id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D )arg0 fromEyeCoordinate:(struct CLLocationCoordinate2D )arg1 eyeAltitude:(CGFloat)arg2 ;
-(BOOL)_validate;
-(BOOL)isEqual:(id)arg0 ;
-(id)_mapView;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct ? )_enclosingGEOMapRectForAspectRatio:(float)arg0 ;
-(void)_mapViewStateChanged;
-(void)_setMapView:(id)arg0 ;
-(void)_updateState;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif