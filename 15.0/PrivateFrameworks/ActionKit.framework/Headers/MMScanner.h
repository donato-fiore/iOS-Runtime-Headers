// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MMSCANNER_H
#define MMSCANNER_H

@class NSArray, NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface MMScanner : NSObject

@property (readonly, nonatomic) _NSRange currentLineRange;
@property (nonatomic) _NSRange currentRange; // ivar: _currentRange
@property (readonly, copy, nonatomic) NSArray *lineRanges; // ivar: _lineRanges
@property (nonatomic) NSUInteger location;
@property (nonatomic) NSUInteger rangeIndex; // ivar: _rangeIndex
@property (nonatomic) NSUInteger startLocation; // ivar: _startLocation
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSMutableArray *transactions; // ivar: _transactions


+(id)scannerWithString:(id)arg0 ;
+(id)scannerWithString:(id)arg0 lineRanges:(id)arg1 ;
-(BOOL)atBeginningOfLine;
-(BOOL)atEndOfLine;
-(BOOL)atEndOfString;
-(BOOL)matchString:(id)arg0 ;
-(NSUInteger)_locationOfCharacter:(unsigned short)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)skipCharactersFromSet:(id)arg0 ;
-(NSUInteger)skipCharactersFromSet:(id)arg0 max:(NSUInteger)arg1 ;
-(NSUInteger)skipEmptyLines;
-(NSUInteger)skipIndentationUpTo:(NSUInteger)arg0 ;
-(NSUInteger)skipNestedBracketsWithDelimiter:(unsigned short)arg0 ;
-(NSUInteger)skipToEndOfLine;
-(NSUInteger)skipToLastCharacterOfLine;
-(NSUInteger)skipWhitespace;
-(NSUInteger)skipWhitespaceAndNewlines;
-(id)_lineRangesForString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 lineRanges:(id)arg1 ;
-(id)nextWord;
-(id)nextWordWithCharactersFromSet:(id)arg0 ;
-(id)previousWord;
-(id)previousWordWithCharactersFromSet:(id)arg0 ;
-(unsigned short)nextCharacter;
-(unsigned short)previousCharacter;
-(void)advance;
-(void)advanceToNextLine;
-(void)beginTransaction;
-(void)commitTransaction:(BOOL)arg0 ;


@end


#endif