// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPVIDEOEDITOREXTENSIONHOSTCONTEXT_H
#define RPVIDEOEDITOREXTENSIONHOSTCONTEXT_H

@class NSExtensionContext;
@protocol RPVideoEditorExtensionHostProtocol;


#import "RPVideoEditorHostViewController.h"

@interface RPVideoEditorExtensionHostContext : NSExtensionContext <RPVideoEditorExtensionHostProtocol>



@property (weak, nonatomic) RPVideoEditorHostViewController *hostViewController; // ivar: _hostViewController


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)extensionObjectProxy;
-(void)extensionDidFinishWithActivityTypes:(id)arg0 ;


@end


#endif