// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPTOKENIZER_H
#define UPTOKENIZER_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface UPTokenizer : NSObject

@property (readonly, copy) NSLocale *locale; // ivar: _locale


+(id)nonWhitespaceTokensForTokens:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)tokenizeUtterance:(id)arg0 ;


@end


#endif