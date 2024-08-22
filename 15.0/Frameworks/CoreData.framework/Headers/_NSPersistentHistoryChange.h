// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSPERSISTENTHISTORYCHANGE_H
#define _NSPERSISTENTHISTORYCHANGE_H

@class NSDictionary, NSData;
@protocol NSSecureCoding;


#import "NSPersistentHistoryChange.h"
#import "NSManagedObjectID.h"
#import "NSPersistentHistoryTransaction.h"
#import "NSSQLEntity.h"

@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding>

 {
    NSInteger _changeID;
    NSManagedObjectID *_changedObjectID;
    NSInteger _changeType;
    NSDictionary *_tombstone;
    NSPersistentHistoryTransaction *_transaction;
    NSData *_columns;
    NSSQLEntity *_sqlEntity;
    NSManagedObjectID *_backingObjectID;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)changeID;
-(NSInteger)changeType;
-(id)_backingObjectID;
-(id)changedObjectID;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 andChangeObjectID:(id)arg1 ;
-(id)tombstone;
-(id)transaction;
-(id)updatedProperties;
-(void)_setTransaction:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif