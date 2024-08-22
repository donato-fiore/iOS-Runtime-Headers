// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCOLLATIONLANGUAGE_H
#define CNCOLLATIONLANGUAGE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CNCollationLanguage : NSObject

@property (readonly) NSString *firstCharacterAfterLanguage; // ivar: _firstCharacterAfterLanguage
@property (readonly) NSString *lastCharacter; // ivar: _lastCharacter
@property (readonly) NSArray *sections; // ivar: _sections


-(id)initWithSections:(id)arg0 lastCharacter:(id)arg1 firstCharacterAfterLanguage:(id)arg2 ;


@end


#endif