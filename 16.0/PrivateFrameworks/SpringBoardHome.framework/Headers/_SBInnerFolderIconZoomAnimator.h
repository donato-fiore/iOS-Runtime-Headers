// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBINNERFOLDERICONZOOMANIMATOR_H
#define _SBINNERFOLDERICONZOOMANIMATOR_H



#import "SBIconZoomAnimator.h"
#import "SBFloatyFolderView.h"
#import "SBIconView.h"
#import "SBHFolderZoomSettings.h"

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator {
    SBFloatyFolderView *_folderView;
    SBIconView *_folderIconView;
    CGAffineTransform _folderIconViewScaleTransform;
}


@property (retain, nonatomic) SBHFolderZoomSettings *settings;


-(NSUInteger)_numberOfSignificantAnimations;
-(id)initWithFolderController:(id)arg0 iconView:(id)arg1 iconZoomScaleDimension:(struct CGPoint )arg2 ;
-(void)_animateToFraction:(CGFloat)arg0 afterDelay:(CGFloat)arg1 withSharedCompletion:(id)arg2 ;
-(void)_applyIconCrossfadeForZoomFraction:(CGFloat)arg0 ;
-(void)_applyIconTransformForZoomFraction:(CGFloat)arg0 ;
-(void)_calculateZoomedOffset:(struct CGPoint *)arg0 scale:(struct CGPoint *)arg1 forIcon:(id)arg2 withView:(id)arg3 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 ;


@end


#endif