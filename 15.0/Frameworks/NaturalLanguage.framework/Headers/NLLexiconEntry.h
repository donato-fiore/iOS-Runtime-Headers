// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLLEXICONENTRY_H
#define NLLEXICONENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NLLexiconEntry : NSObject {
    NSString *_string;
    unsigned int _tokenID;
    NSUInteger _flags;
    CGFloat _probability;
}


@property (readonly) NSUInteger flags;
@property (readonly) CGFloat probability;
@property (readonly, copy) NSString *string;


+(id)entryWithString:(id)arg0 tokenID:(unsigned int)arg1 flags:(NSUInteger)arg2 probability:(CGFloat)arg3 ;
-(id)initWithString:(id)arg0 tokenID:(unsigned int)arg1 flags:(NSUInteger)arg2 probability:(CGFloat)arg3 ;
-(unsigned int)tokenID;


@end


#endif