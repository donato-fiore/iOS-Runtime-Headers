// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNLOCALCONTRASTNORMALIZATION_H
#define MPSCNNLOCALCONTRASTNORMALIZATION_H



#import "MPSCNNKernel.h"

@interface MPSCNNLocalContrastNormalization : MPSCNNKernel

@property (nonatomic) float alpha; // ivar: _alpha
@property (nonatomic) float beta; // ivar: _beta
@property (nonatomic) float delta; // ivar: _delta
@property (nonatomic) float p0; // ivar: _p0
@property (nonatomic) float pm; // ivar: _pm
@property (nonatomic) float ps; // ivar: _ps


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationImages:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif