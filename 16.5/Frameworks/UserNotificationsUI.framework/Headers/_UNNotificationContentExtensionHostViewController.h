// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UNNOTIFICATIONCONTENTEXTENSIONHOSTVIEWCONTROLLER_H
#define _UNNOTIFICATIONCONTENTEXTENSIONHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSExtension, NSString;
@protocol NSCopying;



@interface _UNNotificationContentExtensionHostViewController : UIRemoteViewController

@property (weak, nonatomic) NSExtension *extension; // ivar: _extension
@property (copy, nonatomic) NSObject<NSCopying> *extensionRequestIdentifier; // ivar: _extensionRequestIdentifier
@property (copy, nonatomic) NSString *notificationRequestIdentifier; // ivar: _notificationRequestIdentifier


-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(BOOL)_canShowWhileLocked;
-(id)description;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif