// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARFRAMELUMINANCEMANAGER_H
#define ARFRAMELUMINANCEMANAGER_H


#import <Foundation/Foundation.h>


@interface ARFrameLuminanceManager : NSObject

@property NSUInteger currentFrameId; // ivar: _currentFrameId
@property CGFloat lastComputedLuminance; // ivar: _lastComputedLuminance


-(CGFloat)computeLuminanceFromPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)init;


@end


#endif