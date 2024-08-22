// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPROBABILITYDICTIONARY_H
#define MLPROBABILITYDICTIONARY_H

@class NSDictionary;
@protocol MLProbabilityDictionaryStorage;


#import "MLProbabilityDictionarySharedKeySet.h"

@interface MLProbabilityDictionary : NSDictionary

@property (readonly) MLProbabilityDictionarySharedKeySet *labelIndexMap; // ivar: _labelIndexMap
@property (readonly) NSObject<MLProbabilityDictionaryStorage> *storage; // ivar: _storage


+(id)sharedKeySetForLabels:(id)arg0 ;
-(NSUInteger)count;
-(id)classLabelOfMaxProbability;
-(id)initWithLabelIndexMap:(id)arg0 storage:(id)arg1 ;
-(id)initWithLabels:(id)arg0 probabilities:(*CGFloat)arg1 ;
-(id)initWithLabels:(id)arg0 probabilityArray:(id)arg1 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithSharedKeySet:(id)arg0 probabilities:(*CGFloat)arg1 ;
-(id)initWithSharedKeySet:(id)arg0 probabilityArray:(id)arg1 ;
-(id)initWithSharedKeySet:(id)arg0 probabilityMultiArray:(id)arg1 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;


@end


#endif