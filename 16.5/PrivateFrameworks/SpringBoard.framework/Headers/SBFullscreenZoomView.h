// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFULLSCREENZOOMVIEW_H
#define SBFULLSCREENZOOMVIEW_H



#import "SBZoomView.h"

@interface SBFullscreenZoomView : SBZoomView {
    id *_surface;
    BOOL _hasImage;
}


@property (readonly, weak, nonatomic) id *surface;


-(id)_initWithFrame:(struct CGRect )arg0 ;
-(id)_initWithView:(id)arg0 displayConfiguration:(id)arg1 ;
-(id)initWithContainingBounds:(struct CGRect )arg0 contentFrame:(struct CGRect )arg1 statusBarFrame:(struct CGRect )arg2 snapshot:(id)arg3 snapshotOrientation:(NSInteger)arg4 interfaceOrientation:(NSInteger)arg5 doubleHeightStatusBar:(BOOL)arg6 allowStatusBarToOverlap:(BOOL)arg7 useLargerCornerRadii:(BOOL)arg8 preventSplit:(BOOL)arg9 needsZoomFilter:(BOOL)arg10 asyncDecodeImage:(BOOL)arg11 forJail:(BOOL)arg12 hasOrientationMismatchForClassicApp:(BOOL)arg13 ;
-(id)initWithView:(id)arg0 containingSceneSnapshot:(id)arg1 forDisplayConfiguration:(id)arg2 ;
-(void)_addBlackBackground;


@end


#endif