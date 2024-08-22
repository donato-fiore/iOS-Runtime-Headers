// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMUTABLEASSETDOWNLOADSTORAGEMANAGEMENTPOLICY_H
#define AVMUTABLEASSETDOWNLOADSTORAGEMANAGEMENTPOLICY_H

@class NSDate, NSString;


#import "AVAssetDownloadStorageManagementPolicy.h"

@interface AVMutableAssetDownloadStorageManagementPolicy : AVAssetDownloadStorageManagementPolicy

@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *priority;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif