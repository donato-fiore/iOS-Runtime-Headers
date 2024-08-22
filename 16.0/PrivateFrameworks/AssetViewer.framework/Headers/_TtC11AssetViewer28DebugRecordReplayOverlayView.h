// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11ASSETVIEWER28DEBUGRECORDREPLAYOVERLAYVIEW_H
#define _TTC11ASSETVIEWER28DEBUGRECORDREPLAYOVERLAYVIEW_H

@class UIView;



@interface _TtC11AssetViewer28DebugRecordReplayOverlayView : UIView {
    ? topControlsStackView;
    ? recordButton;
    ? playButton;
    ? resetButton;
    ? blinkButton;
    ? backButtonColor;
    ? bottomBackgroundView;
    ? bottomControlsStackView;
    ? delegate;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)bottomButtonPressed:(id)arg0 ;


@end


#endif