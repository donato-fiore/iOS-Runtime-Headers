// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDRAWINGPOWERSAVINGCONTROLLER_H
#define PKDRAWINGPOWERSAVINGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PKDrawingPowerSavingController : NSObject {
    vector<double, std::allocator<double>> _movementDistanceHistoryBuffer;
    CGPoint _previousDrawingLocation;
    CGFloat _currentMovement;
    CGFloat _accumulatedMovement;
    CGFloat _previousRenderTimestamp;
    BOOL _valid;
    CGFloat _minimumMovementDistancePencil;
    CGFloat _minimumMovementDistanceFinger;
    CGFloat _minimumMovementDistanceTimeout;
    BOOL _isDrawingWithPencil;
    BOOL _isDrawingWithMarkerOrEraser;
}




-(id)init;


@end


#endif