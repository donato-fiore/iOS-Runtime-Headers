// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFREADERENABLEDWEBVIEWCONTROLLER_H
#define SFREADERENABLEDWEBVIEWCONTROLLER_H

@class _WKRemoteObjectInterface, NSString;
@protocol SFAppBannerMetaTagContentObserver, _SFReaderControllerDelegate, WKNavigationDelegatePrivate, SFReaderEnabledWebViewControllerDelegate;


#import "SFWebViewController.h"
#import "_SFReaderController.h"

@interface SFReaderEnabledWebViewController : SFWebViewController <SFAppBannerMetaTagContentObserver, _SFReaderControllerDelegate, WKNavigationDelegatePrivate>

 {
    _WKRemoteObjectInterface *_appBannerMetaTagContentObserverInterface;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFReaderEnabledWebViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SFReaderController *readerController; // ivar: _readerController
@property (readonly) Class superclass;


-(void)_updateDarkModeEnabled;
-(void)createReaderWebViewForReaderController:(id)arg0 ;
-(void)dealloc;
-(void)didFindAppBannerWithContent:(id)arg0 ;
-(void)invalidate;
-(void)loadView;
-(void)readerController:(id)arg0 contentDidBecomeReadyWithDetectedLanguage:(id)arg1 ;
-(void)readerController:(id)arg0 didClickLinkInReaderWithRequest:(id)arg1 ;
-(void)readerController:(id)arg0 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg1 ;
-(void)readerController:(id)arg0 didDetermineAdditionalTextSamples:(id)arg1 dueTo:(NSInteger)arg2 ;
-(void)readerController:(id)arg0 didDetermineReaderAvailability:(id)arg1 dueTo:(NSInteger)arg2 ;
-(void)setUpReaderWithReaderWebView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)webView:(id)arg0 didCommitNavigation:(id)arg1 ;


@end


#endif