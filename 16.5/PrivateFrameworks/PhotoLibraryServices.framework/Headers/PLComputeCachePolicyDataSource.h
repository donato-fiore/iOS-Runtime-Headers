// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCOMPUTECACHEPOLICYDATASOURCE_H
#define PLCOMPUTECACHEPOLICYDATASOURCE_H

@class NSDate;
@protocol PLComputeCachePolicyDataSource;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLComputeCachePolicyDataSource : NSObject <PLComputeCachePolicyDataSource>

 {
    PLPhotoLibrary *_photoLibrary;
    NSInteger _restoreState;
}


@property (readonly, nonatomic) NSUInteger assetCount;
@property (readonly, nonatomic) NSInteger iCloudStorageSizeInBytes;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSDate *lastSnapshotDate;
@property (readonly, nonatomic) NSInteger restoreState;


-(BOOL)hasAtLeastExpungedAssetCount:(NSUInteger)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 restoreState:(NSInteger)arg1 ;


@end


#endif