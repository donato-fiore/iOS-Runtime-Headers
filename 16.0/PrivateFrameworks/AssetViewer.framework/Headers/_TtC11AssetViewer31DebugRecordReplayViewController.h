// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11ASSETVIEWER31DEBUGRECORDREPLAYVIEWCONTROLLER_H
#define _TTC11ASSETVIEWER31DEBUGRECORDREPLAYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11AssetViewer31DebugRecordReplayViewController : UIViewController {
    ? session;
    ? arqlVC;
    ? overlayView;
    ? shouldShowRenderingOverlay;
    ? renderingEffectsData;
    ? currentConfig;
    ? state;
    ? focalDataForRecording;
    ? modelURL;
    ? arRecordingURL;
    ? command;
    ? blinkTimer;
    ? optionsToBlink;
    ? blinkShouldEnable;
    ? $__lazy_storage_$_replayObserver;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)blinkButtonPressed;
-(void)helpDismissVC;
-(void)playButtonPressed;
-(void)recordButtonPressed;
-(void)resetButtonPressed;
-(void)tappedWithRecognizer:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif