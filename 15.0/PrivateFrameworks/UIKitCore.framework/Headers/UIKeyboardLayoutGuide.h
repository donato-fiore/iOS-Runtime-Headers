// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDLAYOUTGUIDE_H
#define UIKEYBOARDLAYOUTGUIDE_H



#import "UITrackingLayoutGuide.h"

@interface UIKeyboardLayoutGuide : UITrackingLayoutGuide

@property (nonatomic) BOOL addsHeightWhenUndocked; // ivar: _addsHeightWhenUndocked
@property (nonatomic, getter=isDocked) BOOL docked; // ivar: _docked
@property (nonatomic) BOOL followsUndockedKeyboard; // ivar: _followsUndockedKeyboard
@property (nonatomic) BOOL hasPausedEdges; // ivar: _hasPausedEdges
@property (nonatomic) UIOffset previousOffset; // ivar: _previousOffset
@property (nonatomic) CGSize previousSize; // ivar: _previousSize
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning
@property (nonatomic, getter=isWindowGuide) BOOL windowGuide; // ivar: _windowGuide


-(BOOL)shouldPauseEdgesForSize:(struct CGSize )arg0 ;
-(id)init;
-(void)changeOffsetConstants:(struct UIOffset )arg0 ;
-(void)changeSizingConstants:(struct CGSize )arg0 ;
-(void)updateShouldPauseEdges:(BOOL)arg0 ;


@end


#endif