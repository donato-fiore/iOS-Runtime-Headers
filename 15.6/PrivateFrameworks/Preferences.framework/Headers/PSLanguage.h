// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSLANGUAGE_H
#define PSLANGUAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PSLanguage : NSObject

@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSString *languageName; // ivar: _languageName
@property (retain, nonatomic) NSString *localizedLanguageName; // ivar: _localizedLanguageName


+(id)languageWithCode:(id)arg0 name:(id)arg1 localizedName:(id)arg2 ;
-(BOOL)displayNamesAreEqual;


@end


#endif