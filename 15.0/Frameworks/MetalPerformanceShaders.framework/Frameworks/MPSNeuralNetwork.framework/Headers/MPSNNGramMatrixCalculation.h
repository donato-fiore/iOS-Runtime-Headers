// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNGRAMMATRIXCALCULATION_H
#define MPSNNGRAMMATRIXCALCULATION_H

@protocol MPSNNGramMatrixCallback;


#import "MPSCNNKernel.h"

@interface MPSNNGramMatrixCalculation : MPSCNNKernel {
    id<MPSNNGramMatrixCallback> *_propertyCallback;
    MPSCNNGramFilters_s _filters;
}


@property (nonatomic) float alpha; // ivar: _alpha


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 alpha:(float)arg1 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif