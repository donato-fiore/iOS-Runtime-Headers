// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCUSERVECTORMODELINPUT_H
#define FCUSERVECTORMODELINPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface FCUserVectorModelInput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *aggregates; // ivar: _aggregates
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithAggregates:(id)arg0 ;


@end


#endif