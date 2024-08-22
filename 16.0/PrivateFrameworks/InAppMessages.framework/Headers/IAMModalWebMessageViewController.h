// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAMMODALWEBMESSAGEVIEWCONTROLLER_H
#define IAMMODALWEBMESSAGEVIEWCONTROLLER_H

@class UIViewController, UIButton;
@protocol IAMViewControllerMetricsDelegate;


#import "IAMWebView.h"

@interface IAMModalWebMessageViewController : UIViewController

@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (weak, nonatomic) NSObject<IAMViewControllerMetricsDelegate> *metricsDelegate; // ivar: _metricsDelegate
@property (nonatomic) BOOL shouldDisplayCloseButton; // ivar: _shouldDisplayCloseButton
@property (retain, nonatomic) IAMWebView *webView; // ivar: _webView


-(id)initWithWebView:(id)arg0 ;
-(void)_handleCloseButtonTap:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif