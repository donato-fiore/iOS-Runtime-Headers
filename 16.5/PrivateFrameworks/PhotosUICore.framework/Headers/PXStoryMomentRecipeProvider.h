// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMOMENTRECIPEPROVIDER_H
#define PXSTORYMOMENTRECIPEPROVIDER_H

@class NSString, PFStoryAutoEditConfiguration, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PXStoryMomentRecipeState.h"

@interface PXStoryMomentRecipeProvider : NSObject {
    NSString *_colorGradeCategory;
    PFStoryAutoEditConfiguration *_configuration;
    NSInteger _songPace;
    PXStoryMomentRecipeState *_state;
    NSMutableDictionary *_clipDebugInfos;
}




-(BOOL)_isSongEnergetic;
-(NSInteger)_incomingTransitionKindForRecipe:(NSUInteger)arg0 ;
-(NSInteger)_innerTransitionKindForRecipe:(NSUInteger)arg0 ;
-(NSInteger)_motionStyleForRecipe:(NSUInteger)arg0 ;
-(id)_nextBaseMomentRecipeWithPreviousClip:(id)arg0 ;
-(id)_nextModuleRecipeWithModuleClipRange:(struct _NSRange )arg0 clipCatalog:(id)arg1 ;
-(id)_nextNUpRevealRecipeWithPreviousClip:(id)arg0 ;
-(id)_nextSingleAssetRecipeWithPreviousClip:(id)arg0 ;
-(id)_recipeFromRecipeType:(NSUInteger)arg0 previousClip:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 colorGradeCategory:(id)arg1 songPace:(NSInteger)arg2 randomNumberGenerator:(id)arg3 ;
-(struct ? )_nextEmptySpaceBreakTransitionForMotion:(struct ? )arg0 ;
-(struct _NSRange )_rangeOfLength:(NSInteger)arg0 centeredOnIndex:(NSInteger)arg1 withinRange:(struct _NSRange )arg2 ;
-(void)provideDebugInfoForClip:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)provideRecipeForMomentClipRange:(struct _NSRange )arg0 withClipCatalog:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif