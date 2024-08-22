// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABSADDRESSBOOKCONTEXTSTORAGE_H
#define ABSADDRESSBOOKCONTEXTSTORAGE_H

@class NSMutableDictionary, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface ABSAddressBookContextStorage : NSObject

@property (readonly, nonatomic) NSMutableDictionary *addedMemberships; // ivar: _addedMemberships
@property (readonly, nonatomic) NSMutableDictionary *deletedMemberships; // ivar: _deletedMemberships
@property (readonly, nonatomic) NSMutableDictionary *deletedRecords; // ivar: _deletedRecords
@property (nonatomic) BOOL hasUnsavedChanges; // ivar: _hasUnsavedChanges
@property (readonly, nonatomic) NSMutableArray *insertedRecords; // ivar: _insertedRecords
@property (readonly, nonatomic) NSMutableDictionary *records; // ivar: _records
@property (readonly, nonatomic) NSArray *recordsWithPendingMembershipAdditions;
@property (readonly, nonatomic) NSArray *recordsWithPendingMembershipDeletions;
@property (readonly, nonatomic) NSMutableDictionary *revertedRecords; // ivar: _revertedRecords
@property (readonly, nonatomic) NSMutableDictionary *updatedRecords; // ivar: _updatedRecords


-(BOOL)addMemberRecord:(id)arg0 toRecord:(id)arg1 ;
-(BOOL)addRecord:(id)arg0 ;
-(BOOL)deleteRecord:(id)arg0 ;
-(BOOL)recordUpdated:(id)arg0 ;
-(BOOL)removeMemberRecord:(id)arg0 fromRecord:(id)arg1 ;
-(id)addedMembersForRecord:(id)arg0 ;
-(id)cnImplFetched:(id)arg0 creationBlock:(id)arg1 ;
-(id)init;
-(id)recordFetched:(id)arg0 ;
-(id)removedMembersForRecord:(id)arg0 ;
-(void)_resetIncludingLivingRecords:(BOOL)arg0 ;
-(void)commitPendingChanges;
-(void)revert;


@end


#endif