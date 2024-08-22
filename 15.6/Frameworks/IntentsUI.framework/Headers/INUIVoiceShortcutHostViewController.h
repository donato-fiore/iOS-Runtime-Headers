// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUIVOICESHORTCUTHOSTVIEWCONTROLLER_H
#define INUIVOICESHORTCUTHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol INUIVoiceShortcutRemoteHostingInterface, INUIVoiceShortcutRemoteViewControllerDelegate;


#import "INUIVoiceShortcutHostContext.h"

@interface INUIVoiceShortcutHostViewController : UIRemoteViewController <INUIVoiceShortcutRemoteHostingInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INUIVoiceShortcutRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) INUIVoiceShortcutHostContext *serviceContext; // ivar: _serviceContext
@property (readonly) Class superclass;


+(id)_voiceShortcutUIExtension;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)getViewControllerCompletion:(id)arg0 ;
+(void)getViewControllerForAddingShortcut:(id)arg0 completion:(id)arg1 ;
+(void)getViewControllerForEditingVoiceShortcut:(id)arg0 completion:(id)arg1 ;
+(void)initialize;
-(id)remoteViewControllerProxy;
-(void)remoteViewControllerDidCancel;
-(void)remoteViewControllerDidCreateVoiceShortcut:(id)arg0 error:(id)arg1 ;
-(void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg0 ;
-(void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg0 error:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif