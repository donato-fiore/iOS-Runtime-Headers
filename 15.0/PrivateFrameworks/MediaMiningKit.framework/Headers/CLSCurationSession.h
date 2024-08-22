// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCURATIONSESSION_H
#define CLSCURATIONSESSION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLSCurationSession : NSObject {
    NSMutableDictionary *_curationModelBySpecification;
}




+(CGFloat)legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
+(CGFloat)legacyAestheticScoreThresholdToBeAwesome;
+(CGFloat)legacyAestheticScoreThresholdToNotBeJunk;
+(id)scoringContextWithAssets:(id)arg0 aestheticScoreThresholdToBeAwesome:(CGFloat)arg1 ;
+(short)audioClassificationsToEmphasizeWithAudioClassificationCounts:(id)arg0 threshold:(CGFloat)arg1 ;
+(void)addAudioClassifications:(short)arg0 toAudioClassificationCounts:(id)arg1 ;
+(void)enumerateSignalsFromAsset:(id)arg0 fullHierarchyName:(BOOL)arg1 usingBlock:(id)arg2 ;
-(NSUInteger)_latestCurationModelVersionApplicableForCurationModelSpecification:(id)arg0 ;
-(id)_curationModelWithSpecification:(id)arg0 ;
-(id)curationModelForAsset:(id)arg0 ;
-(id)curationModelForItemInfo:(id)arg0 options:(id)arg1 ;
-(id)curationModelWithCurationModelVersion:(NSUInteger)arg0 forAsset:(id)arg1 ;
-(id)curationModelWithSpecification:(id)arg0 ;
-(id)init;
-(id)latestCurationModelForTesting;
-(void)prepareAssets:(id)arg0 ;


@end


#endif