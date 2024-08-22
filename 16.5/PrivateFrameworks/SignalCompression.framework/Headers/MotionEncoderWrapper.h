// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOTIONENCODERWRAPPER_H
#define MOTIONENCODERWRAPPER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MotionEncoderWrapper : NSObject {
    int _componentsPerAttribute;
    int _attributeCount;
    int _intraFramePeriod;
    int _frameCount;
    *void encoder;
    NSUInteger encParametersLength;
    NSUInteger estimatedEncodedFrameSizeInBytes;
    NSData *_encoderParamsData;
    vector<unsigned char, std::allocator<unsigned char>> _bitstream;
}




-(id)encodeFrameInternal:(*int)arg0 type:(*NSUInteger)arg1 encodeError:(*NSUInteger)arg2 ;
-(id)getEncoderParams;
-(id)initWithAttributeCount:(unsigned int)arg0 componentCount:(unsigned int)arg1 quantization:(unsigned int)arg2 ;
-(void)dealloc;


@end


#endif