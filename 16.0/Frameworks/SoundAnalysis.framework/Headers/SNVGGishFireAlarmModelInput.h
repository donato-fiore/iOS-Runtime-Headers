// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNVGGISHFIREALARMMODELINPUT_H
#define SNVGGISHFIREALARMMODELINPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNVGGishFireAlarmModelInput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *detectedHistoryIn; // ivar: _detectedHistoryIn
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *input1; // ivar: _input1
@property (retain, nonatomic) MLMultiArray *stateIn; // ivar: _stateIn


-(id)featureValueForName:(id)arg0 ;
-(id)initWithInput1:(id)arg0 ;
-(id)initWithInput1:(id)arg0 stateIn:(id)arg1 detectedHistoryIn:(id)arg2 ;


@end


#endif