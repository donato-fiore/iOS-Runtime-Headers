// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFETCHARCHIVEDRECORDSOPERATIONINFO_H
#define CKFETCHARCHIVEDRECORDSOPERATIONINFO_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKFetchArchivedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID; // ivar: _configurationsByRecordZoneID
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (retain, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs
@property (nonatomic) BOOL shouldFetchAssetContents; // ivar: _shouldFetchAssetContents


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif