// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PACKAGEFLOW_ERZ8QGKQJW_2195960OUTPUT_H
#define PACKAGEFLOW_ERZ8QGKQJW_2195960OUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface packageflow_erz8qgkqjw_2195960Output : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *predictions; // ivar: _predictions


-(id)featureValueForName:(id)arg0 ;
-(id)initWithPredictions:(id)arg0 ;


@end


#endif