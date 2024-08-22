// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POSTPROCESSORFACTORY_H
#define POSTPROCESSORFACTORY_H


#import <Foundation/Foundation.h>


@interface PostProcessorFactory : NSObject



+(id)defaultFactory;
-(id)postProcessorFromReader:(id)arg0 originalPixelFormat:(unsigned int)arg1 encodedFormat:(unsigned int)arg2 encoderType:(id)arg3 streamId:(id)arg4 ;


@end


#endif