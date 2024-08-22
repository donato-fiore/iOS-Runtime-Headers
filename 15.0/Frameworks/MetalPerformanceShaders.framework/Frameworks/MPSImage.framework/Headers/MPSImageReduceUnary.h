// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSIMAGEREDUCEUNARY_H
#define MPSIMAGEREDUCEUNARY_H



#import "MPSUnaryImageKernel.h"

@interface MPSImageReduceUnary : MPSUnaryImageKernel {
    int _reduceOp;
}


@property (nonatomic) ? clipRectSource; // ivar: _clipRectSource


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 reduceOperation:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif