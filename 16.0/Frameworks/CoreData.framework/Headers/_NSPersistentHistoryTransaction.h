// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSPERSISTENTHISTORYTRANSACTION_H
#define _NSPERSISTENTHISTORYTRANSACTION_H

@class NSArray, NSString, NSData;
@protocol NSSecureCoding;


#import "NSPersistentHistoryTransaction.h"
#import "NSPersistentStoreCoordinator.h"
#import "NSManagedObjectID.h"

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding>

 {
    NSInteger _rowIdentifier;
    CGFloat _timestamp;
    NSArray *_changes;
    NSString *_storeID;
    NSString *_bundleID;
    NSString *_processID;
    NSString *_contextName;
    NSString *_author;
    NSData *_queryGeneration;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_backingObjectID;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)transactionNumber;
-(id)_backingObjectID;
-(id)author;
-(id)bundleID;
-(id)changes;
-(id)contextName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 andObjectID:(id)arg1 ;
-(id)initialQueryGenerationToken;
-(id)objectIDNotification;
-(id)postQueryGenerationToken;
-(id)processID;
-(id)storeID;
-(id)timestamp;
-(id)token;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif