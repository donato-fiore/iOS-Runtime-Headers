// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUIADDVOICESHORTCUTVIEWCONTROLLER_H
#define INUIADDVOICESHORTCUTVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, INShortcut, NSString;
@protocol INUIVoiceShortcutRemoteViewControllerDelegate, _UIRemoteViewControllerContaining, INUIAddVoiceShortcutViewControllerDelegate;


#import "INUIVoiceShortcutHostViewController.h"

@interface INUIAddVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerDelegate, _UIRemoteViewControllerContaining>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (retain, nonatomic) INShortcut *_shortcut; // ivar: _shortcut
@property (retain, nonatomic) UIViewController *currentChildViewController; // ivar: _currentChildViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INUIAddVoiceShortcutViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController; // ivar: _remoteHostViewController
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithShortcut:(id)arg0 ;
-(void)loadView;
-(void)remoteViewControllerDidCancel;
-(void)remoteViewControllerDidCreateVoiceShortcut:(id)arg0 error:(id)arg1 ;
-(void)setChildViewController:(id)arg0 ;


@end


#endif