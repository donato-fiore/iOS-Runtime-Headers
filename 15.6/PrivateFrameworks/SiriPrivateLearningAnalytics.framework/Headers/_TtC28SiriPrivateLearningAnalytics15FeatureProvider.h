// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28SIRIPRIVATELEARNINGANALYTICS15FEATUREPROVIDER_H
#define _TTC28SIRIPRIVATELEARNINGANALYTICS15FEATUREPROVIDER_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC28SiriPrivateLearningAnalytics15FeatureProvider : SwiftObject <MLFeatureProvider>

 {
    ? namedFeatures;
    ? targetName;
    ? featureNames;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif