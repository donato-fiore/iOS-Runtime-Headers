// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOSAMPLERATECONVERTER_H
#define CSAUDIOSAMPLERATECONVERTER_H


#import <Foundation/Foundation.h>


@interface CSAudioSampleRateConverter : NSObject {
    *OpaqueAudioConverter _sampleRateConverter;
    float _outBufferScaleFactor;
    AudioStreamBasicDescription _inASBD;
    AudioStreamBasicDescription _outASBD;
}




+(id)downsampler;
+(id)upsampler;
-(id)convertSampleRateOfBuffer:(id)arg0 ;
-(id)initWithInASBD:(struct AudioStreamBasicDescription )arg0 outASBD:(struct AudioStreamBasicDescription )arg1 ;
-(struct OpaqueAudioConverter *)_createSampleRateConverterWithInASBD:(struct AudioStreamBasicDescription )arg0 outASBD:(struct AudioStreamBasicDescription )arg1 ;
-(void)dealloc;


@end


#endif