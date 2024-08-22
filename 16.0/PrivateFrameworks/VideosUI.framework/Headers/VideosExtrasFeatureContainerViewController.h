// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASFEATURECONTAINERVIEWCONTROLLER_H
#define VIDEOSEXTRASFEATURECONTAINERVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, UIView, UIViewController<VideosExtrasVideoPlaybackViewController>;


#import "VideosExtrasContext.h"

@interface VideosExtrasFeatureContainerViewController : UIViewController {
    NSLayoutConstraint *_overlayViewAdjustmentConstraint;
}


@property (nonatomic) CGFloat collectionViewHeight; // ivar: _collectionViewHeight
@property (readonly, weak, nonatomic) VideosExtrasContext *context; // ivar: _context
@property (weak, nonatomic) UIView *menuBarView; // ivar: _menuBarView
@property (retain, nonatomic) UIViewController<VideosExtrasVideoPlaybackViewController> *videoPlaybackViewController; // ivar: _videoPlaybackViewController


-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)initWithContext:(id)arg0 ;
-(void)_menuBarHeightChange:(id)arg0 ;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif