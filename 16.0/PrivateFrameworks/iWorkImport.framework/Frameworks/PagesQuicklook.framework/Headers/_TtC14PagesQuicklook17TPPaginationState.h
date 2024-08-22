// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14PAGESQUICKLOOK17TPPAGINATIONSTATE_H
#define _TTC14PAGESQUICKLOOK17TPPAGINATIONSTATE_H

@class TSWPStorage, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TPPageIndexPath.h"
#import "TPSection.h"
#import "TPSectionHint.h"

@interface _TtC14PagesQuicklook17TPPaginationState : NSObject <NSCopying>

 {
    ? _pageIndexPath;
    ? _documentPageIndex;
    ? _lastLaidOutSectionIndex;
    ? _bodyLayoutState;
    ? _bodyCharIndex;
    ? _footnoteIndex;
    ? _sectionHints;
}


@property (nonatomic) NSUInteger bodyCharIndex;
@property (nonatomic) *void bodyLayoutState;
@property (nonatomic, readonly) TSWPStorage *bodyStorage; // ivar: bodyStorage
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) NSUInteger documentPageIndex;
@property (nonatomic) NSUInteger footnoteIndex;
@property (nonatomic) BOOL isInvalid; // ivar: isInvalid
@property (nonatomic, readonly) BOOL isPaginationComplete;
@property (nonatomic, readonly) NSUInteger lastLaidOutDocumentPageIndex;
@property (nonatomic) NSUInteger lastLaidOutSectionIndex;
@property (nonatomic, readonly) BOOL onLastSection;
@property (nonatomic, readonly) NSUInteger pageHintCount;
@property (nonatomic) NSUInteger pageIndex;
@property (nonatomic, retain) TPPageIndexPath *pageIndexPath;
@property (nonatomic, readonly) TPSection *section;
@property (nonatomic, readonly) _NSRange sectionCharRange;
@property (nonatomic, readonly) TPSectionHint *sectionHint;
@property (nonatomic, copy) NSArray *sectionHints;
@property (nonatomic) NSUInteger sectionIndex;


-(BOOL)isPaginationCompleteThroughDocumentPageIndex:(NSUInteger)arg0 ;
-(BOOL)isPaginationCompleteUpToDocumentPageIndex:(NSUInteger)arg0 ;
-(id)copyForCaching;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithBodyStorage:(id)arg0 ;
-(id)pageHintForPageIndex:(NSUInteger)arg0 ;
-(id)pageIndexPathForPageIndex:(NSUInteger)arg0 ;
-(struct _NSRange )footnoteRangeInBodyTextRange:(struct _NSRange )arg0 ;
-(void)addSectionHint:(id)arg0 ;
-(void)advancePageIndex;
-(void)advanceSectionIndex;
-(void)backUpToPageIndexPath:(id)arg0 documentPageIndex:(NSUInteger)arg1 ;
-(void)removeAllSectionHints;
-(void)restartPaginationFromFirstPage;
-(void)restartPaginationFromPageIndexPath:(id)arg0 documentPageIndex:(NSUInteger)arg1 ;
-(void)trimSectionHintsFromIndex:(NSUInteger)arg0 ;


@end


#endif