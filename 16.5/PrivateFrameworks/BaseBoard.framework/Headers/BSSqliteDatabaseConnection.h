// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSSQLITEDATABASECONNECTION_H
#define BSSQLITEDATABASECONNECTION_H

@class NSCache, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BSSqliteDatabaseConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    *sqlite3 _queue_dbConnection;
    NSCache *_queue_queryCache;
    NSHashTable *_queue_observers;
}




-(BOOL)truncateDatabaseAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initWithFileURL:(id)arg0 dataProtectionClass:(NSUInteger)arg1 ;
-(id)initWithInMemoryDatabase;
-(id)prepareStatement:(id)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif