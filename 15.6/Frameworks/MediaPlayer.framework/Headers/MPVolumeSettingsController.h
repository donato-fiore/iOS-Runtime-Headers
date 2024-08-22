// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPVOLUMESETTINGSCONTROLLER_H
#define MPVOLUMESETTINGSCONTROLLER_H

@class UIViewController, NSString, UIAlertController, UIWindow;



@interface MPVolumeSettingsController : UIViewController {
    NSString *_audioCategory;
    UIAlertController *_alertController;
}


@property (weak, nonatomic) UIWindow *hostingWindow; // ivar: _hostingWindow
@property (weak, nonatomic) UIWindow *previousWindow; // ivar: _previousWindow


-(id)initWithAudioCategory:(id)arg0 ;
-(void)_flip;
-(void)_keyWindowDidChange:(id)arg0 ;
-(void)dealloc;
-(void)dismissAlertController;
-(void)presentAlertControllerInWindow:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif