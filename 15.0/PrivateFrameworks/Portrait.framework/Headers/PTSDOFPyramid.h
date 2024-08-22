// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTSDOFPYRAMID_H
#define PTSDOFPYRAMID_H

@class NSArray;
@protocol MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>


@interface PTSDOFPyramid : NSObject {
    id<MTLComputePipelineState> *_updateLayer;
    id<MTLComputePipelineState> *_initSDOFPyramid;
    id<MTLTexture> *_foregroundPyramid;
    id<MTLTexture> *_backgroundPyramid;
    NSArray *_foregroundPyramidArray;
    NSArray *_backgroundPyramidArray;
    NSUInteger _maxLevels;
}




-(NSUInteger)maxLevels;
-(id)backgroundPyramid;
-(id)foregroundPyramid;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 width:(NSUInteger)arg3 height:(NSUInteger)arg4 maxLevels:(NSUInteger)arg5 pixelFormat:(NSUInteger)arg6 ;
-(int)updatePyramid:(id)arg0 color:(id)arg1 disparity:(id)arg2 focusDistance:(float)arg3 cocFactor:(float)arg4 ;


@end


#endif