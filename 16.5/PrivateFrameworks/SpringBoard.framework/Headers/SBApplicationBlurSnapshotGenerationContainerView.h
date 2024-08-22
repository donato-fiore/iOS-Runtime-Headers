// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONBLURSNAPSHOTGENERATIONCONTAINERVIEW_H
#define SBAPPLICATIONBLURSNAPSHOTGENERATIONCONTAINERVIEW_H

@class UIView;



@interface SBApplicationBlurSnapshotGenerationContainerView : UIView

@property (retain, nonatomic) UIView *liveBlurView; // ivar: _liveBlurView
@property (retain, nonatomic) UIView *realSnapshotView; // ivar: _realSnapshotView
@property (retain, nonatomic) UIView *wallpaperView; // ivar: _wallpaperView


-(void)layoutSubviews;


@end


#endif