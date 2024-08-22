// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPCSCACHEFETCHOPERATIONINFO_H
#define CKDPCSCACHEFETCHOPERATIONINFO_H

@class CKDatabaseOperationInfo;
@protocol CKSQLiteItem;


#import "CKDPCSCache.h"

@interface CKDPCSCacheFetchOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) CKDPCSCache *cache; // ivar: _cache
@property (retain, nonatomic) NSObject<CKSQLiteItem> *itemID; // ivar: _itemID
@property (nonatomic) NSUInteger options; // ivar: _options




@end


#endif