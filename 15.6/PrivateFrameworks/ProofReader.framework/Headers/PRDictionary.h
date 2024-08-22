// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRDICTIONARY_H
#define PRDICTIONARY_H

@class NSURL, NSData, NSDictionary, NLParameterBundle;

#import <Foundation/Foundation.h>

#import "PRDictionary.h"

@interface PRDictionary : NSObject {
    NSURL *_url;
    NSData *_data;
    NSDictionary *_offsetsDictionary;
    NSDictionary *_numEntriesDictionary;
    NSDictionary *_dictionariesDictionary;
    NLParameterBundle *_parameterBundle;
    PRDictionary *_fallbackDictionary;
}




-(BOOL)checkWordBuffer:(char *)arg0 length:(NSUInteger)arg1 encoding:(unsigned int)arg2 index:(NSUInteger)arg3 caseInsensitive:(BOOL)arg4 ;
-(id)description;
-(id)dictionaryAtIndex:(NSUInteger)arg0 ;
-(id)fallbackDictionary;
-(id)initWithURL:(id)arg0 fallbackURL:(id)arg1 ;
-(id)parameterBundle;
-(void)dealloc;


@end


#endif