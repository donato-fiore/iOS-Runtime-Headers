// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKSYNCRESPONSEDATAKEYENUMERATOR_H
#define SBKSYNCRESPONSEDATAKEYENUMERATOR_H

@class NSEnumerator;

#import <Foundation/Foundation.h>

#import "SBKSyncResponseData.h"
#import "SBKSyncTransaction.h"

@interface SBKSyncResponseDataKeyEnumerator : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSEnumerator *conflictedKeysEnumerator; // ivar: _conflictedKeysEnumerator
@property (retain, nonatomic) NSEnumerator *deletedKeysEnumerator; // ivar: _deletedKeysEnumerator
@property (nonatomic) BOOL resolvedConflictsNeedSyncToServer; // ivar: _resolvedConflictsNeedSyncToServer
@property (retain, nonatomic) SBKSyncResponseData *responseData; // ivar: _responseData
@property (retain, nonatomic) SBKSyncTransaction *transaction; // ivar: _transaction
@property (retain, nonatomic) NSEnumerator *updatedKeysEnumerator; // ivar: _updatedKeysEnumerator


-(id)initWithResponseData:(id)arg0 ;
-(void)_processDeletedKey:(id)arg0 isDirty:(*BOOL)arg1 ;
-(void)_processNextKey;
-(void)_processUpdatedKey:(id)arg0 isConflict:(BOOL)arg1 isDirty:(*BOOL)arg2 ;
-(void)enumerateKeysInResponseForTransaction:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif