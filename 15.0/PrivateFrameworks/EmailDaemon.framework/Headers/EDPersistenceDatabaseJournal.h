// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDPERSISTENCEDATABASEJOURNAL_H
#define EDPERSISTENCEDATABASEJOURNAL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabaseJournalManager.h"

@interface EDPersistenceDatabaseJournal : NSObject {
    os_unfair_lock_s _referenceCountLock;
    NSUInteger _referenceCount;
}


@property (readonly, nonatomic) EDPersistenceDatabaseJournalManager *journalManager; // ivar: _journalManager
@property (readonly, nonatomic) NSUInteger number; // ivar: _number
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly) NSUInteger referenceCount;


-(id)description;
-(id)initWithJournalManager:(id)arg0 number:(NSUInteger)arg1 ;
-(void)checkIn;
-(void)checkOut;


@end


#endif