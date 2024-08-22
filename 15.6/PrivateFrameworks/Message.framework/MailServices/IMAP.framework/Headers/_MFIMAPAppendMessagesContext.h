// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFIMAPAPPENDMESSAGESCONTEXT_H
#define _MFIMAPAPPENDMESSAGESCONTEXT_H

@class MFMailMessageStore, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _MFIMAPAppendMessagesContext : NSObject {
    MFMailMessageStore *store;
    NSArray *messages;
    NSArray *flagsToSet;
    NSArray *customFlagsToSet;
    BOOL someMsgsWentToServer;
    NSMutableArray *msgsAppendedOffline;
    NSMutableArray *missedMessages;
    NSMutableArray *newMessageIDs;
    NSMutableArray *newMessages;
    unsigned int unreadCountDelta;
    unsigned int destUidNext;
}






@end


#endif