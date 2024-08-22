// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSMATRIXFINDTOPK_H
#define MPSMATRIXFINDTOPK_H



#import "MPSMatrixUnaryKernel.h"

@interface MPSMatrixFindTopK : MPSMatrixUnaryKernel

@property (nonatomic) BOOL alongColumns; // ivar: _alongColumns
@property (nonatomic) NSUInteger indexOffset; // ivar: _indexOffset
@property (nonatomic) NSUInteger numberOfTopKValues; // ivar: _numberOfTopKValues
@property (nonatomic) NSUInteger sourceColumns; // ivar: _sourceColumns
@property (nonatomic) NSUInteger sourceRows; // ivar: _sourceRows


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 numberOfTopKValues:(NSUInteger)arg1 ;
-(void)encodeToCommandBuffer:(id)arg0 inputMatrix:(id)arg1 resultIndexMatrix:(id)arg2 resultValueMatrix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif