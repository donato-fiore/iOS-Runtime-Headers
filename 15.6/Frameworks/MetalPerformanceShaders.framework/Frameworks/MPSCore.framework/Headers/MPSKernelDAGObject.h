// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSKERNELDAGOBJECT_H
#define MPSKERNELDAGOBJECT_H

@class NSArray, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface MPSKernelDAGObject : NSObject {
    shared_ptr<MPSKernelDAG> _kernelDAGSharedPtr;
    NSArray *_stitchedFunctions;
    NSMutableDictionary *_functions;
    NSMutableArray *_functionNames;
    BOOL _keepSubDAGArray;
    ? _sha256;
}


@property (readonly, nonatomic) *void finalOp; // ivar: _finalOp
@property (readonly, nonatomic) *void graph; // ivar: _kernelDAG
@property ? hash;


-(*void)inputTensorAtIndex:(NSUInteger)arg0 ;
-(*void)outputTensorAtIndex:(NSUInteger)arg0 ;
-(id)getStitchedFunctions:(id)arg0 ;
-(id)initWithKernelDAG:(*void)arg0 finalOp:(*void)arg1 ;


@end


#endif