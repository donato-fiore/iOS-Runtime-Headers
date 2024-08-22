// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INUIEDITVOICESHORTCUTVIEWCONTROLLER_H
#define INUIEDITVOICESHORTCUTVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, NSString;
@protocol INUIVoiceShortcutRemoteViewControllerDelegate, _UIRemoteViewControllerContaining, INUIEditVoiceShortcutViewControllerDelegate;


#import "INUIVoiceShortcutHostViewController.h"

@interface INUIEditVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerDelegate, _UIRemoteViewControllerContaining>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (retain, nonatomic) UIViewController *currentChildViewController; // ivar: _currentChildViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INUIEditVoiceShortcutViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController; // ivar: _remoteHostViewController
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithVoiceShortcut:(id)arg0 ;
-(void)loadView;
-(void)remoteViewControllerDidCancel;
-(void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg0 ;
-(void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg0 error:(id)arg1 ;
-(void)setChildViewController:(id)arg0 ;


@end


#endif