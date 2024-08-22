// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUISLIDESHOWVIEWTILE_H
#define PXUISLIDESHOWVIEWTILE_H

@class UIView, NSString, UIViewController;
@protocol PXUIViewBasicTile, PXUISlideshowViewTileDelegate;


#import "PXUIImageTile.h"
#import "PXUIFloatingContentView.h"

@interface PXUISlideshowViewTile : PXUIImageTile <PXUIViewBasicTile>

 {
    UIView *_containerView;
    PXUIFloatingContentView *_floatingView;
}


@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView; // ivar: __contentView
@property (retain, nonatomic, setter=_setSlideshowSnapshotView:) UIView *_slideshowSnapshotView; // ivar: __slideshowSnapshotView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXUISlideshowViewTileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *slideshowViewController; // ivar: _slideshowViewController
@property (nonatomic, getter=isSlideshowViewHidden) BOOL slideshowViewHidden; // ivar: _slideshowViewHidden
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(void)_updateContentViewFrame;
-(void)_updateContentViewVisibility;
-(void)becomeReusable;
-(void)didAnimateToGeometry:(struct PXTileGeometry )arg0 toUserData:(id)arg1 withOptions:(id)arg2 ;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;
-(void)willAnimateToGeometry:(struct PXTileGeometry )arg0 toUserData:(id)arg1 withOptions:(id)arg2 ;


@end


#endif