// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSMATRIXCOPY_H
#define MPSMATRIXCOPY_H

@class MPSKernel;



@interface MPSMatrixCopy : MPSKernel

@property (readonly, nonatomic) NSUInteger copyColumns; // ivar: _copyColumns
@property (readonly, nonatomic) NSUInteger copyRows; // ivar: _copyRows
@property (readonly, nonatomic) BOOL destinationsAreTransposed; // ivar: _destinationsAreTransposed
@property (readonly, nonatomic) BOOL sourcesAreTransposed; // ivar: _sourcesAreTransposed


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 copyRows:(NSUInteger)arg1 copyColumns:(NSUInteger)arg2 sourcesAreTransposed:(BOOL)arg3 destinationsAreTransposed:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 copyDescriptor:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 copyDescriptor:(id)arg1 rowPermuteIndices:(id)arg2 rowPermuteOffset:(NSUInteger)arg3 columnPermuteIndices:(id)arg4 columnPermuteOffset:(NSUInteger)arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 encoder:(id)arg1 copyDescriptor:(id)arg2 rowPermuteIndices:(id)arg3 rowPermuteOffset:(NSUInteger)arg4 columnPermuteIndices:(id)arg5 columnPermuteOffset:(NSUInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif