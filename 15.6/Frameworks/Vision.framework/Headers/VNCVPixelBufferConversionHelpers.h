// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCVPIXELBUFFERCONVERSIONHELPERS_H
#define VNCVPIXELBUFFERCONVERSIONHELPERS_H


#import <Foundation/Foundation.h>


@interface VNCVPixelBufferConversionHelpers : NSObject



+(BOOL)isCVPixelBuffer:(struct __CVBuffer *)arg0 equalToCVPixelBuffer:(struct __CVBuffer *)arg1 ;
+(NSUInteger)computeHashForCVPixelBuffer:(struct __CVBuffer *)arg0 ;
+(id)createDictionaryRepresentationOfCVPixelBuffer:(struct __CVBuffer *)arg0 ;
+(id)dictionaryRepresentationClassesSet;
+(struct __CVBuffer *)createCVPixelBufferRefFromDictionaryRepresentation:(id)arg0 ;


@end


#endif