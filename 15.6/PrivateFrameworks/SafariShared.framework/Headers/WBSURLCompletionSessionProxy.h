// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSURLCOMPLETIONSESSIONPROXY_H
#define WBSURLCOMPLETIONSESSIONPROXY_H

@protocol WBSURLCompletionSessionProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistoryConnectionProxy.h"

@interface WBSURLCompletionSessionProxy : NSObject {
    WBSHistoryConnectionProxy *_historyConnectionProxy;
    id<WBSURLCompletionSessionProtocol> *_completionSession;
    NSObject<OS_dispatch_queue> *_completionSessionAccessQueue;
}




-(id)init;
-(void)_completionSessionWithCompletionHandler:(id)arg0 ;
-(void)getBestMatchesForTypedString:(id)arg0 limit:(NSUInteger)arg1 forQueryID:(NSInteger)arg2 withSearchParameters:(id)arg3 completionHandler:(id)arg4 ;
-(void)userDidSelectCompletionMatch:(id)arg0 forTypedString:(id)arg1 ;


@end


#endif