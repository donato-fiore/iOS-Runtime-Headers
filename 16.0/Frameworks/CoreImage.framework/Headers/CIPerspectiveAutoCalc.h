// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPERSPECTIVEAUTOCALC_H
#define CIPERSPECTIVEAUTOCALC_H


#import <Foundation/Foundation.h>

#import "CIImage.h"
#import "CIContext.h"

@interface CIPerspectiveAutoCalc : NSObject {
    CIImage *img;
    CIContext *ctx;
    ? config;
}


@property (readonly) CGFloat confidence; // ivar: confidence
@property (readonly) CIImage *debugImage; // ivar: debugImage
@property BOOL generateDebugImage; // ivar: generateDebugImage
@property (readonly) CGFloat pitch; // ivar: pitch
@property (readonly) NSInteger pitchFailureReason; // ivar: pitchFailureReason
@property (readonly) CGFloat roll; // ivar: roll
@property (readonly) CGFloat yaw; // ivar: yaw
@property (readonly) NSInteger yawFailureReason; // ivar: yawFailureReason


-(BOOL)compute;
-(id)initWithContext:(id)arg0 image:(id)arg1 config:(struct ? *)arg2 ;
-(void)dealloc;


@end


#endif