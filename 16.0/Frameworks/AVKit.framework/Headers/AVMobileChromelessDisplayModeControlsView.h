// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILECHROMELESSDISPLAYMODECONTROLSVIEW_H
#define AVMOBILECHROMELESSDISPLAYMODECONTROLSVIEW_H

@protocol AVMobileChromelessDisplayModeControlsViewDelegate;


#import "AVView.h"
#import "AVButton.h"
#import "AVMobileChromelessControlsStyleSheet.h"

@interface AVMobileChromelessDisplayModeControlsView : AVView {
    AVButton *_fullScreenButton;
    AVButton *_pictureInPictureButton;
}


@property (weak, nonatomic) NSObject<AVMobileChromelessDisplayModeControlsViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger fullscreenIcon; // ivar: _fullscreenIcon
@property (nonatomic) BOOL includesFullscreenControl; // ivar: _includesFullscreenControl
@property (nonatomic) BOOL includesPictureInPictureControl; // ivar: _includesPictureInPictureControl
@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet; // ivar: _styleSheet


-(id)initWithStyleSheet:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_addDisplayModeControlViews:(id)arg0 ;
-(void)_updateFullscreenControlIcon;
-(void)fullScreenButtonWasPressed;
-(void)layoutSubviews;
-(void)pictureInPictureControlWasPressed;


@end


#endif