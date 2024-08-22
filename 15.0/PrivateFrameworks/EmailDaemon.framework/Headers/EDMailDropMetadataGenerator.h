// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDMAILDROPMETADATAGENERATOR_H
#define EDMAILDROPMETADATAGENERATOR_H

@class EFPromise, NSString, NSMutableArray, WKWebView;
@protocol WKNavigationDelegate;

#import <Foundation/Foundation.h>


@interface EDMailDropMetadataGenerator : NSObject <WKNavigationDelegate>



@property (retain, nonatomic) EFPromise *activePromise; // ivar: _activePromise
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *scriptHandlers; // ivar: _scriptHandlers
@property (readonly) Class superclass;
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(BOOL)_shouldSearchForMailDropNodesInFileURL:(id)arg0 ;
// -(id)withTimeout:(CGFloat)arg0 do:(id)arg1 completion:(unk)arg2  ;
-(void)_addScriptHandlerForKey:(id)arg0 handler:(id)arg1 ;
-(void)_findMailDropNodesInFileURL:(id)arg0 promise:(id)arg1 ;
-(void)dealloc;
-(void)generateMailDropMetadataForContentURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)insertMailDropAttachmentViewForContentURL:(id)arg0 HTMLByContentID:(id)arg1 completionHandler:(id)arg2 ;
-(void)tearDownWebView;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif