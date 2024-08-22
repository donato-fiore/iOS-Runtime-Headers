// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNWEIGHT_H
#define MPSCNNWEIGHT_H

@class MPSCNNConvolutionDescriptor, NSString;
@protocol MPSCNNConvolutionDataSource;

#import <Foundation/Foundation.h>


@interface MPSCNNWeight : NSObject <MPSCNNConvolutionDataSource>

 {
    MPSCNNConvolutionDescriptor *_desc;
    vector<float, std::allocator<float>> _weight;
    vector<float, std::allocator<float>> _bias;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*float)biasTerms;
-(*void)weights;
-(BOOL)load;
-(NSUInteger)biasSize;
-(NSUInteger)weightSize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)descriptor;
-(id)initWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 strideInPixelsX:(NSUInteger)arg4 strideInPixelsY:(NSUInteger)arg5 neuronType:(int)arg6 neuronA:(float)arg7 neuronB:(float)arg8 ;
-(id)label;
-(unsigned int)dataType;
-(void)checkpoint;
-(void)dealloc;
-(void)purge;


@end


#endif