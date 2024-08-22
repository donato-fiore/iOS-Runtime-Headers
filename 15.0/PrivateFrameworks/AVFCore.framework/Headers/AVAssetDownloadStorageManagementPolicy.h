// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETDOWNLOADSTORAGEMANAGEMENTPOLICY_H
#define AVASSETDOWNLOADSTORAGEMANAGEMENTPOLICY_H

@class NSDate, NSString;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "AVAssetDownloadStorageManagementPolicyInternal.h"

@interface AVAssetDownloadStorageManagementPolicy : NSObject <NSCopying, NSMutableCopying>

 {
    AVAssetDownloadStorageManagementPolicyInternal *_storageManagementPolicy;
}


@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *priority;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_policyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_setPolicyDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif