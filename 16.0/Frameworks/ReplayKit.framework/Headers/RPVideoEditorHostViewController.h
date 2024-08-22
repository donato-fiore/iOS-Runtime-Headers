// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPVIDEOEDITORHOSTVIEWCONTROLLER_H
#define RPVIDEOEDITORHOSTVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol RPVideoEditorExtensionHostProtocol;


#import "RPVideoEditorExtensionHostContext.h"
#import "RPPreviewViewController.h"

@interface RPVideoEditorHostViewController : UIRemoteViewController <RPVideoEditorExtensionHostProtocol>



@property (retain, nonatomic) RPVideoEditorExtensionHostContext *hostContext; // ivar: _hostContext
@property (weak, nonatomic) RPPreviewViewController *previewViewController; // ivar: _previewViewController


-(void)extensionDidFinishWithActivityTypes:(id)arg0 ;


@end


#endif