// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSWEIGHTSWRAPPER_H
#define MPSWEIGHTSWRAPPER_H

@class NSString;
@protocol MPSCNNConvolutionDataSource, MPSCNNBatchNormalizationDataSource;

#import <Foundation/Foundation.h>

#import "MPSCNNConvolutionDescriptor.h"

@interface MPSWeightsWrapper : NSObject <MPSCNNConvolutionDataSource>

 {
    id<MPSCNNBatchNormalizationDataSource> *_dataSource;
    id<MPSCNNConvolutionDataSource> *_source;
    NeuronInfo _info;
    MPSCNNConvolutionDescriptor *_descriptor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*float)biasTerms;
-(*float)lookupTableForUInt8Kernel;
-(*id)rangesForUInt8Kernel;
-(*void)weights;
-(BOOL)load;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptor;
-(id)initWithSource:(id)arg0 neuronInfo:(struct NeuronInfo )arg1 batchNorm:(id)arg2 ;
-(id)label;
-(unsigned int)dataType;
-(void)dealloc;
-(void)purge;


@end


#endif