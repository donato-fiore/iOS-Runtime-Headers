// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLCGPUCONVOLUTIONTRANSPOSEPADDING_H
#define _MLCGPUCONVOLUTIONTRANSPOSEPADDING_H

@class NSString;
@protocol MPSNNPadding;

#import <Foundation/Foundation.h>


@interface _MLCGPUConvolutionTransposePadding : NSObject <MPSNNPadding>



@property (readonly, nonatomic) NSUInteger bottomAmount; // ivar: _bottomAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger leftAmount; // ivar: _leftAmount
@property (readonly, nonatomic) NSUInteger outputPaddingX; // ivar: _outputPaddingX
@property (readonly, nonatomic) NSUInteger outputPaddingY; // ivar: _outputPaddingY
@property (readonly, nonatomic) NSUInteger rightAmount; // ivar: _rightAmount
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger topAmount; // ivar: _topAmount


+(BOOL)supportsSecureCoding;
+(id)convolutionTransposeZeroPaddingWithTopAmount:(NSUInteger)arg0 bottomAmount:(NSUInteger)arg1 leftAmount:(NSUInteger)arg2 rightAmount:(NSUInteger)arg3 outputPaddingX:(NSUInteger)arg4 outputPaddingY:(NSUInteger)arg5 ;
-(NSUInteger)paddingMethod;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 forKernel:(id)arg2 suggestedDescriptor:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopAmount:(NSUInteger)arg0 bottomAmount:(NSUInteger)arg1 leftAmount:(NSUInteger)arg2 rightAmount:(NSUInteger)arg3 outputPaddingX:(NSUInteger)arg4 outputPaddingY:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif