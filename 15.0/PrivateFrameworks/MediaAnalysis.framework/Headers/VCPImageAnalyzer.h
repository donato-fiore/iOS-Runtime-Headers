// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPIMAGEANALYZER_H
#define VCPIMAGEANALYZER_H


#import <Foundation/Foundation.h>


@interface VCPImageAnalyzer : NSObject



-(int)aggregateTileResults:(id)arg0 tileRect:(struct CGRect )arg1 imageSize:(struct CGSize )arg2 landscape:(BOOL)arg3 results:(id)arg4 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;
-(int)analyzePixelBufferInTiles:(struct __CVBuffer *)arg0 results:(id)arg1 cancel:(id)arg2 ;
-(int)calculateTextureness:(*float)arg0 height:(int)arg1 width:(int)arg2 sdof:(BOOL)arg3 result:(char *)arg4 ;
-(int)processTile:(struct __CVBuffer *)arg0 results:(id)arg1 cancel:(id)arg2 ;


@end


#endif