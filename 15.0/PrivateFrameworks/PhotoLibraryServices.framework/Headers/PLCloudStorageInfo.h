// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDSTORAGEINFO_H
#define PLCLOUDSTORAGEINFO_H


#import <Foundation/Foundation.h>


@interface PLCloudStorageInfo : NSObject

@property (readonly, nonatomic) NSInteger availableBytes; // ivar: _availableBytes
@property (readonly, nonatomic) NSInteger cameraRollBackupBytes; // ivar: _cameraRollBackupBytes
@property (readonly, nonatomic) BOOL hasMaxQuotaTier; // ivar: _hasMaxQuotaTier
@property (readonly, nonatomic) NSInteger iCloudPhotosBytes; // ivar: _iCloudPhotosBytes
@property (readonly, nonatomic) NSInteger totalBytes; // ivar: _totalBytes
@property (readonly, nonatomic) NSInteger usedBytes; // ivar: _usedBytes


+(id)storageInfoWithTotal:(NSInteger)arg0 available:(NSInteger)arg1 used:(NSInteger)arg2 cameraRollBackupBytes:(NSInteger)arg3 iCloudPhotosSize:(NSInteger)arg4 hasMaxQuotaTier:(BOOL)arg5 ;
-(id)description;
-(id)initWithTotalQuotaBytes:(NSInteger)arg0 totalAvailableBytes:(NSInteger)arg1 totalUsedBytes:(NSInteger)arg2 cameraRollBackupBytes:(NSInteger)arg3 iCloudPhotosSize:(NSInteger)arg4 hasMaxQuotaTier:(BOOL)arg5 ;


@end


#endif