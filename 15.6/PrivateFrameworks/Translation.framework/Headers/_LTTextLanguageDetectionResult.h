// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTTEXTLANGUAGEDETECTIONRESULT_H
#define _LTTEXTLANGUAGEDETECTIONRESULT_H

@class NSLocale, NSCountedSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSLocale *dominantLocale; // ivar: _dominantLocale
@property (readonly, copy, nonatomic) NSCountedSet *localeDetectionCount; // ivar: _localeDetectionCount
@property (readonly, copy, nonatomic) NSCountedSet *unsupportedLanguageCounts; // ivar: _unsupportedLanguageCounts


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetectedLocales:(id)arg0 unknownLanguages:(id)arg1 ;
-(id)initWithDetectionCounts:(id)arg0 availableLocales:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif