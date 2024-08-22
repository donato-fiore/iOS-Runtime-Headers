// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CILUMAMAP_H
#define CILUMAMAP_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CILumaMap : CIFilter {
    CIImage *_tableImage;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(char *)lumaTable;
-(id)_kernel;
-(id)outputImage;
-(void)dealloc;
-(void)setDefaults;


@end


#endif