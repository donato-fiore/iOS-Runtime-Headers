// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPFILTEREDSTORAGE_H
#define TSWPFILTEREDSTORAGE_H

@class NSString;
@protocol TSWPTextSource;

#import <Foundation/Foundation.h>

#import "TSWPStorage.h"
#import "TSWPDeletionRangeMap.h"

@interface TSWPFilteredStorage : NSObject <TSWPTextSource>

 {
    TSWPStorage *_storage;
    TSWPDeletionRangeMap *_rangeMap;
    NSUInteger _length;
    NSUInteger _storageLength;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)adjustRangesByDelta:(NSInteger)arg0 ;
-(BOOL)hasColumnBreakAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)hasSmartFieldsInRange:(struct _NSRange )arg0 ;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(NSUInteger)arg0 ;
-(CGFloat)filteredCoreTextAttributesFontScaleEffectiveRange:(struct _NSRange *)arg0 filterDelegate:(id)arg1 ;
-(NSInteger)hyphenationLocationBeforeIndex:(NSInteger)arg0 inRange:(struct _NSRange )arg1 locale:(struct __CFLocale *)arg2 hyphenChar:(*unsigned int)arg3 ;
-(NSUInteger)charIndexMappedFromStorage:(NSUInteger)arg0 ;
-(NSUInteger)charIndexMappedToStorage:(NSUInteger)arg0 ;
-(NSUInteger)charIndexRemappedFromStorage:(NSUInteger)arg0 ;
-(NSUInteger)length;
-(NSUInteger)nextCharacterIndex:(NSUInteger)arg0 ;
-(NSUInteger)previousCharacterIndex:(NSUInteger)arg0 ;
-(NSUInteger)storageLength;
-(id)attachmentAtCharIndex:(NSUInteger)arg0 ;
-(id)attachmentOrFootnoteAtCharIndex:(NSUInteger)arg0 ;
-(id)characterStyleAtCharIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)footnoteReferenceAtCharIndex:(NSUInteger)arg0 ;
-(id)initWithStorage:(id)arg0 subRange:(struct _NSRange )arg1 ;
-(id)initWithStorage:(id)arg0 subRange:(struct _NSRange )arg1 removeRanges:(id)arg2 ;
-(id)objectAtLocationPriorToMappedCharIndex:(NSUInteger)arg0 forAttributeKind:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)paragraphStyleAtCharIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)smartFieldAtCharIndex:(NSUInteger)arg0 attributeKind:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)smartFieldsWithAttributeKind:(unsigned int)arg0 intersectingRange:(struct _NSRange )arg1 ;
-(id)string;
-(id)substringWithRange:(struct _NSRange )arg0 ;
-(struct _NSRange )charRangeMappedFromStorage:(struct _NSRange )arg0 ;
-(struct _NSRange )charRangeMappedToStorage:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeForSelectionAtCharIndex:(NSUInteger)arg0 caretIndex:(NSUInteger)arg1 ;
-(struct _NSRange )scanBackwardForWordAtCharIndex:(NSUInteger)arg0 ;
-(struct _NSRange )whiteSpaceRangeAtCharIndex:(NSUInteger)arg0 includingBreaks:(BOOL)arg1 ;
-(struct _NSRange )wordAtCharIndex:(NSUInteger)arg0 includePreviousWord:(BOOL)arg1 ;
-(struct __CFDictionary *)createFilteredCoreTextAttributes:(struct __CFDictionary *)arg0 effectiveRange:(struct _NSRange *)arg1 filterDelegate:(id)arg2 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)attributesAtCharIndex:(NSUInteger)arg0 attributesOfInterest:(BOOL)arg1 attributesTable:(id)arg2 effectiveRange:(struct _NSRange *)arg3 ;
-(void)dealloc;
-(void)enumerateSmartFieldsWithAttributeKind:(unsigned int)arg0 inRange:(struct _NSRange )arg1 usingBlock:(id)arg2 ;
-(void)enumerateWithAttributeKind:(unsigned int)arg0 inRange:(struct _NSRange )arg1 usingBlock:(id)arg2 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif