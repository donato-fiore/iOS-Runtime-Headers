// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARCOACHINGTRANSFORMATIONS_H
#define ARCOACHINGTRANSFORMATIONS_H


#import <Foundation/Foundation.h>


@interface ARCoachingTransformations : NSObject



+(float)degreesToRadians:(float)arg0 ;
+(struct ? )fromMatrix:(struct ? )arg0 ;
+(struct ? )lookAtcenterup;
+(struct ? )ortho2d:(float)arg0 right:(float)arg1 bottom:(float)arg2 top:(float)arg3 near:(float)arg4 far:(float)arg5 ;
+(struct ? )perspective_fov:(float)arg0 aspect:(float)arg1 near:(float)arg2 far:(float)arg3 ;
+(struct ? )rotate:(float)arg0 axis;
+(struct ? )scale;
+(struct ? )translate;


@end


#endif