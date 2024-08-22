// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYSERVICE_H
#define WBSHISTORYSERVICE_H

@class NSXPCListener, NSMapTable, NSDate, NSURL, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "WBSHistoryDatabaseAccessBroker.h"

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_historyServiceQueue;
    NSObject<OS_dispatch_group> *_fileOperationGroup;
    NSMapTable *_databases;
    NSDate *_initDate;
}


@property (readonly, nonatomic) WBSHistoryDatabaseAccessBroker *databaseAccessBroker; // ivar: _databaseAccessBroker
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_connectionIsEntitledToUseUserDatabase:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_createListener;
-(id)_openOrReuseExistingDatabaseWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithListener:(id)arg0 ;
-(void)connectWithOptions:(id)arg0 connection:(id)arg1 completionHandler:(id)arg2 ;
-(void)resume;
-(void)shutdown;


@end


#endif