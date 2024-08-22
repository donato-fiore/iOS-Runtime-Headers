// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCOMPUTECACHEPOLICYCONFIGURATION_H
#define PLCOMPUTECACHEPOLICYCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface PLComputeCachePolicyConfiguration : NSObject

@property (readonly, nonatomic) BOOL isBackupEnabled; // ivar: _isBackupEnabled
@property (readonly, nonatomic) BOOL isRestoreEnabled; // ivar: _isRestoreEnabled
@property (readonly, nonatomic) NSUInteger minAssetCount; // ivar: _minAssetCount
@property (readonly, nonatomic) NSUInteger minCloudStorageTier; // ivar: _minCloudStorageTier
@property (readonly, nonatomic) NSUInteger minExpungedAssetCount; // ivar: _minExpungedAssetCount
@property (readonly, nonatomic) CGFloat minSnapshotTimeInterval; // ivar: _minSnapshotTimeInterval


-(id)initWithConfigurationDictionary:(id)arg0 ;
-(void)configurationValueForKey:(id)arg0 configurationDictionary:(id)arg1 valueBlock:(id)arg2 ;


@end


#endif