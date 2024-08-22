// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBDEFAULTUIKITDELEGATE_H
#define WEBDEFAULTUIKITDELEGATE_H


#import <Foundation/Foundation.h>


@interface WebDefaultUIKitDelegate : NSObject



+(id)sharedUIKitDelegate;
-(BOOL)handleKeyAppCommandForCurrentEvent;
-(BOOL)handleKeyTextCommandForCurrentEvent;
-(BOOL)hasRichlyEditableSelection;
-(BOOL)performTwoStepDrop:(id)arg0 atDestination:(id)arg1 isMove:(BOOL)arg2 ;
-(BOOL)performsTwoStepPaste:(id)arg0 ;
-(BOOL)shouldRevealCurrentSelectionAfterInsertion;
-(BOOL)shouldSuppressPasswordEcho;
-(BOOL)webView:(id)arg0 shouldScrollToPoint:(struct CGPoint )arg1 forFrame:(id)arg2 ;
-(NSInteger)getPasteboardChangeCount;
-(NSInteger)getPasteboardItemsCount;
-(id)checkSpellingOfString:(id)arg0 ;
-(id)readDataFromPasteboard:(id)arg0 withIndex:(NSInteger)arg1 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)webView:(id)arg0 plugInViewWithArguments:(id)arg1 fromPlugInPackage:(id)arg2 ;
-(int)deviceOrientation;
-(struct CGPoint )contentsPointForWebView:(id)arg0 ;
-(struct CGPoint )interactionLocation;
-(struct CGRect )documentVisibleRectForWebView:(id)arg0 ;
-(void)_webthread_webView:(id)arg0 attachRootLayer:(id)arg1 ;
-(void)addInputString:(id)arg0 withFlags:(NSUInteger)arg1 ;
-(void)deleteFromInput;
-(void)deleteFromInputWithFlags:(NSUInteger)arg0 ;
-(void)revealedSelectionByScrollingWebFrame:(id)arg0 ;
-(void)showPlaybackTargetPicker:(BOOL)arg0 fromRect:(struct CGRect )arg1 ;
-(void)webView:(id)arg0 addMessageToConsole:(id)arg1 withSource:(id)arg2 ;
-(void)webView:(id)arg0 didChangeLocationWithinPageForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didCommitLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didCreateOrUpdateScrollingLayer:(id)arg1 withContentsLayer:(id)arg2 scrollSize:(id)arg3 forNode:(id)arg4 allowHorizontalScrollbar:(BOOL)arg5 allowVerticalScrollbar:(BOOL)arg6 ;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFinishDocumentLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFinishLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFirstLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg0 didHideFullScreenForPlugInView:(id)arg1 ;
-(void)webView:(id)arg0 didObserveDeferredContentChange:(int)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveViewportArguments:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 elementDidBlurNode:(id)arg1 ;
-(void)webView:(id)arg0 elementDidFocusNode:(id)arg1 ;
-(void)webView:(id)arg0 needsScrollNotifications:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 restoreStateFromHistoryItem:(id)arg1 forFrame:(id)arg2 force:(BOOL)arg3 ;
-(void)webView:(id)arg0 runOpenPanelForFileButtonWithResultListener:(id)arg1 configuration:(id)arg2 ;
-(void)webView:(id)arg0 saveStateToHistoryItem:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 willAddPlugInView:(id)arg1 ;
-(void)webView:(id)arg0 willCloseFrame:(id)arg1 ;
-(void)webView:(id)arg0 willRemoveScrollingLayer:(id)arg1 withContentsLayer:(id)arg2 forNode:(id)arg3 ;
-(void)webView:(id)arg0 willShowFullScreenForPlugInView:(id)arg1 ;
-(void)webViewDidCommitCompositingLayerChanges:(id)arg0 ;
-(void)webViewDidDrawTiles:(id)arg0 ;
-(void)webViewDidEndOverflowScroll:(id)arg0 ;
-(void)webViewDidLayout:(id)arg0 ;
-(void)webViewDidPreventDefaultForEvent:(id)arg0 ;
-(void)webViewDidReceiveMobileDocType:(id)arg0 ;
-(void)webViewDidRestoreFromPageCache:(id)arg0 ;
-(void)webViewDidStartOverflowScroll:(id)arg0 ;
-(void)writeDataToPasteboard:(id)arg0 ;


@end


#endif