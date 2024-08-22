// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPREVIEWEXTENSIONHOSTCONTEXT_H
#define QLPREVIEWEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol QLRemotePreviewService;


#import "QLRemoteItemViewController.h"

@interface QLPreviewExtensionHostContext : NSExtensionContext <QLRemotePreviewService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) QLRemoteItemViewController *remoteItemViewController; // ivar: _remoteItemViewController
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)protocolService;
-(id)protocolServiceWithErrorHandler:(id)arg0 ;
-(void)generatePreviewForURL:(id)arg0 completion:(id)arg1 ;
-(void)getARQLInlineProxy2WithCompletionHandler:(id)arg0 ;
-(void)getARQLInlineProxy3WithCompletionHandler:(id)arg0 ;
-(void)getARQLInlineProxyWithCompletionHandler:(id)arg0 ;
-(void)getPrinterProxyWithCompletionHandler:(id)arg0 ;
-(void)invalidateService;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)previewControllerDidUpdatePreferredContentSize:(id)arg0 ;
-(void)previewControllerDidUpdateTitle:(id)arg0 ;
-(void)previewControllerWantsFullScreen:(BOOL)arg0 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)previewWillAppear:(BOOL)arg0 ;
-(void)previewWillDisappear:(BOOL)arg0 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)setHostViewControllerProxy:(id)arg0 ;


@end


#endif