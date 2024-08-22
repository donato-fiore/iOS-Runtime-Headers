// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGTEXTMESSAGECONVERSATIONTRACKER_H
#define SGTEXTMESSAGECONVERSATIONTRACKER_H

@class SGConversationTracker;

#import <Foundation/Foundation.h>


@interface SGTextMessageConversationTracker : NSObject {
    SGConversationTracker *_conversationTracker;
}




+(id)getMergedPrompt:(id)arg0 withParams:(id)arg1 ;
+(id)instance;
-(id)addTextMessageItem:(id)arg0 ;
-(id)conversationForIdentifier:(id)arg0 ;
-(id)init;
-(void)clear;


@end


#endif