// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11ASSETVIEWER12SCRUBBERVIEW_H
#define _TTC11ASSETVIEWER12SCRUBBERVIEW_H

@class UIView;



@interface _TtC11AssetViewer12ScrubberView : UIView {
    ? delegate;
    ? currentTime;
    ? $__lazy_storage_$_playPauseButton;
    ? $__lazy_storage_$_skipBackButton;
    ? $__lazy_storage_$_skipForwardButton;
    ? $__lazy_storage_$_slider;
    ? $__lazy_storage_$_elapsedTimeLabel;
    ? $__lazy_storage_$_remainingTimeLabel;
    ? $__lazy_storage_$_elapsedTimeFormatter;
    ? $__lazy_storage_$_remainingTimeFormatter;
    ? link;
    ? timing;
    ? lastLayoutBounds;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif