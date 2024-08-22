// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSTOPHITCOMPLETIONMATCH_H
#define WBSTOPHITCOMPLETIONMATCH_H



#import "WBSBookmarkAndHistoryCompletionMatch.h"

@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch {
    BOOL _shouldPreload;
}




-(BOOL)isTopHit;
-(BOOL)shouldPreload;
-(id)initWithBookmarkAndHistoryCompletionMatch:(*void)arg0 userInput:(id)arg1 forQueryID:(NSInteger)arg2 shouldPreload:(BOOL)arg3 ;
-(id)parsecDomainIdentifier;


@end


#endif