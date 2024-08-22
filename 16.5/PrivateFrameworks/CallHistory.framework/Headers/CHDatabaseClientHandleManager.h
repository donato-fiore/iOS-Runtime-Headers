// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDATABASECLIENTHANDLEMANAGER_H
#define CHDATABASECLIENTHANDLEMANAGER_H



#import "CHSynchronizedLoggable.h"
#import "CallHistoryDBClientHandle.h"

@interface CHDatabaseClientHandleManager : CHSynchronizedLoggable

@property (readonly, weak, nonatomic) CallHistoryDBClientHandle *databaseClientHandle; // ivar: _databaseClientHandle


+(id)sharedInstance;
-(id)init;


@end


#endif