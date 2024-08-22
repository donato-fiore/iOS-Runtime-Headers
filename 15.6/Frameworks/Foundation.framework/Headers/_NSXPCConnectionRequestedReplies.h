// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSXPCCONNECTIONREQUESTEDREPLIES_H
#define _NSXPCCONNECTIONREQUESTEDREPLIES_H


#import <Foundation/Foundation.h>


@interface _NSXPCConnectionRequestedReplies : NSObject {
    *__CFDictionary _replyDictionaryTable;
    *__CFDictionary _replyTransactionTable;
    *__CFDictionary _progressTable;
    unsigned char _invalid;
    _opaque_pthread_mutex_t _lock;
}




-(id)init;
-(void)dealloc;


@end


#endif