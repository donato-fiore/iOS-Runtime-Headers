// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUBRUSHRASTERIZER_H
#define NUBRUSHRASTERIZER_H


#import <Foundation/Foundation.h>


@interface NUBrushRasterizer : NSObject



+(NSInteger)_rasterizeBrushStroke:(id)arg0 toROI:(struct ? )arg1 maskPtr:(char *)arg2 maskPtrRowBytes:(NSInteger)arg3 close:(BOOL)arg4 startIndex:(NSInteger)arg5 pressureMode:(NSInteger)arg6 ;
+(NSInteger)rasterizeBrushStroke:(id)arg0 atPoint:(struct ? )arg1 toBuffer:(id)arg2 close:(BOOL)arg3 startIndex:(NSInteger)arg4 ;
+(void)rasterizeBrushStroke:(id)arg0 atPoint:(struct ? )arg1 toBuffer:(id)arg2 ;


@end


#endif