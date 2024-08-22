// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUNIASTRONOMYROTATIONMODEL_H
#define NUNIASTRONOMYROTATIONMODEL_H

@class CADisplayLink;
@protocol NUNIAstronomyRotationModelObserver, NUNIRotatable;

#import <Foundation/Foundation.h>


@interface NUNIAstronomyRotationModel : NSObject {
    CADisplayLink *_displayLink;
    NSInteger _state;
    CLLocationCoordinate2D _landingCoordinate;
    ? _accumulatedPushVector;
    float _effectivePushDeceleration;
    float _effectivePullAcceleration;
    CGFloat _pushStartTime;
    CGFloat _pullStartTime;
    CGFloat _previousDisplayLinkCallbackTime;
    BOOL _isPulling;
}


@property (readonly, nonatomic) *NUNIAstronomyInteractionSettings interactionSettings; // ivar: _interactionSettings
@property (weak, nonatomic) NSObject<NUNIAstronomyRotationModelObserver> *observer; // ivar: _observer
@property (nonatomic, getter=isPulling) BOOL pulling; // ivar: _pulling
@property (weak, nonatomic) NSObject<NUNIRotatable> *rotatable; // ivar: _rotatable


-(BOOL)isAtHomeCoordinate;
-(id)init;
-(void)_handleDisplayLink;
-(void)_update;
-(void)dealloc;
-(void)push;
-(void)stop;


@end


#endif