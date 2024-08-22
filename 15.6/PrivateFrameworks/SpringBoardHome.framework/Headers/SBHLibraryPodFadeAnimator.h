// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYPODFADEANIMATOR_H
#define SBHLIBRARYPODFADEANIMATOR_H

@class UIView;


#import "SBIconAnimator.h"
#import "SBFolderController.h"
#import "SBHLibraryPodZoomSettings.h"

@interface SBHLibraryPodFadeAnimator : SBIconAnimator {
    SBFolderController *_innerFolderController;
    UIView *_searchBar;
    BOOL _animationComplete;
}


@property (retain, nonatomic) SBHLibraryPodZoomSettings *settings;


-(NSUInteger)_numberOfSignificantAnimations;
-(id)initWithAnimationContainer:(id)arg0 innerFolderController:(id)arg1 folderIcon:(id)arg2 searchBar:(id)arg3 ;
-(void)_animateToFraction:(CGFloat)arg0 afterDelay:(CGFloat)arg1 withSharedCompletion:(id)arg2 ;
-(void)_applyAlphaForFraction:(CGFloat)arg0 ;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 ;
-(void)cleanup;


@end


#endif