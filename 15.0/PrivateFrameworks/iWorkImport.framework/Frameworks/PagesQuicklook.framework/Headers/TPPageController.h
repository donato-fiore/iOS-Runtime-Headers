// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPAGECONTROLLER_H
#define TPPAGECONTROLLER_H

@class _TtC6TSText16TSWPTopicNumbers, NSString, NSArray;
@protocol TSWPFootnoteMarkProvider;

#import <Foundation/Foundation.h>

#import "TPDocumentRoot.h"

@interface TPPageController : NSObject <TSWPFootnoteMarkProvider>



@property (readonly, nonatomic) _TtC6TSText16TSWPTopicNumbers *bodyTopicNumbers; // ivar: _bodyTopicNumbers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot; // ivar: _documentRoot
@property (readonly, nonatomic) NSUInteger firstPageIndexNeedingLayout; // ivar: _firstPageIndexNeedingLayout
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger lastLaidOutDocumentPageIndex; // ivar: _lastLaidOutDocumentPageIndex
@property (readonly, nonatomic) NSInteger nominalFootnoteKind;
@property (readonly, nonatomic) NSInteger nominalFootnoteNumbering;
@property (readonly, nonatomic) NSArray *numberOfPagesInEachSection; // ivar: _numberOfPagesInEachSection
@property (readonly, nonatomic) NSUInteger pageCount; // ivar: _pageCount
@property (readonly) Class superclass;


-(BOOL)isPaginationComplete;
-(BOOL)isPaginationCompleteThroughPageIndex:(NSUInteger)arg0 ;
-(BOOL)isPaginationInProgress;
-(BOOL)okToAnchorDrawable:(id)arg0 toPageIndex:(NSUInteger)arg1 ;
-(BOOL)okToAnchorDrawables:(id)arg0 toPageIndex:(NSUInteger)arg1 ;
-(BOOL)textIsVerticalForFootnoteReferenceStorage:(id)arg0 ;
-(NSUInteger)p_autoNumberForStorage:(id)arg0 ignoreDeletedFootnotes:(BOOL)arg1 footnoteKind:(NSInteger)arg2 ;
-(NSUInteger)pageIndexForAnchoredCharIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(NSUInteger)pageIndexForCharIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(NSUInteger)pageIndexFromCanvasPoint:(struct CGPoint )arg0 ;
-(NSUInteger)sectionIndexForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)markStringForFootnoteReferenceStorage:(id)arg0 ;
-(id)markStringForFootnoteReferenceStorage:(id)arg0 ignoreDeletedFootnotes:(BOOL)arg1 forceDocumentEndnotes:(BOOL)arg2 ;
-(id)pageInfoForPageIndex:(NSUInteger)arg0 ;
-(struct _NSRange )bodyRangeForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(struct _NSRange )documentPageRangeOfSectionIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(struct _NSRange )footnoteLayoutRangeForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(void)accquireLockAndPerformAction:(id)arg0 ;
-(void)dealloc;
-(void)paginateThroughPageIndex:(NSUInteger)arg0 forLayoutController:(id)arg1 ;
-(void)teardown;
-(void)withPageLayoutAtIndex:(NSUInteger)arg0 preferredLayoutController:(id)arg1 executeBlock:(id)arg2 ;


@end


#endif