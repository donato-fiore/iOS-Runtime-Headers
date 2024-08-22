// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKRECORDFETCHAGGREGATOROPERATIONINFO_H
#define CKRECORDFETCHAGGREGATOROPERATIONINFO_H

@class CKDatabaseOperationInfo, NSDictionary, NSSet;



@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property (retain, nonatomic) NSSet *desiredKeys; // ivar: _desiredKeys
@property (nonatomic) BOOL fetchAssetContents; // ivar: _fetchAssetContents
@property (nonatomic) BOOL fetchMergeableValues; // ivar: _fetchMergeableValues
@property (nonatomic) BOOL forceDecryptionAttempt; // ivar: _forceDecryptionAttempt
@property (nonatomic) BOOL preserveOrdering; // ivar: _preserveOrdering


-(id)init;


@end


#endif