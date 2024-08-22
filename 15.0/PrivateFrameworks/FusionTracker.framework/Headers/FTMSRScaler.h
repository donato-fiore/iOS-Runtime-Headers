// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMSRSCALER_H
#define FTMSRSCALER_H

@protocol FTScaling;

#import <Foundation/Foundation.h>


@interface FTMSRScaler : NSObject <FTScaling>

 {
    unique_ptr<ik::PixelBufferResampler, std::default_delete<ik::PixelBufferResampler>> _resampler;
}




-(BOOL)scaleSourceBuffer:(struct __CVBuffer *)arg0 toDestinationBuffer:(struct __CVBuffer *)arg1 sourceROI:(struct CGRect )arg2 destinationROI:(struct CGRect )arg3 ;
-(BOOL)scaleSourceBuffer:(struct __CVBuffer *)arg0 toDestinationBuffer:(struct __CVBuffer *)arg1 sourceROI:(struct CGRect )arg2 destinationROI:(struct CGRect )arg3 mean;
-(id)init;


@end


#endif