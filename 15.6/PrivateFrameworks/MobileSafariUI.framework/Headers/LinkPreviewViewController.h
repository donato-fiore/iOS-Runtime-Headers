// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LINKPREVIEWVIEWCONTROLLER_H
#define LINKPREVIEWVIEWCONTROLLER_H

@class UIViewController, _SFBrowserView, _SFDigitalHealthViewController, _SFLinkPreviewHeader;
@protocol _SFDigitalHealthHostingViewController;


#import "TabDocument.h"

@interface LinkPreviewViewController : UIViewController <_SFDigitalHealthHostingViewController>



@property (readonly, nonatomic) _SFBrowserView *browserView; // ivar: _browserView
@property (retain, nonatomic) _SFDigitalHealthViewController *digitalHealthViewController; // ivar: _digitalHealthViewController
@property (readonly, nonatomic) _SFLinkPreviewHeader *previewHeader;
@property (readonly, weak, nonatomic) TabDocument *previewTabDocument; // ivar: _previewTabDocument


-(id)initWithTabDocument:(id)arg0 ;
-(void)displayHostedDigitalHealthView;
-(void)loadView;
-(void)updatePreviewLoadingUIWithURLString:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willCommitPreviewedWebView;


@end


#endif