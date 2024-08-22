// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYCONTEXTCONTROLLER_H
#define WBSHISTORYCONTEXTCONTROLLER_H

@class CKContextResponse, NSURL, CKContextClient;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistory.h"

@interface WBSHistoryContextController : NSObject {
    CKContextResponse *_cachedResponse;
    NSURL *_pageURLForCachedResponse;
    NSObject<OS_dispatch_queue> *_internalQueue;
    CKContextClient *_client;
}


@property (readonly, nonatomic) WBSHistory *history; // ivar: _history


-(id)initWithHistory:(id)arg0 contextClient:(id)arg1 ;
-(id)initWithHistory:(id)arg0 contextClient:(id)arg1 qualityOfService:(unsigned int)arg2 ;
-(void)_persistTopicsFromContextResult:(id)arg0 forPageURL:(id)arg1 ;
-(void)cachedResponseForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)contextForPageURL:(id)arg0 content:(id)arg1 contentType:(NSInteger)arg2 metadata:(id)arg3 isPrivate:(BOOL)arg4 isReaderAvailable:(BOOL)arg5 withCompletionHandler:(id)arg6 ;
-(void)invalidateCachedResults;


@end


#endif