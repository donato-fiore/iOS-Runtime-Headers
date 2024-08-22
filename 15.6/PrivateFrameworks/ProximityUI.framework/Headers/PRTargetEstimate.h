// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRTARGETESTIMATE_H
#define PRTARGETESTIMATE_H


#import <Foundation/Foundation.h>


@interface PRTargetEstimate : NSObject {
    ? _vector;
}


@property (readonly, nonatomic) BOOL isVerticalResolved; // ivar: _isVerticalResolved
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) float uncertainty; // ivar: _uncertainty
@property ? vector;
@property (readonly, nonatomic) NSUInteger verticalState; // ivar: _verticalState
@property (readonly, nonatomic) float weight; // ivar: _weight


+(id)targetEstimateWithTime:(CGFloat)arg0 vector:(float)arg1 uncertainty:(float)arg2 weight:(BOOL)arg3 isResolved:(NSUInteger)arg4 verticalState;
-(id)initWithTime:(CGFloat)arg0 vector:(float)arg1 uncertainty:(float)arg2 weight:(BOOL)arg3 isResolved:(NSUInteger)arg4 verticalState;


@end


#endif