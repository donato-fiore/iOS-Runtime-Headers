// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDPARTITIONEDPARTIALLAYOUT_H
#define TSDPARTITIONEDPARTIALLAYOUT_H



#import "TSDLayout.h"
#import "TSDDefaultPartitioner.h"

@interface TSDPartitionedPartialLayout : TSDLayout

@property (readonly, nonatomic) CGRect bounds; // ivar: mBounds
@property (readonly, nonatomic) TSDDefaultPartitioner *partitioner; // ivar: mPartitioner


-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(id)initWithInfo:(id)arg0 bounds:(struct CGRect )arg1 partitioner:(id)arg2 ;


@end


#endif