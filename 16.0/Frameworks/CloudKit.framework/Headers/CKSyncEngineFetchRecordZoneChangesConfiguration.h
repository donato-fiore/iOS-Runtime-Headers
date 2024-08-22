// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSYNCENGINEFETCHRECORDZONECHANGESCONFIGURATION_H
#define CKSYNCENGINEFETCHRECORDZONECHANGESCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "CKFetchRecordZoneChangesConfiguration.h"

@interface CKSyncEngineFetchRecordZoneChangesConfiguration : NSObject

@property (retain, nonatomic) CKFetchRecordZoneChangesConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL shouldFetchAssetContents; // ivar: _shouldFetchAssetContents


-(id)init;


@end


#endif