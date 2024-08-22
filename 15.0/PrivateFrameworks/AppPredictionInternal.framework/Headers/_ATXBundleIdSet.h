// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXBUNDLEIDSET_H
#define _ATXBUNDLEIDSET_H

@class _PASCFBurstTrie;

#import <Foundation/Foundation.h>


@interface _ATXBundleIdSet : NSObject {
    _PASCFBurstTrie *_trie;
}




+(id)sharedInstance;
-(BOOL)containsBundleId:(id)arg0 ;
-(id)init;
-(id)trie;


@end


#endif