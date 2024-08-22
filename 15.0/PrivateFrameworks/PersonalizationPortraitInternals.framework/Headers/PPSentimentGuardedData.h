// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSENTIMENTGUARDEDDATA_H
#define PPSENTIMENTGUARDEDDATA_H

@class _PASCFBurstTrie, _PASLazyPurgeableResult, NSString;

#import <Foundation/Foundation.h>


@interface PPSentimentGuardedData : NSObject {
    _PASCFBurstTrie *_tokenWeightTrie;
    _PASLazyPurgeableResult *_tokenizer;
    NSString *_abGroupIdentifier;
}






@end


#endif