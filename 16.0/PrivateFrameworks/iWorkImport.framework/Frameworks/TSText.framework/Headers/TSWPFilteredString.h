// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPFILTEREDSTRING_H
#define TSWPFILTEREDSTRING_H

@class NSString;
@protocol TSWPTextSource;


#import "TSWPDeletionRangeMap.h"
#import "TSWPRangeArray.h"

@interface TSWPFilteredString : NSString <TSWPTextSource>

 {
    NSUInteger _length;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSWPDeletionRangeMap *rangeMap; // ivar: _rangeMap
@property (readonly, nonatomic) TSWPRangeArray *sourceRanges; // ivar: _sourceRanges
@property (retain, nonatomic) NSString *sourceString; // ivar: _sourceString
@property (readonly) Class superclass;


+(id)stringWithString:(id)arg0 ;
-(BOOL)adjustRangesByDelta:(NSInteger)arg0 startingAt:(NSUInteger)arg1 ;
-(BOOL)hasColumnBreakAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(NSUInteger)arg0 ;
-(NSInteger)hyphenationLocationBeforeIndex:(NSInteger)arg0 inRange:(struct _NSRange )arg1 locale:(id)arg2 hyphenChar:(*unsigned int)arg3 ;
-(NSUInteger)changeCount;
-(NSUInteger)charIndexMappedFromStorage:(NSUInteger)arg0 ;
-(NSUInteger)charIndexMappedToStorage:(NSUInteger)arg0 ;
-(NSUInteger)charIndexRemappedFromStorage:(NSUInteger)arg0 ;
-(NSUInteger)length;
-(NSUInteger)storageLength;
-(id)attachmentAtCharIndex:(NSUInteger)arg0 ;
-(id)attachmentOrFootnoteAtCharIndex:(NSUInteger)arg0 ;
-(id)characterStyleAtCharIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)characterStyleForDropCapAtCharIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)dropCapStyleAtCharIndex:(NSUInteger)arg0 ;
-(id)footnoteReferenceAtCharIndex:(NSUInteger)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 subrange:(struct _NSRange )arg1 removeRanges:(id)arg2 ;
-(id)objectAtLocationPriorToMappedCharIndex:(NSUInteger)arg0 forAttributeKind:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)paragraphStyleAtCharIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)smartFieldAtCharIndex:(NSUInteger)arg0 attributeKind:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)smartFieldsWithAttributeKind:(NSUInteger)arg0 intersectingRange:(struct _NSRange )arg1 ;
-(id)string;
-(struct _NSRange )charRangeMappedFromStorage:(struct _NSRange )arg0 ;
-(struct _NSRange )charRangeMappedToStorage:(struct _NSRange )arg0 ;
-(struct _NSRange )charRangeRemappedFromStorage:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeOfDropCapAtCharIndex:(NSUInteger)arg0 ;
-(struct _NSRange )wordAtCharIndex:(NSUInteger)arg0 includePreviousWord:(BOOL)arg1 ;
-(struct _NSRange )wordAtCharIndex:(NSUInteger)arg0 includePreviousWord:(BOOL)arg1 includeHyphenation:(BOOL)arg2 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)attributesAtCharIndex:(NSUInteger)arg0 attributesOfInterest:(*BOOL)arg1 attributesTable:(*id)arg2 effectiveRange:(struct _NSRange *)arg3 ;
-(void)checkDebug;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)updateStorageChangeCount;


@end


#endif