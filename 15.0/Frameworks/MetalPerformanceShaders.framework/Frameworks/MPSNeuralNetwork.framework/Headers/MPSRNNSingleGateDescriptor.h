// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSRNNSINGLEGATEDESCRIPTOR_H
#define MPSRNNSINGLEGATEDESCRIPTOR_H

@protocol MPSCNNConvolutionDataSource;


#import "MPSRNNDescriptor.h"

@interface MPSRNNSingleGateDescriptor : MPSRNNDescriptor

@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *inputWeights; // ivar: _inputWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *recurrentWeights; // ivar: _recurrentWeights


+(id)createRNNSingleGateDescriptorWithInputFeatureChannels:(NSUInteger)arg0 outputFeatureChannels:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithInputFeatureChannels:(NSUInteger)arg0 outputFeatureChannels:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif