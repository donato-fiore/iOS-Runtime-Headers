// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDORDEREDSETWORDLIST_H
#define WBSPASSWORDORDEREDSETWORDLIST_H

@class NSOrderedSet;


#import "WBSPasswordWordList.h"

@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList {
    NSOrderedSet *_words;
}


@property (readonly, nonatomic, getter=isSensitive) BOOL sensitive; // ivar: _sensitive


-(id)initWithIdentifier:(id)arg0 isSensitive:(BOOL)arg1 orderedWords:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 isSensitive:(BOOL)arg1 orderedWordsArray:(id)arg2 ;
-(void)enumerateEntriesForString:(id)arg0 withBlock:(id)arg1 ;


@end


#endif