// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCFETCHSHARESOPERATION_H
#define HDCLOUDSYNCFETCHSHARESOPERATION_H

@class NSMutableArray, NSArray;


#import "HDCloudSyncSynchronousOperation.h"

@interface HDCloudSyncFetchSharesOperation : HDCloudSyncSynchronousOperation {
    os_unfair_lock_s _lock;
    NSMutableArray *_shares;
}


@property (nonatomic) BOOL fetchAllShares; // ivar: _fetchAllShares
@property (readonly, copy, nonatomic) NSArray *shares;


-(BOOL)performWithError:(*id)arg0 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;


@end


#endif