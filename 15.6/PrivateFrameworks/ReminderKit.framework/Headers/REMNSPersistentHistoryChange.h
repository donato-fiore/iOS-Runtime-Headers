// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMNSPERSISTENTHISTORYCHANGE_H
#define REMNSPERSISTENTHISTORYCHANGE_H

@class NSArray, NSPersistentHistoryChange;


#import "REMChangeObject.h"
#import "REMChangeTransaction.h"
#import "_REMNSPersistentHistoryChangeStorage.h"

@interface REMNSPersistentHistoryChange : REMChangeObject

@property (retain, nonatomic) NSArray *coalescedChanges; // ivar: _coalescedChanges
@property (weak, nonatomic) REMChangeTransaction *internal_ChangeTransaction; // ivar: _internal_ChangeTransaction
@property (nonatomic) BOOL isCoalesced; // ivar: _isCoalesced
@property (readonly, weak) NSPersistentHistoryChange *persistentHistoryChange; // ivar: _persistentHistoryChange
@property (retain) _REMNSPersistentHistoryChangeStorage *storage; // ivar: _storage


+(BOOL)supportsSecureCoding;
+(id)shortStringForChangeType:(NSInteger)arg0 ;
+(id)stringForChangeType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)changeID;
-(NSInteger)changeType;
-(id)changedManagedObjectID;
-(id)changedObjectID;
-(id)copyForCoalescing;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentHistoryChange:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;
-(id)tombstone;
-(id)transaction;
-(id)updatedProperties;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resolveWithObjectID:(id)arg0 ;


@end


#endif