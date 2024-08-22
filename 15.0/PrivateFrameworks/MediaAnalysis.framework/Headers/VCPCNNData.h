// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNDATA_H
#define VCPCNNDATA_H

@class MPSImage, NSMutableArray;

#import <Foundation/Foundation.h>

#import "VCPCNNMetalContext.h"

@interface VCPCNNData : NSObject

@property (weak) VCPCNNMetalContext *context; // ivar: _context
@property *float data; // ivar: _data
@property BOOL isInputOutput; // ivar: _isInputOutput
@property (retain) MPSImage *mpsImg; // ivar: _mpsImg
@property (retain) NSMutableArray *size; // ivar: _size


+(Class)cnnDataClass;
+(id)cnnData;
+(id)cnnDataWithGPUContext:(id)arg0 ;
+(id)cnnDataWithPlane:(int)arg0 height:(int)arg1 width:(int)arg2 context:(id)arg3 ;
-(id)init;
-(id)initWithGPUContext:(id)arg0 ;
-(id)initWithParameters:(int)arg0 height:(int)arg1 width:(int)arg2 context:(id)arg3 ;
-(int)allocBuffers:(BOOL)arg0 ;
-(int)bufferAllocCPU;
-(int)convertCPUData2GPU;
-(int)convertGPUData2CPU;
-(int)copyImage:(struct __CVBuffer *)arg0 withChunk:(int)arg1 ;
-(int)normalization;
-(int)randInit;
-(int)readFromDisk:(struct __sFILE *)arg0 quantFactor:(short)arg1 ;
-(int)reallocGPUTemporalBuffers;
-(int)softmax;
-(void)dealloc;


@end


#endif