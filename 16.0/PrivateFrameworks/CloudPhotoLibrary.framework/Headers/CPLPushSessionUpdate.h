// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPUSHSESSIONUPDATE_H
#define CPLPUSHSESSIONUPDATE_H

@class NSArray, NSDictionary, NSSet;


#import "CPLChangeSessionUpdate.h"
#import "CPLChangeBatch.h"

@interface CPLPushSessionUpdate : CPLChangeSessionUpdate

@property (readonly, nonatomic) NSArray *addedRecords; // ivar: _addedRecords
@property (readonly, nonatomic) NSArray *deletedRecordScopedIdentifiers; // ivar: _deletedRecordScopedIdentifiers
@property (readonly, nonatomic) CPLChangeBatch *diffBatch; // ivar: _diffBatch
@property (readonly, nonatomic) NSDictionary *pushContexts; // ivar: _pushContexts
@property (readonly, nonatomic) NSDictionary *recordWithStatusChangesToNotify; // ivar: _recordWithStatusChangesToNotify
@property (readonly, nonatomic) NSSet *unquarantinedRecordScopedIdentifiers; // ivar: _unquarantinedRecordScopedIdentifiers
@property (readonly, nonatomic) NSArray *updatedRecords; // ivar: _updatedRecords


+(BOOL)supportsSecureCoding;
-(BOOL)applyToStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)discardFromStore:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPushSessionTracker:(id)arg0 error:(*id)arg1 ;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg0 ;
-(id)statusDescription;
-(id)storageForStatusInStore:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif