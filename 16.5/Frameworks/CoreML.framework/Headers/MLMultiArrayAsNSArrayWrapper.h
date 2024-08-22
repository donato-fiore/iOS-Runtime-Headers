// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLMULTIARRAYASNSARRAYWRAPPER_H
#define MLMULTIARRAYASNSARRAYWRAPPER_H

@class NSArray;


#import "MLMultiArray.h"

@interface MLMultiArrayAsNSArrayWrapper : NSArray

@property (retain) MLMultiArray *multiArray; // ivar: _multiArray


-(NSUInteger)count;
-(id)initWrappingMultiArray:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif