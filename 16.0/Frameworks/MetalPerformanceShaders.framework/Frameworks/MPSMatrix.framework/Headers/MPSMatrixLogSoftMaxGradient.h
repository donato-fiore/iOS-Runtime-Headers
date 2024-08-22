// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSMATRIXLOGSOFTMAXGRADIENT_H
#define MPSMATRIXLOGSOFTMAXGRADIENT_H



#import "MPSMatrixSoftMaxGradient.h"

@interface MPSMatrixLogSoftMaxGradient : MPSMatrixSoftMaxGradient



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 gradientMatrix:(id)arg1 forwardOutputMatrix:(id)arg2 resultMatrix:(id)arg3 ;


@end


#endif