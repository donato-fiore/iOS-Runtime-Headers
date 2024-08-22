// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLPDFFINDONPAGENAVIGATOR_H
#define QLPDFFINDONPAGENAVIGATOR_H

@class NSString, QLDelegateProxy<PDFViewDelegatePrivate>, NSArray, PDFView;
@protocol PDFViewDelegatePrivate, QLFindOnPageNavigator, QLFindOnPageNavigatorInterfaceHandler, QLFindOnPageStringMatcher;

#import <Foundation/Foundation.h>


@interface QLPDFFindOnPageNavigator : NSObject <PDFViewDelegatePrivate, QLFindOnPageNavigator>



@property (nonatomic) NSUInteger currentResultIndex; // ivar: _currentResultIndex
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) QLDelegateProxy<PDFViewDelegatePrivate> *delegateProxy; // ivar: _delegateProxy
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<QLFindOnPageNavigatorInterfaceHandler> *interfaceHandler; // ivar: _interfaceHandler
@property (nonatomic) BOOL isSearching; // ivar: _isSearching
@property (nonatomic) CGRect keyboardFrame; // ivar: _keyboardFrame
@property (retain, nonatomic) NSArray *matches; // ivar: _matches
@property (nonatomic) NSUInteger numberOfResults; // ivar: _numberOfResults
@property (nonatomic) NSInteger originalKeyboardDismissMode; // ivar: _originalKeyboardDismissMode
@property (retain, nonatomic) PDFView *pdfView; // ivar: _pdfView
@property (readonly, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSObject<QLFindOnPageStringMatcher> *stringMatcher; // ivar: _stringMatcher
@property (readonly) Class superclass;


-(BOOL)_isDoneSearching;
-(BOOL)_previousSearchIsStillValidForString:(id)arg0 withOptions:(NSInteger)arg1 maximumCount:(NSUInteger)arg2 ;
-(id)initWithStringMatcher:(id)arg0 pdfView:(id)arg1 ;
-(void)_didFinishWithMatches:(id)arg0 forString:(id)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg0 ;
-(void)_navigateToFirst;
-(void)_navigateToMatchAtIndex:(NSUInteger)arg0 ;
-(void)_navigateToNext:(BOOL)arg0 ;
-(void)_navigateToResultForString:(id)arg0 withOptions:(NSUInteger)arg1 maximumCount:(NSUInteger)arg2 toNext:(BOOL)arg3 ;
-(void)_notifyInterfaceHandlerOfCurrentState;
-(void)_resetNavigation;
-(void)_resetOriginalDelegate;
-(void)_scrollToSelection:(id)arg0 ;
-(void)_setAsDelegate;
-(void)clearNavigation;
-(void)dealloc;
-(void)navigateToNextResultForString:(id)arg0 withOptions:(NSUInteger)arg1 maximumCount:(NSUInteger)arg2 ;
-(void)navigateToPreviousResultForString:(id)arg0 withOptions:(NSUInteger)arg1 maximumCount:(NSUInteger)arg2 ;
-(void)prepareNavigation;


@end


#endif