// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMTIMELAPSEJPEGREADER_H
#define CAMTIMELAPSEJPEGREADER_H


#import <Foundation/Foundation.h>


@interface CAMTimelapseJPEGReader : NSObject



+(BOOL)_hasExifRotation:(id)arg0 ;
+(id)_decodeOptionsWithMaxPixelSize:(NSInteger)arg0 applyTransform:(BOOL)arg1 useBGRA:(BOOL)arg2 ;
+(id)newDataFromFilePath:(id)arg0 ;
+(struct CGImage *)createCGImageFromData:(id)arg0 applyTransform:(BOOL)arg1 maxPixelSize:(NSInteger)arg2 useBGRA:(BOOL)arg3 ;
+(struct __CVBuffer *)createPixelBufferFromData:(id)arg0 applyTransform:(BOOL)arg1 maxPixelSize:(NSInteger)arg2 useBGRA:(BOOL)arg3 ;
+(struct __CVBuffer *)createPixelBufferFromData:(id)arg0 applyTransform:(BOOL)arg1 maxPixelSize:(NSInteger)arg2 useBGRA:(BOOL)arg3 cleanApertureSize:(struct CGSize )arg4 ;


@end


#endif