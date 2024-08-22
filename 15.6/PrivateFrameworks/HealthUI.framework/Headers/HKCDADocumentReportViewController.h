// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCDADOCUMENTREPORTVIEWCONTROLLER_H
#define HKCDADOCUMENTREPORTVIEWCONTROLLER_H

@class UIView, NSData, NSMutableArray, WKWebView;
@protocol HKIncrementalSearchBarDelegate;


#import "HKViewController.h"
#import "HKIncrementalSearchBar.h"

@interface HKCDADocumentReportViewController : HKViewController <HKIncrementalSearchBarDelegate>



@property (nonatomic) NSInteger currentHighlightedHit; // ivar: _currentHighlightedHit
@property (readonly, nonatomic) UIView *disclosureView; // ivar: _disclosureView
@property (readonly) NSData *documentData; // ivar: _documentData
@property (nonatomic) NSInteger hitCount; // ivar: _hitCount
@property (readonly, nonatomic) HKIncrementalSearchBar *incrementalSearchBar; // ivar: _incrementalSearchBar
@property (nonatomic) BOOL javascriptIsRunning; // ivar: _javascriptIsRunning
@property (retain, nonatomic) NSMutableArray *javascriptOperationQueue; // ivar: _javascriptOperationQueue
@property (nonatomic) BOOL javascriptSearchInstalled; // ivar: _javascriptSearchInstalled
@property (nonatomic) BOOL searchInProgress; // ivar: _searchInProgress
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


+(id)xmlToHTMLTranslator;
-(NSUInteger)supportedInterfaceOrientations;
-(id)buildDisclosureView;
-(id)initWithDocumentData:(id)arg0 ;
-(void)_finishJavascriptOperation;
-(void)_incrementCurrentHitBy:(NSInteger)arg0 ;
-(void)_runJavascript:(id)arg0 clearQueuedCommands:(BOOL)arg1 completion:(id)arg2 ;
-(void)_runJavascriptOperation:(id)arg0 clearQueuedCommands:(BOOL)arg1 ;
-(void)_translateXMLInBackground;
-(void)_updateMatchDisplayString:(NSInteger)arg0 numMatches:(NSInteger)arg1 ;
-(void)_updateSearchBarState;
-(void)_updateSearchHits:(NSInteger)arg0 ;
-(void)hideDisclosure:(id)arg0 ;
-(void)searchBarChangeSearch:(id)arg0 searchString:(id)arg1 ;
-(void)searchBarDoneAction:(id)arg0 ;
-(void)searchBarDownAction:(id)arg0 ;
-(void)searchBarUpAction:(id)arg0 ;
-(void)startIncrementalSearch;
-(void)viewDidLoad;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif