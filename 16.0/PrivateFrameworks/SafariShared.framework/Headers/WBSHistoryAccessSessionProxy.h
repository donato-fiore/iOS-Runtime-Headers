// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHISTORYACCESSSESSIONPROXY_H
#define WBSHISTORYACCESSSESSIONPROXY_H

@protocol WBSHistoryAccessSessionProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistoryConnectionProxy.h"

@interface WBSHistoryAccessSessionProxy : NSObject {
    WBSHistoryConnectionProxy *_historyConnectionProxy;
    id<WBSHistoryAccessSessionProtocol> *_historyAccessSession;
    NSObject<OS_dispatch_queue> *_historyAccessSessionAccessQueue;
}




-(id)init;
-(void)_getHistoryAccessSessionWithCompletionHandler:(id)arg0 ;
-(void)getHistoryItemsVisitedAfterDate:(id)arg0 beforeDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)getHistoryVisitsAfterDate:(id)arg0 beforeDate:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif