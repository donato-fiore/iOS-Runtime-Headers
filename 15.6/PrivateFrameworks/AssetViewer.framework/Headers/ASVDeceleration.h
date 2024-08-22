// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASVDECELERATION_H
#define ASVDECELERATION_H


#import <Foundation/Foundation.h>


@interface ASVDeceleration : NSObject

@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (nonatomic) NSInteger frameCount; // ivar: _frameCount
@property (nonatomic) BOOL isDecelerating; // ivar: _isDecelerating
@property (nonatomic) float minEndDelta; // ivar: _minEndDelta
@property (nonatomic) CGFloat previousTime; // ivar: _previousTime
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) float velocity; // ivar: _velocity


-(float)decelerationDelta;
-(id)initWithVelocity:(float)arg0 minEndDelta:(float)arg1 ;


@end


#endif