// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMOMENTRECIPESTATE_H
#define PXSTORYMOMENTRECIPESTATE_H

@class PFStoryAutoEditFrequencyTable;

#import <Foundation/Foundation.h>


@interface PXStoryMomentRecipeState : NSObject {
    NSUInteger _previousPanDirection;
    NSUInteger _previous2UpPanRelativeMotion;
    NSUInteger _previous3UpPanRelativeMotion;
    NSUInteger _previousScaleDirection;
    NSUInteger _previousRotateDirection;
    NSUInteger _previousBaseMomentRecipe;
    NSUInteger _previousPortraitMomentRecipe;
    NSUInteger _previousSingleAssetMomentRecipe;
    NSInteger _previousEmptySpaceStrategy;
    PFStoryAutoEditFrequencyTable *_basicRecipeFrequencyTable;
}




-(NSInteger)nextEmptySpaceStrategy;
-(NSUInteger)_nextModuleRecipeWithModuleClipRange:(struct _NSRange )arg0 clipCatalog:(id)arg1 ;
-(NSUInteger)next2UpPanRelativeMotion;
-(NSUInteger)next3UpPanRelativeMotion;
-(NSUInteger)nextBaseMomentRecipe;
-(NSUInteger)nextNUpPanRelativeMotionWithN:(NSInteger)arg0 ;
-(NSUInteger)nextPanDirection;
-(NSUInteger)nextRotateDirection;
-(NSUInteger)nextScaleDirection;
-(NSUInteger)nextSingleAssetMomentRecipe;
-(id)init;
-(id)initWithRandomNumberGenerator:(id)arg0 ;


@end


#endif