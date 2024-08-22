// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LINKPREVIEWVIEWCONTROLLER_H
#define LINKPREVIEWVIEWCONTROLLER_H

@class UIViewController, _SFBrowserView, NSString, _SFLinkPreviewHeader, SFScreenTimeOverlayViewController;
@protocol WBSFluidProgressControllerWindowDelegate, SFScreenTimeOverlayHostingViewController;


#import "TabDocument.h"

@interface LinkPreviewViewController : UIViewController <WBSFluidProgressControllerWindowDelegate, SFScreenTimeOverlayHostingViewController>



@property (readonly, nonatomic) _SFBrowserView *browserView; // ivar: _browserView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SFLinkPreviewHeader *previewHeader;
@property (readonly, weak, nonatomic) TabDocument *previewTabDocument; // ivar: _previewTabDocument
@property (retain, nonatomic) SFScreenTimeOverlayViewController *screenTimeOverlayViewController; // ivar: _screenTimeOverlayViewController
@property (readonly) Class superclass;


-(id)currentFluidProgressStateSource;
-(id)initWithTabDocument:(id)arg0 ;
-(void)displayHostedScreenTimeView;
-(void)fluidProgressRocketAnimationDidComplete;
-(void)loadView;
-(void)updatePreviewLoadingUIWithURLString:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willCommitPreviewedWebView;


@end


#endif