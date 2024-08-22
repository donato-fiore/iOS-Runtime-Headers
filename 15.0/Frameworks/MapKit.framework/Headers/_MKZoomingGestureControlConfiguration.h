// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKZOOMINGGESTURECONTROLCONFIGURATION_H
#define _MKZOOMINGGESTURECONTROLCONFIGURATION_H

@class NSString;
@protocol MKZoomingGestureControlConfiguration, NSCopying;

#import <Foundation/Foundation.h>


@interface _MKZoomingGestureControlConfiguration : NSObject <MKZoomingGestureControlConfiguration, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat decelerationThreshold; // ivar: _decelerationThreshold
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maximumZoomInVelocity; // ivar: _maximumZoomInVelocity
@property (readonly, nonatomic) CGFloat maximumZoomOutVelocity; // ivar: _maximumZoomOutVelocity
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat zoomDraggingResistance; // ivar: _zoomDraggingResistance
@property (readonly, nonatomic) CGFloat zoomOutFrictionScale; // ivar: _zoomOutFrictionScale


+(id)configurationForCarPlay;
+(id)configurationForDigitalCrown;
+(id)defaultConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDecelerationThreshold:(CGFloat)arg0 maximumZoomInVelocity:(CGFloat)arg1 maximumZoomOutVelocity:(CGFloat)arg2 zoomOutFrictionScale:(CGFloat)arg3 ;
-(id)initWithDecelerationThreshold:(CGFloat)arg0 maximumZoomInVelocity:(CGFloat)arg1 maximumZoomOutVelocity:(CGFloat)arg2 zoomOutFrictionScale:(CGFloat)arg3 zoomDraggingResistance:(CGFloat)arg4 ;


@end


#endif