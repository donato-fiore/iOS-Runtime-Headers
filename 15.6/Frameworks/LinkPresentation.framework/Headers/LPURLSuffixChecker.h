// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPURLSUFFIXCHECKER_H
#define LPURLSUFFIXCHECKER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface LPURLSuffixChecker : NSObject {
    *? _trie;
    unsigned int _trieNodeCount;
    NSUInteger _maxLength;
    NSMutableArray *_failedSuffixes;
}




-(BOOL)hasSuffix:(id)arg0 ;
-(BOOL)hasSuffix:(id)arg0 remainingPrefix:(*id)arg1 ;
-(BOOL)insertString:(id)arg0 intoTrieWithCache:(struct ? *)arg1 ;
-(id)initWithSuffixes:(id)arg0 ;
-(void)addStringToFailedSuffixes:(id)arg0 ;
-(void)dealloc;


@end


#endif