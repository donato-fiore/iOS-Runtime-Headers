// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSXPCCONNECTIONREQUESTEDREPLIES_H
#define _NSXPCCONNECTIONREQUESTEDREPLIES_H


#import <Foundation/Foundation.h>


@interface _NSXPCConnectionRequestedReplies : NSObject {
    *__CFDictionary _replyDictionaryTable;
    *__CFDictionary _replyTransactionTable;
    *__CFDictionary _progressTable;
    os_unfair_lock_s _lock;
    unsigned char _invalid;
}




-(id)init;
-(void)dealloc;


@end


#endif