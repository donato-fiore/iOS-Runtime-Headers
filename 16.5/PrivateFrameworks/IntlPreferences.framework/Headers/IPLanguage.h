// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPLANGUAGE_H
#define IPLANGUAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "IPLanguage.h"

@interface IPLanguage : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *localizedStringForName; // ivar: _localizedStringForName
@property (readonly, nonatomic) IPLanguage *minimizedLanguage;
@property (retain, nonatomic) NSString *name; // ivar: _name


+(id)IPLanguagesWithLanguages:(id)arg0 normalize:(BOOL)arg1 ;
+(id)languageWithIdentifier:(id)arg0 ;
+(id)languageWithIdentifier:(id)arg0 normalize:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif