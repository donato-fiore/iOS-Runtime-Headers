// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSASSETCACHETABLEGROUP_H
#define CKSASSETCACHETABLEGROUP_H

@class CKSQLiteTableGroup;


#import "CKDAssetHandleTable.h"
#import "CKDAssetVolumeTable.h"

@interface CKSAssetCacheTableGroup : CKSQLiteTableGroup

@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable; // ivar: _assetHandleTable
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable; // ivar: _assetVolumeTable


+(BOOL)rebootShouldClearData;
-(id)createTables;


@end


#endif