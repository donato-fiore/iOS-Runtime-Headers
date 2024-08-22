// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBPDFSEARCHCONTROLLER_H
#define UIWEBPDFSEARCHCONTROLLER_H

@class NSOperationQueue, UIPDFDocument, NSArray, NSString;
@protocol UIWebPDFSearchOperationDelegate, UIWebPDFSearchControllerDelegate;

#import <Foundation/Foundation.h>


@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate>

 {
    NSUInteger _resultIndexWhenLimitHit;
    BOOL _notifiedThatSearchBegin;
    NSUInteger _pageIndexWhenLimitHit;
    NSOperationQueue *_searchQueue;
}


@property (nonatomic) CGFloat documentScale; // ivar: documentScale
@property (retain, nonatomic) UIPDFDocument *documentToSearch; // ivar: _documentToSearch
@property (readonly, nonatomic) BOOL paused;
@property (nonatomic) NSUInteger resultLimit; // ivar: resultLimit
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (nonatomic) NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate; // ivar: searchDelegate
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, nonatomic) BOOL searching;
@property (nonatomic) NSUInteger startingPageIndex; // ivar: startingPageIndex


-(NSUInteger)_actualStartingPageIndex;
-(id)init;
-(void)_clearSearchQueue;
-(void)cancel;
-(void)dealloc;
-(void)pause;
-(void)resume;
-(void)search:(id)arg0 ;
-(void)search:(id)arg0 hasPartialResults:(id)arg1 ;
-(void)searchDidBegin:(id)arg0 ;
-(void)searchDidFinish:(id)arg0 ;
-(void)searchDidTimeOut:(id)arg0 ;
-(void)searchLimitHit:(id)arg0 ;
-(void)searchWasCancelled:(id)arg0 ;


@end


#endif