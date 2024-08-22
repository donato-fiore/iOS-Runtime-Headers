// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BPSORDEREDMERGEMANYINNER_H
#define _BPSORDEREDMERGEMANYINNER_H

@class BPSAbstractOrderedMerge;



@interface _BPSOrderedMergeManyInner : BPSAbstractOrderedMerge

@property (copy, nonatomic) id *comparator; // ivar: _comparator


-(NSInteger)compareFirst:(id)arg0 withSecond:(id)arg1 ;
-(id)initWithDownstream:(id)arg0 upstreamCount:(NSUInteger)arg1 comparator:(id)arg2 ;


@end


#endif