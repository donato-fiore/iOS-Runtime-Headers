// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYACCESSSESSION_H
#define WBSHISTORYACCESSSESSION_H

@protocol WBSHistoryAccessSessionProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistoryService.h"

@interface WBSHistoryAccessSession : NSObject <WBSHistoryAccessSessionProtocol>

 {
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithHistoryService:(id)arg0 ;
-(void)getHistoryItemsVisitedAfterDate:(id)arg0 beforeDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)getHistoryVisitsAfterDate:(id)arg0 beforeDate:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif