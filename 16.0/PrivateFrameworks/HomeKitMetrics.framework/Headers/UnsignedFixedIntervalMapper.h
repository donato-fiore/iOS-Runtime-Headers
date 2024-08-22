// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSIGNEDFIXEDINTERVALMAPPER_H
#define UNSIGNEDFIXEDINTERVALMAPPER_H

@class NSArray;


#import "HMMIntervalMapper.h"

@interface UnsignedFixedIntervalMapper : HMMIntervalMapper

@property (readonly) id *comparisonBlock; // ivar: _comparisonBlock
@property (readonly) id *creationBlock; // ivar: _creationBlock
@property (readonly) NSArray *intervals; // ivar: _intervals


// -(id)initWithBins:(id)arg0 intervalCreationBlock:(id)arg1 valueComparisonBlock:(unk)arg2  ;
-(id)intervalForValue:(NSUInteger)arg0 ;
-(id)intervalIndexForValue:(NSUInteger)arg0 ;


@end


#endif