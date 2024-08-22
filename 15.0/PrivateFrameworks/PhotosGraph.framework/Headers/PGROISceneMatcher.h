// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGROISCENEMATCHER_H
#define PGROISCENEMATCHER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PGROISceneMatcher : NSObject {
    NSMutableDictionary *_confidenceThresholdByWhitelistedSceneIdentifierByROILabel;
    NSMutableDictionary *_confidenceThresholdByBlockedSceneIdentifierByROILabel;
}




+(id)beachSceneNames;
+(id)blockedSceneNamesByROILabel;
+(id)confidenceThresholdBySceneIdentifierWithSceneNames:(id)arg0 blocked:(BOOL)arg1 ;
+(id)mountainSceneNames;
+(id)natureSceneNames;
+(id)nonNatureSceneNames;
+(id)nonWaterSceneNames;
+(id)sharedROISceneMatcher;
+(id)urbanSceneNames;
+(id)waterSceneNames;
+(id)whitelistedSceneNamesByROILabel;
-(id)confidenceThresholdByBlockedSceneIdentifierForROILabel:(id)arg0 ;
-(id)confidenceThresholdByWhitelistedSceneIdentifierForROILabel:(id)arg0 ;


@end


#endif