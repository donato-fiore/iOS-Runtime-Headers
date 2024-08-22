// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMESSAGESSTACKPLAYBACKCONTROLVIEW_H
#define PXMESSAGESSTACKPLAYBACKCONTROLVIEW_H

@class UIView, NSString;
@protocol PXChangeObserver, PXGReusableView;


#import "_PXMessagesStackPlayButton.h"
#import "PXMessagesStackPlaybackControlUserData.h"
#import "PXGDisplayAssetVideoPresentationController.h"
#import "PXMessagesStackPlaybackControlViewModel.h"

@interface PXMessagesStackPlaybackControlView : UIView <PXChangeObserver, PXGReusableView>

 {
    _PXMessagesStackPlayButton *_button;
    NSInteger _itemIndex;
}


@property (nonatomic) CGRect clippingRect; // ivar: clippingRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (copy, nonatomic) PXMessagesStackPlaybackControlUserData *userData; // ivar: _userData
@property (retain, nonatomic) PXGDisplayAssetVideoPresentationController *videoController; // ivar: _videoController
@property (retain, nonatomic) PXMessagesStackPlaybackControlViewModel *viewModel; // ivar: _viewModel


-(BOOL)_shouldPauseOnTap;
-(BOOL)_wantsButton;
-(BOOL)handleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleButton:(id)arg0 ;
-(void)_updateButtonVisibility;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;


@end


#endif