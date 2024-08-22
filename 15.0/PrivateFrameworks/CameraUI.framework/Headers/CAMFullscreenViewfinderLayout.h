// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMFULLSCREENVIEWFINDERLAYOUT_H
#define CAMFULLSCREENVIEWFINDERLAYOUT_H


#import <Foundation/Foundation.h>


@interface CAMFullscreenViewfinderLayout : NSObject

@property (readonly, nonatomic) UIEdgeInsets _safeAreaInsets; // ivar: __safeAreaInsets
@property (nonatomic) CGRect referenceBounds; // ivar: _referenceBounds
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (nonatomic) CGSize shutterIntrinsicSize; // ivar: _shutterIntrinsicSize


-(id)initWithReferenceBounds:(struct CGRect )arg0 shutterIntrinsicSize:(struct CGSize )arg1 ;
-(struct ? )geometryForElapsedTimeView:(id)arg0 viewportFrame:(struct CGRect )arg1 orientation:(NSInteger)arg2 ;
-(struct CGRect )alignmentRectForShutterControl;
-(struct CGRect )frameForBottomControl:(id)arg0 betweenShutterAndLeftControl:(id)arg1 ;
-(struct CGRect )frameForBottomControl:(id)arg0 betweenShutterAndRightControl:(id)arg1 ;
-(struct CGRect )frameForBottomLeftControl:(id)arg0 ;
-(struct CGRect )frameForBottomRightControl:(id)arg0 ;
-(struct CGRect )frameForControlStatusBar;
-(struct CGRect )frameForShutterControl:(id)arg0 ;
-(struct CGRect )viewportFrameForAspectRatio:(NSInteger)arg0 accessoryAreaExpanded:(BOOL)arg1 ;
-(struct CGRect )viewportFrameForAspectRatio:(NSInteger)arg0 usingAppDrawer:(BOOL)arg1 accessoryAreaExpanded:(BOOL)arg2 ;
-(struct CGSize )viewportSizeForAspectRatio:(NSInteger)arg0 ;
-(void)_updateSafeAreaInsets;


@end


#endif