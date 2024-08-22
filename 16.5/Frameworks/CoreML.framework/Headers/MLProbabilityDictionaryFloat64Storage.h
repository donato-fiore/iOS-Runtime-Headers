// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPROBABILITYDICTIONARYFLOAT64STORAGE_H
#define MLPROBABILITYDICTIONARYFLOAT64STORAGE_H

@class NSData;
@protocol MLProbabilityDictionaryStorage;

#import <Foundation/Foundation.h>


@interface MLProbabilityDictionaryFloat64Storage : NSObject <MLProbabilityDictionaryStorage>

 {
    NSData *_data;
}




-(NSUInteger)count;
-(NSUInteger)maxElementIndex;
-(id)initWithFloat64CArray:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
-(id)probabilityAtIndex:(NSUInteger)arg0 ;


@end


#endif