// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI32SESSIONMEDIAPLAYERVIEWCONTROLLER_H
#define _TTC9SEYMOURUI32SESSIONMEDIAPLAYERVIEWCONTROLLER_H

@class AVPlayerViewController, NSArray;



@interface _TtC9SeymourUI32SessionMediaPlayerViewController : AVPlayerViewController {
    ? presenter;
    ? airplayAndSettingsControlsView;
    ? settingsControlItem;
    ? gymKitResumeMachineView;
    ? settingsPopoverSourceView;
    ? overlayView;
    ? tapGestureRecognizer;
    ? videoBoundsObserver;
}


@property (nonatomic, readonly) NSArray *keyCommands;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPlayerLayerView:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif