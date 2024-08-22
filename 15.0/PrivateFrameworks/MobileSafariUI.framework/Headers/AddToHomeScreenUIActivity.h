// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADDTOHOMESCREENUIACTIVITY_H
#define ADDTOHOMESCREENUIACTIVITY_H

@class UINavigationController, UIWebClip, _WKApplicationManifest, NSString;
@protocol WebClipDelegate, WebClipViewControllerDelegate;


#import "TabDocumentActivity.h"
#import "WebClipViewController.h"

@interface AddToHomeScreenUIActivity : TabDocumentActivity <WebClipDelegate, WebClipViewControllerDelegate>

 {
    UINavigationController *_wrappingNavigationController;
    WebClipViewController *_webClipViewController;
    UIWebClip *_webClip;
    BOOL _webClipConfigured;
    BOOL _waitingForSnapshot;
    _WKApplicationManifest *_manifest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_embeddedActivityViewController;
-(id)_manifestTitle;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)_createWebClip;
-(void)_finishPreparing;
-(void)_updateImageFromActiveTabDocument;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)dealloc;
-(void)prepareWithTabDocument:(id)arg0 completion:(id)arg1 ;
-(void)webClip:(id)arg0 iconRequestDidFinishWithImage:(id)arg1 precomposed:(BOOL)arg2 ;
-(void)webClip:(id)arg0 startupImageRequestDidFinishWithImage:(id)arg1 ;
-(void)webClip:(id)arg0 startupLandscapeImageRequestDidFinishWithImage:(id)arg1 ;
-(void)webClipViewController:(id)arg0 didFinishWithResult:(BOOL)arg1 ;


@end


#endif