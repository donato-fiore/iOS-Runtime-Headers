// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSSCENEMATCHER_H
#define CLSSCENEMATCHER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLSSceneMatcher : NSObject {
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneLabel;
}




+(id)babyAndPetSceneNames;
+(id)babyChildTeenAdultAndPetSceneNames;
+(id)babySceneNames;
+(id)childTeenAndAdultSceneNames;
+(id)confidenceThresholdTypeBySceneLabel;
+(id)interestingSceneNames;
+(id)junkSceneNames;
+(id)junkSceneNamesLegacy;
+(id)sceneNamesBySceneLabel;
+(id)sceneNamesWithSceneLabel:(id)arg0 ;
+(id)sharedSceneMatcher;
+(id)whiteboardSceneNames;
-(id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)arg0 ;


@end


#endif