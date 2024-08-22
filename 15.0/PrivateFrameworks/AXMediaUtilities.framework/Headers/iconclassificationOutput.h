// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICONCLASSIFICATIONOUTPUT_H
#define ICONCLASSIFICATIONOUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface iconclassificationOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *leaf_leaf_predictions_probabilities; // ivar: _leaf_leaf_predictions_probabilities


-(id)featureValueForName:(id)arg0 ;
-(id)initWithLeaf_leaf_predictions_probabilities:(id)arg0 ;


@end


#endif