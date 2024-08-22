// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSSYNCPROGRESSINFO_H
#define NMSSYNCPROGRESSINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NMSSyncProgressInfo : NSObject

@property (nonatomic) NSUInteger aggregateAssetItemBytesAdded; // ivar: _aggregateAssetItemBytesAdded
@property (retain, nonatomic) NSString *assetType; // ivar: _assetType
@property (nonatomic) float estimatedSyncProgress; // ivar: _estimatedSyncProgress
@property (nonatomic) NSInteger numberOfAssetItems; // ivar: _numberOfAssetItems
@property (nonatomic) NSInteger numberOfAssetItemsNeedingDownload; // ivar: _numberOfAssetItemsNeedingDownload
@property (nonatomic) NSInteger numberOfAssetItemsSynced; // ivar: _numberOfAssetItemsSynced
@property (nonatomic) NSUInteger syncState; // ivar: _syncState
@property (nonatomic) NSUInteger syncWaitingSubstate; // ivar: _syncWaitingSubstate


+(id)_stringFromSyncState:(NSUInteger)arg0 ;
+(id)_stringFromWaitingSubstate:(NSUInteger)arg0 ;
-(id)description;


@end


#endif