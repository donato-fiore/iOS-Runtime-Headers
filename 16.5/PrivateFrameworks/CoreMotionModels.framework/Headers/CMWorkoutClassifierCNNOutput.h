// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMWORKOUTCLASSIFIERCNNOUTPUT_H
#define CMWORKOUTCLASSIFIERCNNOUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CMWorkoutClassifierCNNOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *softmax__0; // ivar: _softmax__0


-(id)featureValueForName:(id)arg0 ;
-(id)initWithSoftmax__0:(id)arg0 ;


@end


#endif