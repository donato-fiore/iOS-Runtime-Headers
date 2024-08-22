// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DSPGMLINPUTPROVIDER_H
#define DSPGMLINPUTPROVIDER_H

@class MLFeatureDescription, NSMutableDictionary, NSArray, NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface DSPGMLInputProvider : NSObject <MLFeatureProvider>

 {
    MLFeatureDescription *_featureDescription;
    NSMutableDictionary *_featureCache;
    NSArray *_allInputFeatureNames;
}


@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *input; // ivar: _input


+(id)shapeFromMultiArrayConstraint:(id)arg0 lastDimensionCountIfFlexible:(int)arg1 ;
-(id)featureValueForName:(id)arg0 ;
-(id)initWithFeatureDescription:(id)arg0 allInputFeatureNames:(id)arg1 elementCountPerChannel:(unsigned int)arg2 channelCount:(unsigned int)arg3 ;
-(void)setFeatureValue:(id)arg0 forFeatureName:(id)arg1 ;


@end


#endif