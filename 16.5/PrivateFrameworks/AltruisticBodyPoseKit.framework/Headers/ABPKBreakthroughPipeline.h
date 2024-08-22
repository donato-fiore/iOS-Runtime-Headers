// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKBREAKTHROUGHPIPELINE_H
#define ABPKBREAKTHROUGHPIPELINE_H


#import <Foundation/Foundation.h>

#import "ABPKGestureDetectionPipeline.h"

@interface ABPKBreakthroughPipeline : NSObject {
    ABPKGestureDetectionPipeline *_gestureDetection;
}




-(BOOL)overlayResult:(id)arg0 OnImage:(struct __CVBuffer *)arg1 andGenerateOverlayImage:(struct __CVBuffer *)arg2 ;
-(id)init;
-(id)initWithFrequency:(unsigned int)arg0 ;
-(int)runWithInput:(struct __CVBuffer *)arg0 atTimeStamp:(CGFloat)arg1 andOutput:(id)arg2 ;


@end


#endif