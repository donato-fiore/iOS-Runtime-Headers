// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXPLICITZEROPADDING_H
#define EXPLICITZEROPADDING_H

@class NSString;
@protocol MPSNNPadding;


#import "MPSNNDefaultPadding.h"

@interface ExplicitZeroPadding : MPSNNDefaultPadding <MPSNNPadding>

 {
    NSUInteger _paddingLeft;
    NSUInteger _paddingRight;
    NSUInteger _paddingTop;
    NSUInteger _paddingBottom;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)paddingMethod;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 forKernel:(id)arg2 suggestedDescriptor:(id)arg3 ;
-(id)initWithPaddingLeft:(NSUInteger)arg0 paddingRight:(NSUInteger)arg1 paddingTop:(NSUInteger)arg2 paddingBottom:(NSUInteger)arg3 ;


@end


#endif