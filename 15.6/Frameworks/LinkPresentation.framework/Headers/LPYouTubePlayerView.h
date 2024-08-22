// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPYOUTUBEPLAYERVIEW_H
#define LPYOUTUBEPLAYERVIEW_H

@class UIView, NSString, NSMutableArray;
@protocol UIScrollViewDelegate, WKNavigationDelegate, WKUIDelegate, LPYouTubePlayerDelegate;


#import "LPYouTubePlayerViewFullScreenDelegate.h"
#import "LPYouTubePlayerWebView.h"
#import "LPYouTubePlayerScriptMessageHandler.h"

@interface LPYouTubePlayerView : UIView <UIScrollViewDelegate, WKNavigationDelegate, WKUIDelegate>

 {
    LPYouTubePlayerViewFullScreenDelegate *_fullScreenDelegate;
    LPYouTubePlayerWebView *_webView;
    NSString *_videoID;
    NSInteger _state;
    LPYouTubePlayerScriptMessageHandler *_scriptMessageHandler;
    BOOL _ready;
    NSMutableArray *_commandsPendingPlayerReadiness;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LPYouTubePlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (nonatomic) BOOL showsControls; // ivar: _showsControls
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) BOOL startsPlayingAutomatically; // ivar: _startsPlayingAutomatically
@property (readonly) Class superclass;


-(BOOL)_shouldUseElementFullScreen;
-(id)_parameterScript;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3 ;
-(void)_evaluatePlayerCommand:(id)arg0 ;
-(void)_webView:(id)arg0 navigation:(id)arg1 didFailProvisionalLoadInSubframe:(id)arg2 withError:(id)arg3 ;
-(void)createVideoPlayerView;
-(void)dealloc;
-(void)didReceiveScriptMessage:(id)arg0 ;
-(void)dispatchErrorWithCode:(NSInteger)arg0 ;
-(void)enterFullScreen;
-(void)exitFullScreen;
-(void)layoutSubviews;
-(void)loadVideoWithEmbedURL:(id)arg0 ;
-(void)loadVideoWithID:(id)arg0 ;
-(void)loadVideoWithURL:(id)arg0 ;
-(void)pause;
-(void)play;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)seekTo:(CGFloat)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 preferences:(id)arg2 decisionHandler:(id)arg3 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif