// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17PROMOTEDCONTENTUI9WEBADVIEW_H
#define _TTC17PROMOTEDCONTENTUI9WEBADVIEW_H

@protocol WKUIDelegate, WKNavigationDelegate, APWebProcessDelegate;


#import "APPCPromotedContentView.h"

@interface _TtC17PromotedContentUI9WebAdView : APPCPromotedContentView <WKUIDelegate, WKNavigationDelegate, APWebProcessDelegate>

 {
    ? webView;
    ? videoProgressMetricThresholds;
    ? webViewDebugging;
    ? outstreamVisibleThreshold;
    ? nonOutstreamVisibleThreshold;
    ? mraidActionTypes;
    ? videoProgressMetricStatus;
    ? unfairLock;
    ? navigationCoordinator;
}


@property (nonatomic) CGRect frame;


-(id)webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3 ;
-(void)dealloc;
-(void)sizeCategoryChanged:(id)arg0 ;
-(void)webProcessDiagnosticJSOStatusReported:(id)arg0 status:(id)arg1 ;
-(void)webProcessMRAIDJSODidCallClose;
-(void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg0 ;
-(void)webProcessMRAIDJSODidCallExpand:(id)arg0 withMaximumWidth:(CGFloat)arg1 andHeight:(CGFloat)arg2 ;
-(void)webProcessMRAIDJSODidCallOpen:(id)arg0 ;
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)webProcessVideoAdJSOCreativeViewLoaded;
-(void)webProcessVideoAdJSODidCallAudioMuted:(float)arg0 ;
-(void)webProcessVideoAdJSODidCallAudioUnmuted:(float)arg0 volume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)arg0 volume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallFullScreenTapped:(float)arg0 volume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)arg0 volume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)arg0 ;
-(void)webProcessVideoAdJSODidCallPlayPaused:(float)arg0 volume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallPlayProgressed:(float)arg0 volume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallPlayResumed:(float)arg0 volume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallPlayStarted:(float)arg0 volume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallSkipAdTapped:(float)arg0 volume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallVideoTapped:(float)arg0 volume:(float)arg1 ;
-(void)webProcessVideoAdJSODidCallViewabilityChanged:(BOOL)arg0 playTime:(float)arg1 volume:(float)arg2 ;
-(void)webProcessVideoAdJSODidCallVolumeChanged:(float)arg0 playTime:(float)arg1 ;
-(void)webProcessVideoAdJSOGetVideoInfo:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif