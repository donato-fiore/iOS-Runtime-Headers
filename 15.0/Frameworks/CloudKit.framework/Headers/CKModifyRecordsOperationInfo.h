// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMODIFYRECORDSOPERATIONINFO_H
#define CKMODIFYRECORDSOPERATIONINFO_H

@class NSDictionary, NSData, NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (nonatomic) BOOL alwaysFetchPCSFromServer; // ivar: _alwaysFetchPCSFromServer
@property (copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // ivar: _assetUUIDToExpectedProperties
@property (nonatomic) BOOL atomic; // ivar: _atomic
@property (retain, nonatomic) NSData *clientChangeTokenData; // ivar: _clientChangeTokenData
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // ivar: _conflictLosersToResolveByRecordID
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken; // ivar: _markAsParticipantNeedsNewInvitationToken
@property (nonatomic) BOOL originatingFromDaemon; // ivar: _originatingFromDaemon
@property (copy, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // ivar: _packageUUIDToExpectedProperties
@property (copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // ivar: _pluginFieldsForRecordDeletesByID
@property (retain, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // ivar: _recordIDsToDeleteToEtags
@property (retain, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (nonatomic) NSInteger savePolicy; // ivar: _savePolicy
@property (nonatomic) BOOL shouldModifyRecordsInDatabase; // ivar: _shouldModifyRecordsInDatabase
@property (nonatomic) BOOL shouldOnlySaveAssetContent; // ivar: _shouldOnlySaveAssetContent
@property (nonatomic) BOOL shouldReportRecordsInFlight; // ivar: _shouldReportRecordsInFlight
@property (nonatomic) BOOL shouldSkipPCSRetryBehavior; // ivar: _shouldSkipPCSRetryBehavior


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_commonInit;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif