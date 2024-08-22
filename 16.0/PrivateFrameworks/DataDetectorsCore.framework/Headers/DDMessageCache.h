// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDMESSAGECACHE_H
#define DDMESSAGECACHE_H

@class NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface DDMessageCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    NSMutableDictionary *_cache;
    NSMutableArray *_indexLRU;
}




-(id)init;
-(id)stringWithElement:(id)arg0 conversationID:(id)arg1 range:(struct _NSRange *)arg2 ;
-(void)_pruneIgnoringFirst:(BOOL)arg0 ;
-(void)removeConversation:(id)arg0 ;


@end


#endif