// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBDEFAULTEDITINGDELEGATE_H
#define WEBDEFAULTEDITINGDELEGATE_H


#import <Foundation/Foundation.h>


@interface WebDefaultEditingDelegate : NSObject



+(id)sharedEditingDelegate;
-(BOOL)webView:(id)arg0 doCommandBySelector:(SEL)arg1 ;
-(BOOL)webView:(id)arg0 shouldApplyStyle:(id)arg1 toElementsInDOMRange:(id)arg2 ;
-(BOOL)webView:(id)arg0 shouldBeginEditingInDOMRange:(id)arg1 ;
-(BOOL)webView:(id)arg0 shouldChangeSelectedDOMRange:(id)arg1 toDOMRange:(id)arg2 affinity:(NSUInteger)arg3 stillSelecting:(BOOL)arg4 ;
-(BOOL)webView:(id)arg0 shouldChangeTypingStyle:(id)arg1 toStyle:(id)arg2 ;
-(BOOL)webView:(id)arg0 shouldDeleteDOMRange:(id)arg1 ;
-(BOOL)webView:(id)arg0 shouldEndEditingInDOMRange:(id)arg1 ;
-(BOOL)webView:(id)arg0 shouldInsertNode:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(NSInteger)arg3 ;
-(BOOL)webView:(id)arg0 shouldInsertText:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(NSInteger)arg3 ;
-(BOOL)webView:(id)arg0 shouldMoveRangeAfterDelete:(id)arg1 replacingRange:(id)arg2 ;
-(id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg0 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)undoManagerForWebView:(id)arg0 ;
-(void)webViewDidBeginEditing:(id)arg0 ;
-(void)webViewDidChange:(id)arg0 ;
-(void)webViewDidChangeSelection:(id)arg0 ;
-(void)webViewDidChangeTypingStyle:(id)arg0 ;
-(void)webViewDidEndEditing:(id)arg0 ;


@end


#endif