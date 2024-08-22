// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHBATCHEDRECORDSOPERATIONINFO_H
#define CKDFETCHBATCHEDRECORDSOPERATIONINFO_H

@class CKDatabaseOperationInfo, NSDictionary, NSArray;
@protocol NSSecureCoding;



@interface CKDFetchBatchedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // ivar: _configurationsByRecordZoneID
@property (nonatomic) NSInteger errorReportingStyle; // ivar: _errorReportingStyle
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (nonatomic) BOOL forcePCSDecryptionAttempt; // ivar: _forcePCSDecryptionAttempt
@property (retain, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (nonatomic) BOOL shouldFetchAssetContents; // ivar: _shouldFetchAssetContents


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif