// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRUIMEDIACONTROLSVIEWCONTROLLER_H
#define TVRUIMEDIACONTROLSVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol TVRUIRemoteViewProvider, _TVRUIEventDelegate, TVRUIDevice, TVRUIStyleProvider;


#import "TVRUICaptionsButton.h"
#import "TVRUIButton.h"

@interface TVRUIMediaControlsViewController : UIViewController <TVRUIRemoteViewProvider>



@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *buttonActionsDelegate; // ivar: _buttonActionsDelegate
@property (retain, nonatomic) TVRUICaptionsButton *captionsButton; // ivar: _captionsButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<TVRUIDevice> *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isShowingCaptionControl) BOOL showCaptionControl; // ivar: _showCaptionControl
@property (nonatomic, getter=isShowingSkipControls) BOOL showSkipControls; // ivar: _showSkipControls
@property (retain, nonatomic) TVRUIButton *skipBackwardButton; // ivar: _skipBackwardButton
@property (retain, nonatomic) TVRUIButton *skipForwardButton; // ivar: _skipForwardButton
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(void)_captionsTapped:(id)arg0 ;
-(void)_createButtons;
-(void)_sendButtonTapped:(NSInteger)arg0 ;
-(void)_skipBackwardTapped:(id)arg0 ;
-(void)_skipForwardTapped:(id)arg0 ;
-(void)updateCaptionState:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif