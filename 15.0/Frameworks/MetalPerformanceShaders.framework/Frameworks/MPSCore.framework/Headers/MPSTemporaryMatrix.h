// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTEMPORARYMATRIX_H
#define MPSTEMPORARYMATRIX_H



#import "MPSMatrix.h"

@interface MPSTemporaryMatrix : MPSMatrix

@property (nonatomic) NSUInteger readCount; // ivar: _readCount


+(id)temporaryMatrixWithCommandBuffer:(id)arg0 matrixDescriptor:(id)arg1 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg0 matrixDescriptorList:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg0 matrixDescriptor:(id)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;


@end


#endif