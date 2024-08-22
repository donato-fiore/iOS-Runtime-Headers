// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTETIQUETTESANITIZER_H
#define _LTETIQUETTESANITIZER_H

@class NSDictionary, NSLocale;

#import <Foundation/Foundation.h>


@interface _LTEtiquetteSanitizer : NSObject {
    NSDictionary *_replacementTree;
    NSLocale *_locale;
}




+(void)initialize;
-(id)initWithModelURL:(id)arg0 language:(id)arg1 ;
-(id)initWithReplacementTokenDictionary:(id)arg0 language:(id)arg1 ;
-(id)matchesForString:(id)arg0 ;
-(id)replacementStringForString:(id)arg0 forToken:(id)arg1 ;
-(id)sanitizedStringForString:(id)arg0 ;
-(id)stringByReplacingMatches:(id)arg0 inString:(id)arg1 ;
-(id)treeForReplacementTokens:(id)arg0 ;


@end


#endif