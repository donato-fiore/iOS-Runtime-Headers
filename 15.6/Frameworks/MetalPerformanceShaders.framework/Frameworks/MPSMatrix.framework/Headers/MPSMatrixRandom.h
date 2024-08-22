// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSMATRIXRANDOM_H
#define MPSMATRIXRANDOM_H

@class MPSKernel;



@interface MPSMatrixRandom : MPSKernel

@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSUInteger batchStart; // ivar: _batchStart
@property (readonly, nonatomic) unsigned int destinationDataType; // ivar: _destinationDataType
@property (readonly, nonatomic) NSUInteger distributionType; // ivar: _distributionType


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 destinationDataType:(unsigned int)arg1 distributionType:(NSUInteger)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationMatrix:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 destinationVector:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif