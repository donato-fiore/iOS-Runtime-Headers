// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCURATIONSESSION_H
#define CLSCURATIONSESSION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLSCurationSession : NSObject {
    NSMutableDictionary *_curationModelBySpecification;
    os_unfair_lock_s _curationModelBySpecificationLock;
}




+(CGFloat)legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
+(CGFloat)legacyAestheticScoreThresholdToBeAwesome;
+(CGFloat)legacyAestheticScoreThresholdToNotBeJunk;
+(id)scoringContextWithAssets:(id)arg0 aestheticScoreThresholdToBeAwesome:(CGFloat)arg1 ;
+(short)audioClassificationsToEmphasizeWithAudioClassificationCounts:(id)arg0 threshold:(CGFloat)arg1 ;
+(void)addAudioClassifications:(short)arg0 toAudioClassificationCounts:(id)arg1 ;
+(void)enumerateSignalsFromAsset:(id)arg0 fullHierarchyName:(BOOL)arg1 usingBlock:(id)arg2 ;
-(id)_curationModelWithSpecification:(id)arg0 ;
-(id)curationModelForAsset:(id)arg0 ;
-(id)curationModelForItemInfo:(id)arg0 options:(id)arg1 ;
-(id)curationModelWithAsset:(id)arg0 ;
-(id)curationModelWithSpecification:(id)arg0 ;
-(id)init;
-(void)prepareAssets:(id)arg0 ;


@end


#endif