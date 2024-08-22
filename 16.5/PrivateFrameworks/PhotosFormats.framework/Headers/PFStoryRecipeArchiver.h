// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSTORYRECIPEARCHIVER_H
#define PFSTORYRECIPEARCHIVER_H


#import <Foundation/Foundation.h>


@interface PFStoryRecipeArchiver : NSObject



+(id)stringByAssetKind;
+(id)stringByClipMotionStyle;
+(id)stringByClipPlaybackStyle;
+(id)stringByClipTransition;
+(id)stringByDisplayAssetCategory;
+(id)stringByLibraryKind;
+(id)stringByOverallDurationKind;
+(id)stringBySongCategory;
+(id)stringBySongSubcategory;
-(id)_archivedJSONObjectWithDurationInfo:(struct ? )arg0 ;
-(id)_archivedJSONObjectWithOverallDurationInfo:(struct ? )arg0 ;
-(id)archivedDataWithRecipe:(id)arg0 ;
-(id)archivedJSONDataWithRecipe:(id)arg0 options:(NSUInteger)arg1 ;
-(id)archivedJSONObjectWithAsset:(id)arg0 ;
-(id)archivedJSONObjectWithAutoEditDecisionList:(id)arg0 ;
-(id)archivedJSONObjectWithCMTime:(struct ? )arg0 ;
-(id)archivedJSONObjectWithClip:(id)arg0 ;
-(id)archivedJSONObjectWithLibrary:(id)arg0 ;
-(id)archivedJSONObjectWithPresentation:(id)arg0 ;
-(id)archivedJSONObjectWithRecipe:(id)arg0 ;
-(id)archivedJSONObjectWithStyle:(id)arg0 ;


@end


#endif