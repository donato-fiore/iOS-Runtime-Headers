// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMFSTRINGSTEMMER_H
#define EMFSTRINGSTEMMER_H

@class NSLock, NSLocale;

#import <Foundation/Foundation.h>


@interface EMFStringStemmer : NSObject {
    *sb_stemmer _stemmer;
    NSLock *_stemmerLock;
}


@property (nonatomic) NSUInteger encoding; // ivar: _encoding
@property (readonly, retain, nonatomic) NSLocale *locale; // ivar: _locale


+(id)stemmerLanguageNameForLocale:(id)arg0 ;
+(id)supportedLanguageNames;
+(struct sb_stemmer *)_createSnowballStemmerForLocale:(id)arg0 ;
+(unsigned char)supportsLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)stemToken:(id)arg0 ;
-(id)stemTokens:(id)arg0 ;
-(void)dealloc;


@end


#endif