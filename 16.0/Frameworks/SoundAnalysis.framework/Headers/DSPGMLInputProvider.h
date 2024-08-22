// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSPGMLINPUTPROVIDER_H
#define DSPGMLINPUTPROVIDER_H

@class MLFeatureDescription, NSMutableDictionary, NSArray, MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface DSPGMLInputProvider : NSObject <MLFeatureProvider>

 {
    MLFeatureDescription *_featureDescription;
    NSMutableDictionary *_featureCache;
    NSArray *_allInputFeatureNames;
    MLMultiArray *_input;
}


@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif