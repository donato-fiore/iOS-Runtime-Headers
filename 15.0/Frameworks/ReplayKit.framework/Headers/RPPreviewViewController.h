// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPPREVIEWVIEWCONTROLLER_H
#define RPPREVIEWVIEWCONTROLLER_H

@class UIViewController, NSURL;
@protocol RPVideoEditorViewControllerDelegate, RPPreviewViewControllerDelegate;


#import "RPVideoEditorHostViewController.h"

@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate>



@property (retain, nonatomic) RPVideoEditorHostViewController *hostViewController; // ivar: _hostViewController
@property (retain, nonatomic) NSURL *movieURL; // ivar: _movieURL
@property (weak, nonatomic) NSObject<RPPreviewViewControllerDelegate> *previewControllerDelegate; // ivar: _previewControllerDelegate
@property (nonatomic) BOOL wasStatusBarHidden; // ivar: _wasStatusBarHidden


+(void)loadPreviewViewControllerWithMovieURL:(id)arg0 attachmentURL:(id)arg1 overrideShareMessage:(id)arg2 overrideTintColor:(id)arg3 completion:(id)arg4 ;
+(void)loadPreviewViewControllerWithMovieURL:(id)arg0 completion:(id)arg1 ;
+(void)viewControllerForExtension:(id)arg0 inputItems:(id)arg1 completionHandler:(id)arg2 ;
-(void)extensionDidFinishWithActivityTypes:(id)arg0 ;
-(void)videoEditor:(id)arg0 didFinishWithActivityTypes:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif