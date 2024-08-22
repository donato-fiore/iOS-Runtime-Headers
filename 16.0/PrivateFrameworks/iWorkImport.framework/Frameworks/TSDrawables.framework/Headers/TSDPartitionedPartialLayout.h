// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDPARTITIONEDPARTIALLAYOUT_H
#define TSDPARTITIONEDPARTIALLAYOUT_H



#import "TSDLayout.h"
#import "TSDDefaultPartitioner.h"

@interface TSDPartitionedPartialLayout : TSDLayout

@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) BOOL p_isLayoutRTL; // ivar: _isLayoutRTL
@property (readonly, nonatomic) TSDDefaultPartitioner *partitioner; // ivar: _partitioner


-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(id)initWithInfo:(id)arg0 bounds:(struct CGRect )arg1 partitioner:(id)arg2 isLayoutRTL:(BOOL)arg3 ;
-(void)processChanges:(id)arg0 ;
-(void)updateChildrenFromInfo;


@end


#endif