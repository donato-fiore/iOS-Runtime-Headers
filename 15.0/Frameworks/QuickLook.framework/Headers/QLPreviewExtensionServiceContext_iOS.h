// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPREVIEWEXTENSIONSERVICECONTEXT_IOS_H
#define QLPREVIEWEXTENSIONSERVICECONTEXT_IOS_H

@class NSExtensionContext, NSString;
@protocol QLRemotePreviewHost;



@interface QLPreviewExtensionServiceContext_iOS : NSExtensionContext <QLRemotePreviewHost>

 {
    BOOL _isObservingPreviewController;
    id *_contents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)previewViewController;
-(id)previewingController;
-(id)protocolHost;
-(void)_startObservingPreviewControllerAttributeChanges;
-(void)_stopObservingPreviewControllerAttributeChanges;
-(void)dealloc;
-(void)generatePreviewForURL:(id)arg0 completion:(id)arg1 ;
-(void)getARQLInlineProxy2WithCompletionHandler:(id)arg0 ;
-(void)getARQLInlineProxyWithCompletionHandler:(id)arg0 ;
-(void)getPrinterProxyWithCompletionHandler:(id)arg0 ;
-(void)invalidateService;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
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