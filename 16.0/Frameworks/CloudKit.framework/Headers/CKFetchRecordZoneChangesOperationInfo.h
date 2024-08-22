// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFETCHRECORDZONECHANGESOPERATIONINFO_H
#define CKFETCHRECORDZONECHANGESOPERATIONINFO_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKFetchRecordZoneChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property (nonatomic) NSInteger changeTypes; // ivar: _changeTypes
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // ivar: _configurationsByRecordZoneID
@property (nonatomic) NSInteger errorReportingStyle; // ivar: _errorReportingStyle
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (nonatomic) BOOL forcePCSDecryptionAttempt; // ivar: _forcePCSDecryptionAttempt
@property (retain, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (nonatomic) BOOL shouldFetchAssetContents; // ivar: _shouldFetchAssetContents
@property (retain, nonatomic) NSDictionary *supplementalChangeTokenByZoneID; // ivar: _supplementalChangeTokenByZoneID


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif