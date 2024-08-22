// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLREMOTEPREVIEWHOSTVIEWCONTROLLER_H
#define QLREMOTEPREVIEWHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSExtension;


#import "QLRemoteItemViewController.h"

@interface QLRemotePreviewHostViewController : UIRemoteViewController

@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (weak) QLRemoteItemViewController *remoteItemViewController; // ivar: _remoteItemViewController
@property (retain, nonatomic) id *request; // ivar: _request


-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif