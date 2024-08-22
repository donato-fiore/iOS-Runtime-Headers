// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKQUERYOPERATIONINFO_H
#define CKQUERYOPERATIONINFO_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"
#import "CKQueryCursor.h"
#import "CKQuery.h"
#import "CKRecordZoneID.h"

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *assetTransferOptionsByKey; // ivar: _assetTransferOptionsByKey
@property (retain, nonatomic) CKQueryCursor *cursor; // ivar: _cursor
@property (retain, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (nonatomic) BOOL fetchAllResults; // ivar: _fetchAllResults
@property (retain, nonatomic) CKQuery *query; // ivar: _query
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent
@property (retain, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif