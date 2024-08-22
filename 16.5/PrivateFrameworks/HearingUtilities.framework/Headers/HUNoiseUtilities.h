// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNOISEUTILITIES_H
#define HUNOISEUTILITIES_H


#import <Foundation/Foundation.h>


@interface HUNoiseUtilities : NSObject



+(CGFloat)attenuationFor298WithExposure:(CGFloat)arg0 andListeningState:(NSInteger)arg1 ;
+(CGFloat)attenuationFor515WithExposure:(CGFloat)arg0 andListeningState:(NSInteger)arg1 ;
+(CGFloat)attenuationFor698WithExposure:(CGFloat)arg0 andListeningState:(NSInteger)arg1 ;
+(CGFloat)attenuationForExposure:(CGFloat)arg0 deviceType:(NSInteger)arg1 andListeningState:(NSInteger)arg2 ;


@end


#endif