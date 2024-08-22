// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRPOSE_H
#define PRPOSE_H


#import <Foundation/Foundation.h>


@interface PRPose : NSObject

@property (readonly, nonatomic) ? pose; // ivar: _pose
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(id)poseWithTime:(CGFloat)arg0 pose:(struct ? )arg1 ;
-(id)initWithTime:(CGFloat)arg0 pose:(struct ? )arg1 ;


@end


#endif