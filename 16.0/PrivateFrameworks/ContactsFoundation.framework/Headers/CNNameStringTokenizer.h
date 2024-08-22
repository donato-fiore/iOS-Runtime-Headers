// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNNAMESTRINGTOKENIZER_H
#define CNNAMESTRINGTOKENIZER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CNUnfairLock.h"

@interface CNNameStringTokenizer : NSObject {
    NSObject<OS_dispatch_queue> *_syncQueue;
}


@property (readonly, nonatomic) CNUnfairLock *lock; // ivar: _lock
@property (readonly, nonatomic) *__CFStringTokenizer tokenizer; // ivar: _tokenizer


+(id)tokenizeNameString:(id)arg0 ;
+(id)tokenizeNameString:(id)arg0 usingLocale:(id)arg1 inferredNameOrder:(*NSInteger)arg2 ;
+(void)setInferredNameOrder:(*NSInteger)arg0 toTokenizerNameOrder:(int)arg1 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)tokenizeNameString:(id)arg0 inferredNameOrder:(*NSInteger)arg1 ;
-(void)dealloc;


@end


#endif