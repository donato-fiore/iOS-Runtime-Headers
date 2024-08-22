// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXIMAGEDECODINGTOOLS_H
#define SXIMAGEDECODINGTOOLS_H


#import <Foundation/Foundation.h>


@interface SXImageDecodingTools : NSObject



+(id)sharedInstance;
-(BOOL)dataIsAnimatedImage:(id)arg0 ;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)decodeImage:(struct CGImage *)arg0 ;
-(id)imageFromData:(id)arg0 ;
-(id)imageFromData:(id)arg0 size:(struct CGSize )arg1 ;
-(id)loadAnimatedImageFromImageData:(id)arg0 size:(struct CGSize )arg1 ;
-(struct CGColorSpace *)P3ColorSpace;
-(struct CGColorSpace *)RGBColorSpace;
-(struct CGImage *)newImageByDecodingImage:(struct CGImage *)arg0 size:(struct CGSize )arg1 ;
-(struct __CFString *)contentTypeForImageData:(id)arg0 ;


@end


#endif