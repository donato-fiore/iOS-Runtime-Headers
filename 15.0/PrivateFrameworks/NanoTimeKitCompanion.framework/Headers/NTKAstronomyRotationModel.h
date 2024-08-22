// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKASTRONOMYROTATIONMODEL_H
#define NTKASTRONOMYROTATIONMODEL_H

@class CADisplayLink;
@protocol NTKAstronomyRotationModelObserver, NUNIRotatable;

#import <Foundation/Foundation.h>


@interface NTKAstronomyRotationModel : NSObject {
    CADisplayLink *_displayLink;
    NSInteger _state;
    CLLocationCoordinate2D _landingCoordinate;
    ? _accumulatedPushVector;
    float _effectivePushDeceleration;
    float _effectivePullAcceleration;
    CGFloat _pushStartTime;
    CGFloat _pullStartTime;
    CGFloat _previousDisplayLinkCallbackTime;
}


@property (readonly, nonatomic) *NTKAstronomyInteractionSettings interactionSettings; // ivar: _interactionSettings
@property (weak, nonatomic) NSObject<NTKAstronomyRotationModelObserver> *observer; // ivar: _observer
@property (nonatomic, getter=isPulling) BOOL pulling; // ivar: _isPulling
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