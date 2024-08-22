// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLSEQUNCEASFEATUREVALUEARRAY_H
#define MLSEQUNCEASFEATUREVALUEARRAY_H

@class NSArray;


#import "MLSequence.h"

@interface MLSequnceAsFeatureValueArray : NSArray

@property (readonly, nonatomic) MLSequence *sequence; // ivar: _sequence


-(NSUInteger)count;
-(id)initWrappingSequence:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif