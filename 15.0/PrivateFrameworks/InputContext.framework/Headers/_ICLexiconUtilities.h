// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICLEXICONUTILITIES_H
#define _ICLEXICONUTILITIES_H


#import <Foundation/Foundation.h>


@interface _ICLexiconUtilities : NSObject



+(BOOL)lexiconContainsEntry:(struct _LXLexicon *)arg0 forString:(id)arg1 ;
+(id)sortKeyEquivalents:(struct _LXLexicon *)arg0 forString:(id)arg1 ;
+(struct _LXEntry *)copyEntry:(struct _LXLexicon *)arg0 forString:(id)arg1 ;


@end


#endif