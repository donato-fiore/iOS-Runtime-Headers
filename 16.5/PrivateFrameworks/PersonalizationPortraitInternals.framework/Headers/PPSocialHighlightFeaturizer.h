// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSOCIALHIGHLIGHTFEATURIZER_H
#define PPSOCIALHIGHLIGHTFEATURIZER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightFeaturizer : NSObject

@property (readonly, nonatomic) NSDictionary *featureValues; // ivar: _featureValues


+(id)trialSpecifiedFeatures;
-(id)featurizeHighlights:(id)arg0 ;
-(id)initWithFeatureValues:(id)arg0 ;
-(id)initWithFeedbackPublisher:(id)arg0 topicStore:(id)arg1 interactionStore:(id)arg2 significantContactHandles:(id)arg3 features:(id)arg4 highlights:(id)arg5 ;


@end


#endif