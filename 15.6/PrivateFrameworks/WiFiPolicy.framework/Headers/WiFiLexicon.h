// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFILEXICON_H
#define WIFILEXICON_H

@class NSMutableDictionary, NSCharacterSet, NSSet;

#import <Foundation/Foundation.h>


@interface WiFiLexicon : NSObject {
    *_LXLexicon _lexiconEnglish;
    *_LXLexicon _lexiconUserLocale;
}


@property (retain, nonatomic) NSMutableDictionary *stringCache; // ivar: _stringCache
@property (retain, nonatomic) NSCharacterSet *tokenizationCharacterSet; // ivar: _tokenizationCharacterSet
@property (retain, nonatomic) NSCharacterSet *tokenizationCharacterSetWithoutUpperCase; // ivar: _tokenizationCharacterSetWithoutUpperCase
@property (retain, nonatomic) NSSet *unwantedEnglishWords; // ivar: _unwantedEnglishWords


-(BOOL)stringContainsUnwantedWords:(id)arg0 ;
-(id)_tokenizeStringForSpecialCharacters:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif