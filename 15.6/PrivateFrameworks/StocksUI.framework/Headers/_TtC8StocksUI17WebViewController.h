// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8STOCKSUI17WEBVIEWCONTROLLER_H
#define _TTC8STOCKSUI17WEBVIEWCONTROLLER_H

@class SFSafariViewController;



@interface _TtC8StocksUI17WebViewController : SFSafariViewController {
    ? styler;
    ? webViewCoordinator;
    ? navigator;
    ? session;
}




-(id)initWithURL:(id)arg0 configuration:(id)arg1 ;
-(id)initWithURL:(id)arg0 entersReaderIfAvailable:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif