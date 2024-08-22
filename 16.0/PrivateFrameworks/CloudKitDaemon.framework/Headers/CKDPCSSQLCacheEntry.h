// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCSSQLCACHEENTRY_H
#define CKDPCSSQLCACHEENTRY_H

@class CKSQLiteCacheTableEntry, NSString, NSNumber;



@interface CKDPCSSQLCacheEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) id *CKDPCSData; // ivar: _CKDPCSData
@property (retain, nonatomic) NSString *accountID; // ivar: _accountID
@property (retain, nonatomic) NSNumber *databaseScope; // ivar: _databaseScope
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSNumber *itemType; // ivar: _itemType
@property (retain, nonatomic) NSString *parentID; // ivar: _parentID
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSString *shareID; // ivar: _shareID
@property (retain, nonatomic) NSString *zoneID; // ivar: _zoneID


-(id)description;


@end


#endif