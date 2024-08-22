// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGLEXICONML_H
#define SGLEXICONML_H


#import <Foundation/Foundation.h>


@interface SGLexiconML : NSObject



+(BOOL)profanityInTokens:(id)arg0 forLocaleIdentifier:(id)arg1 ;
+(unsigned int)_lexiconTokenForToken:(id)arg0 inLexicon:(struct _LXLexicon *)arg1 ;


@end


#endif