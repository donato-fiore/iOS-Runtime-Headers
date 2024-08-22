// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FXBITMAPIMAGE_H
#define FXBITMAPIMAGE_H


#import <Foundation/Foundation.h>


@interface FxBitmapImage : NSObject {
    *FxBitmapImagePriv _priv;
}




+(id)bitmapWithData:(id)arg0 bytesPerRow:(NSUInteger)arg1 size:(struct CGSize )arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 ;
+(id)bitmapWithSize:(struct CGSize )arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 ;
-(*void)bytes;
-(NSUInteger)bytesPerRow;
-(id)data;
-(id)initWithData:(id)arg0 bytesPerRow:(NSUInteger)arg1 size:(struct CGSize )arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 ;
-(int)pixelFormat;
-(struct CGColorSpace *)colorSpace;
-(struct CGContext *)cgContext;
-(struct CGImage *)cgImage;
-(struct CGSize )size;
-(void)dealloc;


@end


#endif