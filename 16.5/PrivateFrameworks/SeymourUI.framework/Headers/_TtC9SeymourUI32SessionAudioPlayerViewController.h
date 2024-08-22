// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI32SESSIONAUDIOPLAYERVIEWCONTROLLER_H
#define _TTC9SEYMOURUI32SESSIONAUDIOPLAYERVIEWCONTROLLER_H

@class UIViewController, NSArray;



@interface _TtC9SeymourUI32SessionAudioPlayerViewController : UIViewController {
    ? delegate;
    ? currentLayoutKind;
    ? currentLayoutEnvironment;
    ? previousBounds;
    ? contentOverlayView;
    ? isPictureInPictureActive;
    ? layoutProvider;
    ? settingsPopoverSourceView;
    ? presenter;
    ? playerView;
}


@property (nonatomic, readonly) NSArray *keyCommands;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;


@end


#endif