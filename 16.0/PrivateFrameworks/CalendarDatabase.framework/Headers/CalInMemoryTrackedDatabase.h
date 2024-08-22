// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALINMEMORYTRACKEDDATABASE_H
#define CALINMEMORYTRACKEDDATABASE_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "CalDatabaseInMemoryChangeTracking.h"

@interface CalInMemoryTrackedDatabase : NSObject

@property (readonly, nonatomic) NSHashTable *clients; // ivar: _clients
@property (readonly, nonatomic) CalDatabaseInMemoryChangeTracking *database; // ivar: _database
@property (readonly, nonatomic) BOOL hasClients;


-(id)init;


@end


#endif