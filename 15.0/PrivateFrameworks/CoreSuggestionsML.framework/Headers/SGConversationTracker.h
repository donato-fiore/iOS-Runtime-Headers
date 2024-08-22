// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGCONVERSATIONTRACKER_H
#define SGCONVERSATIONTRACKER_H

@class _PASLRUCache;

#import <Foundation/Foundation.h>


@interface SGConversationTracker : NSObject {
    _PASLRUCache *_conversations;
}




+(id)getMergedPromptForMessage:(id)arg0 conversationTurns:(id)arg1 maxPromptLength:(NSUInteger)arg2 maxPromptWindowSeconds:(CGFloat)arg3 promptJoiningString:(id)arg4 ;
+(id)instance;
+(id)sgConversationTurnsForStrings:(id)arg0 ;
-(id)addMessage:(id)arg0 ;
-(id)conversationForSenderID:(id)arg0 ;
-(id)init;
-(void)clear;


@end


#endif