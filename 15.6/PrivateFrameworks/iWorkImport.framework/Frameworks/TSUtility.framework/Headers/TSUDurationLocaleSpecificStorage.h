// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUDURATIONLOCALESPECIFICSTORAGE_H
#define TSUDURATIONLOCALESPECIFICSTORAGE_H

@class NSCharacterSet, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TSUDurationLocaleSpecificStorage : NSObject

@property (readonly) NSCharacterSet *alphabeticCharacterSet; // ivar: _alphabeticCharacterSet
@property (readonly) NSString *dayLongPluralString; // ivar: _dayLongPluralString
@property (readonly) NSString *dayLongSingularString; // ivar: _dayLongSingularString
@property (readonly) NSString *dayMediumPluralString; // ivar: _dayMediumPluralString
@property (readonly) NSString *dayMediumSingularString; // ivar: _dayMediumSingularString
@property (readonly) NSString *dayShortString; // ivar: _dayShortString
@property (readonly) NSCharacterSet *decimalDigitAndSeperatorsCharacterSet; // ivar: _decimalDigitAndSeperatorsCharacterSet
@property (readonly) NSCharacterSet *decimalDigitCharacterSet; // ivar: _decimalDigitCharacterSet
@property (readonly) NSCharacterSet *emptyCharacterSet; // ivar: _emptyCharacterSet
@property (readonly) NSArray *fullStopDurationUnitStrings; // ivar: _fullStopDurationUnitStrings
@property (readonly) NSString *hourLongPluralString; // ivar: _hourLongPluralString
@property (readonly) NSString *hourLongSingularString; // ivar: _hourLongSingularString
@property (readonly) NSString *hourMediumPluralString; // ivar: _hourMediumPluralString
@property (readonly) NSString *hourMediumSingularString; // ivar: _hourMediumSingularString
@property (readonly) NSString *hourShortString; // ivar: _hourShortString
@property (readonly) NSString *millisecondLongPluralString; // ivar: _millisecondLongPluralString
@property (readonly) NSString *millisecondLongSingularString; // ivar: _millisecondLongSingularString
@property (readonly) NSString *millisecondShortString; // ivar: _millisecondShortString
@property (readonly) NSCharacterSet *minusSignCharacterSet; // ivar: _minusSignCharacterSet
@property (readonly) NSString *minuteLongPluralString; // ivar: _minuteLongPluralString
@property (readonly) NSString *minuteLongSingularString; // ivar: _minuteLongSingularString
@property (readonly) NSString *minuteMediumPluralString; // ivar: _minuteMediumPluralString
@property (readonly) NSString *minuteMediumSingularString; // ivar: _minuteMediumSingularString
@property (readonly) NSString *minuteShortString; // ivar: _minuteShortString
@property (readonly) NSArray *multiWordDurationUnitStrings; // ivar: _multiWordDurationUnitStrings
@property (readonly) NSString *secondLongPluralString; // ivar: _secondLongPluralString
@property (readonly) NSString *secondLongSingularString; // ivar: _secondLongSingularString
@property (readonly) NSString *secondMediumPluralString; // ivar: _secondMediumPluralString
@property (readonly) NSString *secondMediumSingularString; // ivar: _secondMediumSingularString
@property (readonly) NSString *secondShortString; // ivar: _secondShortString
@property (readonly) NSCharacterSet *separatorPunctuationCharacterSet; // ivar: _separatorPunctuationCharacterSet
@property (readonly) NSCharacterSet *specialDurationFormatCharacters; // ivar: _specialDurationFormatCharacters
@property (readonly) NSString *weekLongPluralString; // ivar: _weekLongPluralString
@property (readonly) NSString *weekLongSingularString; // ivar: _weekLongSingularString
@property (readonly) NSString *weekMediumPluralString; // ivar: _weekMediumPluralString
@property (readonly) NSString *weekMediumSingularString; // ivar: _weekMediumSingularString
@property (readonly) NSString *weekShortString; // ivar: _weekShortString
@property (readonly) NSCharacterSet *whitespaceAndNewlineCharacterSet; // ivar: _whitespaceAndNewlineCharacterSet
@property (readonly) NSCharacterSet *whitespaceCharacterSet; // ivar: _whitespaceCharacterSet


+(id)localeSpecificStorageForLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(void)addDurationUnit:(id)arg0 ;
-(void)dealloc;


@end


#endif