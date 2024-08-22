// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNLOGSOFTMAX_H
#define MPSCNNLOGSOFTMAX_H



#import "MPSCNNKernel.h"

@interface MPSCNNLogSoftMax : MPSCNNKernel



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif