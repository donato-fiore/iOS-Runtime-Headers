// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSURLSUFFIXCHECKER_H
#define WBSURLSUFFIXCHECKER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface WBSURLSuffixChecker : NSObject {
    *? _trie;
    unsigned int _trieNodeCount;
    NSUInteger _maxLength;
    NSMutableArray *_failedSuffixes;
}




-(BOOL)hasSuffix:(id)arg0 ;
-(BOOL)insertString:(id)arg0 intoTrieWithCache:(struct ? *)arg1 ;
-(id)initWithSuffixes:(id)arg0 ;
-(void)addStringToFailedSuffixes:(id)arg0 ;
-(void)dealloc;


@end


#endif