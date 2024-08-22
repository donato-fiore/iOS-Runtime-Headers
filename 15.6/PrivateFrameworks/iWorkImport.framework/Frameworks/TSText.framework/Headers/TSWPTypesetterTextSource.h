// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTYPESETTERTEXTSOURCE_H
#define TSWPTYPESETTERTEXTSOURCE_H

@class NSString;
@protocol TSWPTextSource;

#import <Foundation/Foundation.h>

#import "TSWPRangeMap.h"

@interface TSWPTypesetterTextSource : NSObject <TSWPTextSource>

 {
    vector<unsigned long, std::allocator<unsigned long>> _spaceCharIndexes;
    vector<unsigned long, std::allocator<unsigned long>> _bidiCharIndexes;
    vector<bool, std::allocator<bool>> _bidiDirectionMarkIsRTLVector;
    id<TSWPTextSource> *_source;
    TSWPRangeMap *_rangeMap;
    NSUInteger _length;
    NSUInteger _storageChangeCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)adjustRangesByDelta:(NSInteger)arg0 startingAt:(NSUInteger)arg1 ;
-(BOOL)hasColumnBreakAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(NSUInteger)arg0 ;
-(NSInteger)hyphenationLocationBeforeIndex:(NSInteger)arg0 inRange:(struct _NSRange )arg1 locale:(id)arg2 hyphenChar:(*unsigned int)arg3 ;
-(NSUInteger)bidiCharIndexCount;
-(NSUInteger)changeCount;
-(NSUInteger)charIndexMappedFromStorage:(NSUInteger)arg0 ;
-(NSUInteger)charIndexMappedToStorage:(NSUInteger)arg0 ;
-(NSUInteger)charIndexRemappedFromStorage:(NSUInteger)arg0 ;
-(NSUInteger)length;
-(NSUInteger)spaceCharIndexCount;
-(NSUInteger)storageLength;
-(id)attachmentAtCharIndex:(NSUInteger)arg0 ;
-(id)attachmentOrFootnoteAtCharIndex:(NSUInteger)arg0 ;
-(id)characterStyleAtCharIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)characterStyleForDropCapAtCharIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)dropCapStyleAtCharIndex:(NSUInteger)arg0 ;
-(id)footnoteReferenceAtCharIndex:(NSUInteger)arg0 ;
-(id)initWithSource:(id)arg0 subRange:(struct _NSRange )arg1 ;
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
-(unsigned int)composedCharacterAtCharIndex:(NSUInteger)arg0 isSurrogatePair:(*BOOL)arg1 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)attributesAtCharIndex:(NSUInteger)arg0 attributesOfInterest:(BOOL)arg1 attributesTable:(id)arg2 effectiveRange:(struct _NSRange *)arg3 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;
-(void)updateStorageChangeCount;


@end


#endif