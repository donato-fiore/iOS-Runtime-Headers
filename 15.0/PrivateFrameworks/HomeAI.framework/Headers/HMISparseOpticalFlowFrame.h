// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMISPARSEOPTICALFLOWFRAME_H
#define HMISPARSEOPTICALFLOWFRAME_H

@class HMFObject;



@interface HMISparseOpticalFlowFrame : HMFObject

@property (readonly) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly) ? time; // ivar: _time


-(id)description;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 atTime:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif