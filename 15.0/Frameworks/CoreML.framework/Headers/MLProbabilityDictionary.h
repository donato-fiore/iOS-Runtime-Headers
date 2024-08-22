// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLPROBABILITYDICTIONARY_H
#define MLPROBABILITYDICTIONARY_H

@class NSMutableDictionary;



@interface MLProbabilityDictionary : NSMutableDictionary {
    vector<double, std::allocator<double>> _values;
}




+(id)probabilityDictionaryForLabels:(id)arg0 ;
-(id)classLabelOfMaxProbability:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)replaceDoubleVectorWith:(*CGFloat)arg0 ;


@end


#endif