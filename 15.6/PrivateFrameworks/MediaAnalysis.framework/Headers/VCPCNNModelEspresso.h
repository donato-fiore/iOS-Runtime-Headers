// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNMODELESPRESSO_H
#define VCPCNNMODELESPRESSO_H

@class NSURL, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "VCPCNNEspressoContext.h"

@interface VCPCNNModelEspresso : NSObject {
    ? _net;
    *void _plan;
    NSURL *_netFileUrl;
    NSArray *_inputNames;
    NSArray *_outputNames;
    VCPCNNEspressoContext *_context;
    ? _inputBlobs;
    ? _outputBlobs;
}


@property (nonatomic) ? inputBlob; // ivar: _inputBlob
@property ? inputBlobs;
@property (nonatomic) ? outputBlob; // ivar: _outputBlob
@property ? outputBlobs;
@property (readonly, nonatomic) NSString *resConfig; // ivar: _resConfig


-(id)initWithParameters:(id)arg0 inputNames:(id)arg1 outputNames:(id)arg2 properties:(id)arg3 ;
-(int)espressoForward:(*float)arg0 ;
-(int)espressoForwardInputs:(struct vector<float *, std::allocator<float *>> )arg0 ;
-(int)prepareModelInput:(*float)arg0 ;
-(int)prepareModelInputs:(struct vector<float *, std::allocator<float *>> )arg0 ;
-(int)prepareModelWithConfig:(id)arg0 ;
-(void)normalization:(*float)arg0 ;


@end


#endif