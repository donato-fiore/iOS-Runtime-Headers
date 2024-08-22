// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKROTATIONFILTER_H
#define MKROTATIONFILTER_H

@class VKMapView;
@protocol MKRotationFilterDelegate;

#import <Foundation/Foundation.h>


@interface MKRotationFilter : NSObject {
    VKMapView *_mapLayer;
    CGFloat _gestureStartAngle;
    BOOL _userRotatedAwayFromVerticalYaw;
    CGFloat _previousVerticalYawOverride;
    BOOL _snappedAtStart;
    BOOL _snappingEnabled;
}


@property (nonatomic) CGFloat additionalSnappingAngle; // ivar: _additionalSnappingAngle
@property (weak, nonatomic) NSObject<MKRotationFilterDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isSnappedToNorth) BOOL snappedToNorth; // ivar: _snappedToNorth


-(BOOL)hasAdditionalSnappingAngle;
-(id)init;
-(id)initWithMapLayer:(id)arg0 ;
-(void)snapToNorthAnimated:(BOOL)arg0 forceTrueNorth:(BOOL)arg1 ;
-(void)startRotatingWithFocusPoint:(struct CGPoint )arg0 withSnapping:(BOOL)arg1 ;
-(void)stopRotatingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)updateRotationWithFocusPoint:(struct CGPoint )arg0 newValue:(CGFloat)arg1 ;
-(void)updateSnappedToNorth;


@end


#endif