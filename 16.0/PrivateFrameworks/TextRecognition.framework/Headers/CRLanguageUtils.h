// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLANGUAGEUTILS_H
#define CRLANGUAGEUTILS_H


#import <Foundation/Foundation.h>


@interface CRLanguageUtils : NSObject



+(struct _LXLexicon *)createDynamicLexicon:(id)arg0 forLocale:(id)arg1 error:(*id)arg2 ;
+(struct _LXLexicon *)createDynamicLexiconForLocale:(id)arg0 error:(*id)arg1 ;


@end


#endif