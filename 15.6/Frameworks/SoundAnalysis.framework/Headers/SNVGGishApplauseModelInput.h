// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNVGGISHAPPLAUSEMODELINPUT_H
#define SNVGGISHAPPLAUSEMODELINPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNVGGishApplauseModelInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *input1; // ivar: _input1


-(id)featureValueForName:(id)arg0 ;
-(id)initWithInput1:(id)arg0 ;


@end


#endif