// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPROBABILITYDICTIONARYMULTIARRAYSTORAGE_H
#define MLPROBABILITYDICTIONARYMULTIARRAYSTORAGE_H

@protocol MLProbabilityDictionaryStorage;

#import <Foundation/Foundation.h>

#import "MLMultiArray.h"

@interface MLProbabilityDictionaryMultiArrayStorage : NSObject <MLProbabilityDictionaryStorage>

 {
    MLMultiArray *_multiArray;
    NSUInteger _count;
}




-(NSUInteger)count;
-(NSUInteger)maxElementIndex;
-(id)initWithMultiArray:(id)arg0 count:(NSUInteger)arg1 ;
-(id)probabilityAtIndex:(NSUInteger)arg0 ;


@end


#endif