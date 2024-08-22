// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNREDUCEUNARY_H
#define MPSNNREDUCEUNARY_H



#import "MPSCNNKernel.h"

@interface MPSNNReduceUnary : MPSCNNKernel {
    int _reduceOp;
    float _weightValue;
}


@property (nonatomic) ? clipRectSource; // ivar: _clipRectSource
@property (nonatomic) ? offset;


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 reduceOperation:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setWeightValue:(float)arg0 ;


@end


#endif