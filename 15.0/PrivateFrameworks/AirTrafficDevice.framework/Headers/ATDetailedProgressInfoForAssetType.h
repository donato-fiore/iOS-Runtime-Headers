// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATDETAILEDPROGRESSINFOFORASSETTYPE_H
#define ATDETAILEDPROGRESSINFOFORASSETTYPE_H

@class NSMutableSet, NSString;

#import <Foundation/Foundation.h>


@interface ATDetailedProgressInfoForAssetType : NSObject {
    NSMutableSet *failedAssetIds;
}


@property (retain, nonatomic, getter=getAssetType) NSString *atAssetType; // ivar: _atAssetType
@property (nonatomic, getter=getFailedAssetsCount) NSUInteger failedAssetCount; // ivar: _failedAssetCount
@property (nonatomic, getter=getSyncProgress) CGFloat progress; // ivar: _progress
@property (nonatomic, getter=getTotalAssetsSynced) NSUInteger totalAssetsSynced; // ivar: _totalAssetsSynced
@property (nonatomic, getter=getTotalAssetsToSync) NSUInteger totalAssetsToSync; // ivar: _totalAssetsToSync
@property (nonatomic, getter=getTotalBytesSynced) NSUInteger totalBytesSynced; // ivar: _totalBytesSynced
@property (nonatomic, getter=getTotalBytesToSync) NSUInteger totalBytesToSync; // ivar: _totalBytesToSync


+(id)serializedProgressInfoFromATDetailedProgressInfoForAssetType:(id)arg0 ;
-(id)description;
-(id)initWithAssetType:(id)arg0 assetCountToSync:(NSUInteger)arg1 byteCountToSync:(NSUInteger)arg2 ;
-(id)initWithAssetType:(id)arg0 assetCountToSync:(NSUInteger)arg1 byteCountToSync:(NSUInteger)arg2 assetCountSynced:(NSUInteger)arg3 byteCountSyned:(NSUInteger)arg4 ;
-(void)_computeProgress;
-(void)updateAsset:(id)arg0 syncedWithSuccess:(BOOL)arg1 bytesDownloaded:(NSUInteger)arg2 ;
-(void)updateAssetsToDownload:(NSUInteger)arg0 ;
-(void)updateBytesDownloaded:(NSUInteger)arg0 ;
-(void)updateBytesToDownload:(NSUInteger)arg0 ;


@end


#endif