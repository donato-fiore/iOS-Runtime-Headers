// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMOODUTILITIES_H
#define PGMOODUTILITIES_H


#import <Foundation/Foundation.h>


@interface PGMoodUtilities : NSObject



+(id)_momentNodesForAssetCollection:(id)arg0 inGraph:(id)arg1 moodOptions:(id)arg2 ;
+(id)moodGraphContextIdentifiersForAssetCollection:(id)arg0 withGraph:(id)arg1 moodOptions:(id)arg2 ;
+(id)moodGraphContextIdentifiersForMomentNodes:(id)arg0 inGraph:(id)arg1 moodOptions:(id)arg2 ;
+(id)moodGraphNodeIdentifiersForAssetCollection:(id)arg0 withGraph:(id)arg1 moodOptions:(id)arg2 ;
+(id)moodGraphNodeIdentifiersForMomentNodes:(id)arg0 ;
+(id)moodMeaningIdentifiersForAssetCollection:(id)arg0 withGraph:(id)arg1 moodOptions:(id)arg2 ;
+(id)moodMeaningIdentifiersForMomentNodes:(id)arg0 ;
+(id)moodSceneIdentifiersByMomentForAssetCollection:(id)arg0 withGraph:(id)arg1 moodOptions:(id)arg2 ;
+(id)moodSceneIdentifiersByMomentForMomentNodes:(id)arg0 ;


@end


#endif