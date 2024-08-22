// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMPLANGUAGEAWARESTRING_H
#define AMPLANGUAGEAWARESTRING_H

@class NSAttributedString, NSArray, NSString;
@protocol AMPWritingDirectionContentProtocol;

#import <Foundation/Foundation.h>

#import "AMPLanguageAwareString.h"

@interface AMPLanguageAwareString : NSObject <AMPWritingDirectionContentProtocol>

 {
    ? baseAttributedString;
    ? $__lazy_storage_$_attributedString;
    ? cachedTextStorage;
    ? knownBaseWritingDirections;
    ? string;
    ? $__lazy_storage_$_localizedLowercase;
    ? $__lazy_storage_$_localizedUppercase;
    ? $__lazy_storage_$_newlinesCollapsedToSpace;
    ? $__lazy_storage_$_trimmed;
    ? numbers;
    ? paragraphs;
    ? words;
    ? $__lazy_storage_$_fullRange;
    ? $__lazy_storage_$_isEmpty;
    ? $__lazy_storage_$_utf16Count;
    ? $__lazy_storage_$_utf32Count;
    ? $__lazy_storage_$_characterCount;
    ? $__lazy_storage_$_thresholdBaseWritingDirection;
}


@property (nonatomic, retain) NSAttributedString *attributedString;
@property (nonatomic) _NSRange fullRange;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) NSInteger length;
@property (nonatomic, retain) AMPLanguageAwareString *localizedLowercase;
@property (nonatomic, retain) AMPLanguageAwareString *localizedUppercase;
@property (nonatomic, retain) AMPLanguageAwareString *newlinesCollapsedToSpace;
@property (nonatomic) NSInteger numberOfCharacters;
@property (nonatomic, readonly) NSArray *numbers;
@property (nonatomic, readonly) NSArray *paragraphs;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic) NSInteger thresholdBaseWritingDirection;
@property (nonatomic, retain) AMPLanguageAwareString *trimmed;
@property (nonatomic) NSInteger utf32Length;
@property (nonatomic, readonly) NSArray *words;


+(BOOL)alwaysGenerateAttributedString;
+(BOOL)keepStatisticsOnLanguageComponents;
+(id)AMPLanguageAwareStringEmpty;
+(id)delegate;
+(void)setAlwaysGenerateAttributedString:(BOOL)arg0 ;
+(void)setDelegate:(id)arg0 ;
+(void)setKeepStatisticsOnLanguageComponents:(BOOL)arg0 ;
-(NSInteger)baseWritingDirectionForCharacterAtLocation:(NSInteger)arg0 ;
-(NSInteger)writingDirectionOfLine:(NSInteger)arg0 maximumLinesShown:(NSInteger)arg1 withWidth:(CGFloat)arg2 lineBreakMode:(NSInteger)arg3 cacheLayoutInfo:(BOOL)arg4 ;
-(id)init;
-(id)initWithAttributedString:(id)arg0 baseParagraphStyle:(id)arg1 keepStatisticsOnLanguageComponents:(BOOL)arg2 ;
-(id)initWithLanguageAwareString:(id)arg0 attributes:(id)arg1 keepStatisticsOnLanguageComponents:(BOOL)arg2 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 baseParagraphStyle:(id)arg2 keepStatisticsOnLanguageComponents:(BOOL)arg3 ;
-(id)initWithString:(id)arg0 baseParagraphStyle:(id)arg1 generateAttributedString:(BOOL)arg2 keepStatisticsOnLanguageComponents:(BOOL)arg3 ;
-(id)writingDirectionsQuantities;


@end


#endif