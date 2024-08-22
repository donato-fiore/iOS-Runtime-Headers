// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGHISTORYSHAREDDATA_H
#define SGHISTORYSHAREDDATA_H

@class NSMutableSet, NSArray, NSMutableArray, NSData, NSUbiquitousKeyValueStore, NSDate;

#import <Foundation/Foundation.h>


@interface SGHistorySharedData : NSObject {
    NSMutableSet *confirmedEventHashes;
    NSMutableSet *confirmedEventWithoutTimestampHashes;
    NSMutableSet *rejectedEventHashes;
    NSMutableSet *confirmedReminderHashes;
    NSMutableSet *rejectedReminderHashes;
    NSMutableSet *contactHashes;
    NSMutableSet *confirmedEventFieldHashes;
    NSMutableSet *confirmedEventWithoutTimestampFieldHashes;
    NSMutableSet *storageDetailHashes;
    NSMutableSet *dontUpdate;
    NSArray *resetInfo;
    NSMutableArray *observers;
    NSData *cachedSalt;
    NSData *cachedSaltLegacyManatee;
    NSUbiquitousKeyValueStore *migrateFromStore;
    BOOL isMigrating;
    NSDate *lastMigrationAttempt;
}






@end


#endif