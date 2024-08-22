// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPEVENTRANKERFEATURIZER_H
#define PPEVENTRANKERFEATURIZER_H


#import <Foundation/Foundation.h>

#import "PPTrialWrapper.h"

@interface PPEventRankerFeaturizer : NSObject {
    PPTrialWrapper *_trialWrapper;
}




+(id)scoreFeatureSchema:(id)arg0 ;
+(void)clearAssetCache;
-(id)featureSchema;
-(id)initWithTrialWrapper:(id)arg0 ;


@end


#endif