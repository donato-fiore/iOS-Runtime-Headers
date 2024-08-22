// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAQUOTAINFORESPONSE_H
#define AAQUOTAINFORESPONSE_H

@class NSDictionary, NSNumber, NSString, NSURL, NSArray;


#import "AAResponse.h"

@interface AAQuotaInfoResponse : AAResponse {
    NSDictionary *_quotaInfo;
    NSDictionary *_endPoints;
    NSDictionary *_storageInfo;
    NSDictionary *_storageMeterLabel;
}


@property (readonly, nonatomic) NSNumber *availableStorageInBytes;
@property (readonly, nonatomic) NSString *displayLabel;
@property (readonly, nonatomic) BOOL hasMaxTier;
@property (readonly, nonatomic) NSURL *manageStorageURL;
@property (readonly, nonatomic) NSNumber *totalStorageInBytes;
@property (readonly, nonatomic) NSArray *usage; // ivar: _usage
@property (readonly, nonatomic) NSNumber *usedStorageInBytes;


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;
-(void)_initFromResponseDict;
-(void)updateAccount:(id)arg0 completion:(id)arg1 ;


@end


#endif