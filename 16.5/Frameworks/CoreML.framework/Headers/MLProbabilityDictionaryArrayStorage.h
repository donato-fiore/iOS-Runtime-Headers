// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPROBABILITYDICTIONARYARRAYSTORAGE_H
#define MLPROBABILITYDICTIONARYARRAYSTORAGE_H

@class NSArray;
@protocol MLProbabilityDictionaryStorage;

#import <Foundation/Foundation.h>


@interface MLProbabilityDictionaryArrayStorage : NSObject <MLProbabilityDictionaryStorage>

 {
    NSArray *_array;
    NSUInteger _count;
}




-(NSUInteger)count;
-(NSUInteger)maxElementIndex;
-(id)initWithArray:(id)arg0 count:(NSUInteger)arg1 ;
-(id)probabilityAtIndex:(NSUInteger)arg0 ;


@end


#endif