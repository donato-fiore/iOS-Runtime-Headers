// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSMATRIXLOGSOFTMAX_H
#define MPSMATRIXLOGSOFTMAX_H



#import "MPSMatrixSoftMax.h"

@interface MPSMatrixLogSoftMax : MPSMatrixSoftMax



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 inputMatrix:(id)arg1 resultMatrix:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif