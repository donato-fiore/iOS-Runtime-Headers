// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPANGESTUREINCREMENT_H
#define AVPANGESTUREINCREMENT_H


#import <Foundation/Foundation.h>


@interface AVPanGestureIncrement : NSObject

@property (readonly, nonatomic) BOOL hasMultipleTouches; // ivar: _hasMultipleTouches
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) CGPoint translation; // ivar: _translation
@property (readonly, nonatomic) CGPoint velocity; // ivar: _velocity


+(id)gestureIncrementWithTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 timestamp:(CGFloat)arg2 hasMultipleTouches:(BOOL)arg3 ;
-(id)debugDescription;


@end


#endif