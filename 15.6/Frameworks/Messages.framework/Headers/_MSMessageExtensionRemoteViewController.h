// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MSMESSAGEEXTENSIONREMOTEVIEWCONTROLLER_H
#define _MSMESSAGEEXTENSIONREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSUUID, NSExtension;



@interface _MSMessageExtensionRemoteViewController : UIRemoteViewController

@property (nonatomic, getter=isReadyToDisplay) BOOL readyToDisplay; // ivar: _readyToDisplay
@property (retain, nonatomic) NSUUID *requestUUID; // ivar: _requestUUID
@property (weak, nonatomic) NSExtension *weakExtension; // ivar: _weakExtension


-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(void)dealloc;
-(void)viewDidLayoutSubviews;


@end


#endif