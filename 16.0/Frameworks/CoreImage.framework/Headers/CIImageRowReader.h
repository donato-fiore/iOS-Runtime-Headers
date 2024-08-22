// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIIMAGEROWREADER_H
#define CIIMAGEROWREADER_H

@protocol ImageRowReading;

#import <Foundation/Foundation.h>


@interface CIImageRowReader : NSObject <ImageRowReading>

 {
    NSUInteger height;
    NSUInteger width;
    NSUInteger bpr;
    *void data;
    short red;
    short green;
    short blue;
    short alpha;
    *CGColorSpace cs;
}




+(id)forImage:(id)arg0 downscaleToMax:(unsigned int)arg1 colorspace:(struct CGColorSpace *)arg2 usingContext:(id)arg3 ;
+(id)forImage:(id)arg0 usingContext:(id)arg1 ;
+(id)forImage:(id)arg0 usingContext:(id)arg1 colorspace:(struct CGColorSpace *)arg2 ;
+(id)fromImage:(struct CGImage *)arg0 ;
+(id)fromImageFile:(id)arg0 ;
+(id)withDictionary:(id)arg0 ;
-(NSUInteger)height;
-(NSUInteger)width;
-(char *)rowAtIndex:(unsigned int)arg0 ;
-(id)init;
-(short)alpha;
-(short)blue;
-(short)green;
-(short)red;
-(unsigned int)bytesPerPixel;
-(void)_dumpImage:(id)arg0 colorspace:(struct CGColorSpace *)arg1 ;
-(void)dealloc;
-(void)dumpImage:(id)arg0 ;
-(void)dumpImageAsDeviceRGB:(id)arg0 ;
-(void)dumpImageAsDict:(id)arg0 ;


@end


#endif