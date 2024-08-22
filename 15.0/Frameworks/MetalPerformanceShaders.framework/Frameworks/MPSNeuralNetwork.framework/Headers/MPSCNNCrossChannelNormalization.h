// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNCROSSCHANNELNORMALIZATION_H
#define MPSCNNCROSSCHANNELNORMALIZATION_H



#import "MPSCNNKernel.h"

@interface MPSCNNCrossChannelNormalization : MPSCNNKernel

@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) float beta; // ivar: _beta
@property (nonatomic) float delta; // ivar: _delta
@property (readonly, nonatomic) NSUInteger kernelSize; // ivar: _kernelSize


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 kernelSize:(NSUInteger)arg1 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationImages:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif