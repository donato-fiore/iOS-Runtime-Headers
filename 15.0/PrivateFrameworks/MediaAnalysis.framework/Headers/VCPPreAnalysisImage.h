// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPREANALYSISIMAGE_H
#define VCPPREANALYSISIMAGE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCPPreAnalysisImage : NSObject {
    NSMutableDictionary *_scaledPixelBuffers;
    CF<__CVBuffer *> _sourcePixelBuffer;
}


@property (readonly, nonatomic) *__CVBuffer sourcePixelBuffer;


-(?)pixelBuffer:(?)arg0 widthheight;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 ;
-(int)preWarmWidth:(NSUInteger)arg0 andHeight:(NSUInteger)arg1 ;


@end


#endif