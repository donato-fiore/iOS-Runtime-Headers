// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDAEMONSYNCENTITYMANAGER_H
#define HDDAEMONSYNCENTITYMANAGER_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDDaemonSyncEntityManager : NSObject {
    HDDaemon *_daemon;
    os_unfair_lock_s _lock;
    NSArray *_lock_allOrderedSyncEntities;
    NSDictionary *_lock_allSyncEntitiesByIdentifier;
}


@property (readonly, copy, nonatomic) NSArray *orderedSyncEntities;
@property (readonly, copy, nonatomic) NSDictionary *syncEntitiesByIdentifier;


-(id)initWithDaemon:(id)arg0 ;


@end


#endif