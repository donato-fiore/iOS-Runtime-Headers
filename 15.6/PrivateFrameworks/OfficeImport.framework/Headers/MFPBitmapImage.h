// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPBITMAPIMAGE_H
#define MFPBITMAPIMAGE_H

@class NSData;


#import "MFPImage.h"
#import "OITSUImage.h"

@interface MFPBitmapImage : MFPImage {
    NSData *mBitmapData;
    OITSUImage *mPhoneBitmapImage;
    CGSize mPixelSize;
    CGSize mPointSize;
}




-(id)initWithBitmapData:(id)arg0 ;
-(id)phoneImage;
-(struct CGSize )pixelSize;
-(struct CGSize )pointSize;
-(void)drawInRect:(struct CGRect )arg0 fromRect:(struct CGRect )arg1 unit:(int)arg2 effect:(id)arg3 ;


@end


#endif