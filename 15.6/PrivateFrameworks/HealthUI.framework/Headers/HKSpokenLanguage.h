// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPOKENLANGUAGE_H
#define HKSPOKENLANGUAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKSpokenLanguage : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property NSUInteger languageCategoryType; // ivar: _languageCategoryType
@property (retain, nonatomic) NSString *languageInCurrentLocale; // ivar: _languageInCurrentLocale
@property (retain, nonatomic) NSString *languageInLanguageLocale; // ivar: _languageInLanguageLocale


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithLanguageIdentifier:(id)arg0 forCategory:(NSUInteger)arg1 ;
-(id)localizedStringForDisplay;


@end


#endif