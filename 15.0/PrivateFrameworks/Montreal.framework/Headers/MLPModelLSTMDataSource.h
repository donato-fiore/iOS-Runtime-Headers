// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLPMODELLSTMDATASOURCE_H
#define MLPMODELLSTMDATASOURCE_H

@class MPSCNNConvolutionDescriptor, NSString;
@protocol MPSCNNConvolutionDataSource;

#import <Foundation/Foundation.h>


@interface MLPModelLSTMDataSource : NSObject <MPSCNNConvolutionDataSource>

 {
    MPSCNNConvolutionDescriptor *_desc;
    vector<float, std::allocator<float>> _weight;
    vector<float, std::allocator<float>> _bias;
}


@property NSUInteger columns; // ivar: _columns
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger lstmInputSize; // ivar: _lstmInputSize
@property NSUInteger lstmOutputSize; // ivar: _lstmOutputSize
@property NSUInteger rows; // ivar: _rows
@property (readonly) Class superclass;
@property NSUInteger weightID; // ivar: _weightID


-(*float)biasTerms;
-(*void)weights;
-(BOOL)load;
-(NSUInteger)bias_size;
-(NSUInteger)weight_size;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)descriptor;
-(id)initWithColumns:(NSUInteger)arg0 rows:(NSUInteger)arg1 lstmInputSize:(NSUInteger)arg2 lstmOutputSize:(NSUInteger)arg3 weightID:(NSUInteger)arg4 neuronType:(int)arg5 neuronA:(float)arg6 neuronB:(float)arg7 initialWeights_0:(*float)arg8 initialWeights_1:(*float)arg9 bias_0:(*float)arg10 bias_1:(*float)arg11 weightAttributes:(NSUInteger)arg12 deviceHandler:(id)arg13 ;
-(id)label;
-(unsigned int)dataType;
-(void)checkpoint;
-(void)initializeWeightsAndBiases:(id)arg0 ;
-(void)loadWithInitialWeights_0:(*float)arg0 initialWeights_1:(*float)arg1 bias_0:(*float)arg2 bias_1:(*float)arg3 weightAttributes:(NSUInteger)arg4 ;
-(void)purge;


@end


#endif