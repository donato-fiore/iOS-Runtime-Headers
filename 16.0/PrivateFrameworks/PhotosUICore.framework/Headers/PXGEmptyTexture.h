// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGEMPTYTEXTURE_H
#define PXGEMPTYTEXTURE_H



#import "PXGBaseTexture.h"

@interface PXGEmptyTexture : PXGBaseTexture



-(BOOL)isOpaque;
-(NSInteger)estimatedByteSize;
-(int)presentationType;
-(struct CGImage *)imageRepresentation;
-(struct CGSize )pixelSize;


@end


#endif