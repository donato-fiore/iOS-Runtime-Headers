// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBPDFSEARCHOPERATION_H
#define UIWEBPDFSEARCHOPERATION_H

@class NSOperation, NSMutableArray, UIPDFDocument, NSString;
@protocol UIWebPDFSearchOperationDelegate;



@interface UIWebPDFSearchOperation : NSOperation {
    NSMutableArray *_results;
    NSUInteger _totalResultsCount;
    BOOL _complete;
}


@property (readonly, nonatomic) NSUInteger currentPageIndex; // ivar: _pageIndex
@property (readonly, nonatomic) NSUInteger currentPageResultCount; // ivar: _currentPageResultCount
@property (nonatomic) CGFloat documentScale; // ivar: documentScale
@property (retain) UIPDFDocument *documentToSearch; // ivar: documentToSearch
@property (nonatomic) NSUInteger numberOfResultsToSkip; // ivar: _numberOfResultsToSkip
@property (nonatomic) NSUInteger resultLimit; // ivar: resultLimit
@property NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate; // ivar: searchDelegate
@property (retain, nonatomic) NSString *searchString; // ivar: searchString
@property (nonatomic) NSUInteger startingPageIndex; // ivar: startingPageIndex


-(BOOL)_hitSearchLimit;
-(id)init;
-(id)sanitizedAttributedStringForAttributedString:(id)arg0 ;
-(struct __CTFont *)_fontWithPDFFont:(struct CGPDFFont *)arg0 size:(CGFloat)arg1 ;
-(void)_notifyDelegateOfStatus;
-(void)_search;
-(void)cancel;
-(void)dealloc;
-(void)main;


@end


#endif