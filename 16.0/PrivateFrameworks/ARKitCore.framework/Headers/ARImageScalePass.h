// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARIMAGESCALEPASS_H
#define ARIMAGESCALEPASS_H


#import <Foundation/Foundation.h>


@interface ARImageScalePass : NSObject {
    *OpaqueVTPixelTransferSession _vtPixelTransferSession;
    *__CVPixelBufferPool _scaledPixelBufferPool;
}


@property (readonly, nonatomic) unsigned int conversionPixelFormatType; // ivar: _conversionPixelFormatType
@property (readonly, nonatomic) CGSize scaledSize; // ivar: _scaledSize


-(id)initWithDescription:(id)arg0 ;
-(struct __CVBuffer *)scalePixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif