// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKAPPLICATIONSTATETRACKINGVIEW_H
#define WKAPPLICATIONSTATETRACKINGVIEW_H

@class UIView;



@interface WKApplicationStateTrackingView : UIView {
    WeakObjCPtr<WKWebView> _webViewToTrack;
    unique_ptr<WebKit::ApplicationStateTracker, std::default_delete<WebKit::ApplicationStateTracker>> _applicationStateTracker;
}


@property (readonly, nonatomic) UIView *_contentView;
@property (readonly, nonatomic) BOOL isBackground;


-(id)initWithFrame:(struct CGRect )arg0 webView:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)_applicationDidFinishSnapshottingAfterEnteringBackground;
-(void)_applicationWillEnterForeground;
-(void)_didCompleteSnapshotSequence;
-(void)_willBeginSnapshotSequence;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif