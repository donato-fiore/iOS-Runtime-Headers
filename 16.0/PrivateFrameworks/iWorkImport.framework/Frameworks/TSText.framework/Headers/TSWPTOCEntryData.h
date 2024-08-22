// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTOCENTRYDATA_H
#define TSWPTOCENTRYDATA_H

@class TSPObject, NSString, NSSet;
@protocol TSPCopying, TSSStyleClient;


#import "TSWPListStyle.h"
#import "TSWPParagraphStyle.h"
#import "TSWPStorage.h"

@interface TSWPTOCEntryData : TSPObject <TSPCopying, TSSStyleClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *heading; // ivar: _heading
@property (readonly, nonatomic) NSUInteger indexedListStart; // ivar: _indexedListStart
@property (readonly, nonatomic) TSWPListStyle *indexedListStyle; // ivar: _indexedListStyle
@property (readonly, nonatomic) NSUInteger indexedParagraphLevel; // ivar: _indexedParagraphLevel
@property (readonly, nonatomic) TSWPParagraphStyle *indexedStyle; // ivar: _indexedStyle
@property (readonly, copy, nonatomic) NSString *numberFormat; // ivar: _numberFormat
@property (readonly, nonatomic) NSUInteger pageNumber; // ivar: _pageNumber
@property (readonly, nonatomic) NSUInteger paragraphIndex; // ivar: _paragraphIndex
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (readonly, weak, nonatomic) TSWPStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


+(id)tocEntryDataWithStorage:(id)arg0 paragraphIndex:(NSUInteger)arg1 pageNumber:(NSUInteger)arg2 numberFormat:(id)arg3 heading:(id)arg4 indexedStyle:(id)arg5 indexedListStyle:(id)arg6 indexedListStart:(NSUInteger)arg7 indexedParagraphLevel:(NSUInteger)arg8 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithStorage:(id)arg0 paragraphIndex:(NSUInteger)arg1 pageNumber:(NSUInteger)arg2 numberFormat:(id)arg3 heading:(id)arg4 indexedStyle:(id)arg5 indexedListStyle:(id)arg6 indexedListStart:(NSUInteger)arg7 indexedParagraphLevel:(NSUInteger)arg8 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif