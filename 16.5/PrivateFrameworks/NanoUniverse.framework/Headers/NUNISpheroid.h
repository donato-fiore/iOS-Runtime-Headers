// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUNISPHEROID_H
#define NUNISPHEROID_H

@class NSString;
@protocol NUNIAnimatable, NUNIRotatable;

#import <Foundation/Foundation.h>

#import "NUNISpheroid.h"
#import "NUNIScene.h"

@interface NUNISpheroid : NSObject <NUNIAnimatable, NUNIRotatable>

 {
    ? _light;
    ? _colorize;
    ? _position;
}


@property (nonatomic) float angle; // ivar: _angle
@property (readonly, nonatomic) float blend; // ivar: _blend
@property (nonatomic) CLLocationCoordinate2D centerCoordinate; // ivar: _centerCoordinate
@property (nonatomic) float cloudOpacity; // ivar: _cloudOpacity
@property ? colorize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float distance; // ivar: _distance
@property (nonatomic) float distanceScale; // ivar: _distanceScale
@property (nonatomic, getter=isFacing) BOOL facing; // ivar: _facing
@property (readonly) NSUInteger hash;
@property (nonatomic) CLLocationCoordinate2D homeCoordinate; // ivar: _homeCoordinate
@property ? light;
@property (nonatomic) float opacity; // ivar: _opacity
@property (readonly, nonatomic) NUNISpheroid *parent; // ivar: _parent
@property ? position;
@property (readonly, nonatomic) NSUInteger programType; // ivar: _programType
@property (readonly, nonatomic) float radius; // ivar: _radius
@property (nonatomic) float radiusScale; // ivar: _radiusScale
@property (nonatomic) float rotation; // ivar: _rotation
@property (readonly, weak, nonatomic) NUNIScene *scene; // ivar: _scene
@property (nonatomic) NSUInteger spriteType; // ivar: _spriteType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(id)animatedFloatForKey;
-(id)initWithScene:(id)arg0 parent:(id)arg1 type:(NSUInteger)arg2 ;
-(void)date:(id)arg0 toCameraPositiontoCameraTarget;
-(void)date:(id)arg0 toRotation:(*float)arg1 toAngle:(*float)arg2 toLight:(**float)arg3 toDistance:(*float)arg4 toRadius;
-(void)updateSunLocationForDate:(id)arg0 ;


@end


#endif