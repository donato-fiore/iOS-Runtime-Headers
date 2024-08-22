// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHISTORYSERVICE_H
#define WBSHISTORYSERVICE_H

@class NSXPCListener, NSMutableDictionary, NSCountedSet, NSDate, NSURL, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSHistoryDatabaseAccessBroker.h"
#import "WBSHistoryURLCompletionDataStore.h"

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_historyServiceQueue;
    NSMutableDictionary *_openedDatabases;
    NSCountedSet *_openedDatabasesRefCounts;
    NSDate *_initDate;
}


@property (readonly, nonatomic) WBSHistoryDatabaseAccessBroker *databaseAccessBroker; // ivar: _databaseAccessBroker
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WBSHistoryURLCompletionDataStore *urlCompletionDataStore; // ivar: _urlCompletionDataStore


-(BOOL)_connectionIsEntitledToUseUserDatabase:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_createListener;
-(id)_openOrReuseExistingDatabaseWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithListener:(id)arg0 ;
-(void)connectWithOptions:(id)arg0 connection:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)disconnectDatabase:(id)arg0 completionHandler:(id)arg1 ;
-(void)resume;
-(void)shutdown;


@end


#endif