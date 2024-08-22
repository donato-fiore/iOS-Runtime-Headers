// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNBLOCK_H
#define VCPCNNBLOCK_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "VCPCNNMetalContext.h"
#import "VCPCNNData.h"

@interface VCPCNNBlock : NSObject {
    BOOL _executedOnGPU;
}


@property (readonly) VCPCNNMetalContext *context; // ivar: _context
@property BOOL generateOutput; // ivar: _generateOutput
@property (weak) VCPCNNData *input; // ivar: _input
@property (weak) NSMutableArray *inputSize; // ivar: _inputSize
@property (retain) VCPCNNData *output; // ivar: _output
@property (retain) NSMutableArray *outputSize; // ivar: _outputSize


-(BOOL)supportGPU;
-(BOOL)useGPU;
-(int)constructBlock:(id)arg0 context:(id)arg1 ;
-(int)forward;
-(int)readFromDisk:(struct __sFILE *)arg0 quantFactor:(short)arg1 ;


@end


#endif