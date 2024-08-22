// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNNTENSORFLOWPOOLINGPADDING_H
#define MPSNNTENSORFLOWPOOLINGPADDING_H

@class NSString;
@protocol MPSNNPadding;


#import "MPSNNDefaultPadding.h"

@interface MPSNNTensorFlowPoolingPadding : MPSNNDefaultPadding <MPSNNPadding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 forKernel:(id)arg2 suggestedDescriptor:(id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)label;


@end


#endif