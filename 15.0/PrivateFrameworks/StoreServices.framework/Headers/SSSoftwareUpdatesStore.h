// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSSOFTWAREUPDATESSTORE_H
#define SSSOFTWAREUPDATESSTORE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSSoftwareUpdatesStore : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    SSXPCConnection *_connection;
    BOOL _didMigration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    *void _mobileCoreServices;
    BOOL _useLocalRead;
    BOOL _useLocalWrite;
}




-(id)init;
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(id)arg0 ;
-(void)dealloc;
-(void)getUpdatesWithCompletionBlock:(id)arg0 ;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)reloadFromServerWithCompletionBlock:(id)arg0 ;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;


@end


#endif