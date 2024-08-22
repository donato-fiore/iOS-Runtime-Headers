// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHOWWEBPAGEACTIONUIKITUSERINTERFACE_H
#define WFSHOWWEBPAGEACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol WFWebViewControllerDelegate, SFSafariViewControllerDelegate, WFShowWebPageActionUserInterface;



@interface WFShowWebPageActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFWebViewControllerDelegate, SFSafariViewControllerDelegate, WFShowWebPageActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)safariViewControllerDidFinish:(id)arg0 ;
-(void)showRichText:(id)arg0 completion:(id)arg1 ;
-(void)showURL:(id)arg0 readerView:(BOOL)arg1 completion:(id)arg2 ;
-(void)webViewControllerDidFinish:(id)arg0 ;


@end


#endif