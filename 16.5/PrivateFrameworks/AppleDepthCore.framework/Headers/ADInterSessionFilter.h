// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADINTERSESSIONFILTER_H
#define ADINTERSESSIONFILTER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ADInterSessionFilterParameters.h"

@interface ADInterSessionFilter : NSObject {
    unsigned int _version;
    ADInterSessionFilterParameters *_params;
    deque<Node *, std::allocator<Node *>> _nodes;
    map<std::string, std::multiset<Element *, Element::ElementCompare> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::multiset<Element *, Element::ElementCompare> *>>> _sets;
    NSArray *_elementsNames;
    *CGFloat _weightedAverage;
    *CGFloat _sumOfWeights;
}




-(BOOL)TtestStepWithCandidate:(unsigned int)arg0 ;
-(CGFloat)L2FromIndex:(unsigned int)arg0 ToIndex:(unsigned int)arg1 ByElement:(unsigned int)arg2 WithMean:(CGFloat)arg3 ;
-(CGFloat)LossFromIndex:(unsigned int)arg0 ToIndex:(unsigned int)arg1 ;
-(CGFloat)SLFromIndex:(unsigned int)arg0 ;
-(CGFloat)TTESTWithCandidate:(unsigned int)arg0 ByElement:(unsigned int)arg1 ;
-(CGFloat)V1FromIndex:(unsigned int)arg0 ToIndex:(unsigned int)arg1 ;
-(CGFloat)V2FromIndex:(unsigned int)arg0 ToIndex:(unsigned int)arg1 ;
-(CGFloat)samplesMeanFromIndex:(unsigned int)arg0 ToIndex:(unsigned int)arg1 ByElement:(unsigned int)arg2 ;
-(CGFloat)samplesVarianceFromIndex:(unsigned int)arg0 ToIndex:(unsigned int)arg1 ByElement:(unsigned int)arg2 WithMean:(CGFloat)arg3 ;
-(CGFloat)sigmaSWithCandidate:(unsigned int)arg0 ByElement:(unsigned int)arg1 ;
-(NSInteger)fillWithDictionaryRepresentation:(id)arg0 ;
-(NSInteger)fillWithEntry:(id)arg0 ;
-(NSInteger)insertEntry:(id)arg0 withWeight:(CGFloat)arg1 ;
-(NSInteger)markOutliers:(unsigned int)arg0 ;
-(id)calculate;
-(id)calculateInterSessionFilterResultFromIndex:(unsigned int)arg0 ;
-(id)initWithFieldNames:(id)arg0 parameters:(id)arg1 ;
-(id)insertEntryAndCalculate:(id)arg0 withWeight:(CGFloat)arg1 ;
-(id)persistenceData;
-(unsigned int)kIndexCandidate;
-(unsigned int)stepDetection;
-(void)dealloc;
-(void)markInStep:(unsigned int)arg0 ;
-(void)resetElementFlags:(*void)arg0 ;
-(void)setOnlineWeights:(unsigned int)arg0 ;


@end


#endif