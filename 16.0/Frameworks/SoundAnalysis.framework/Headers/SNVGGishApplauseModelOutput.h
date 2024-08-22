// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNVGGISHAPPLAUSEMODELOUTPUT_H
#define SNVGGISHAPPLAUSEMODELOUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNVGGishApplauseModelOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *output1; // ivar: _output1


-(id)featureValueForName:(id)arg0 ;
-(id)initWithOutput1:(id)arg0 ;


@end


#endif