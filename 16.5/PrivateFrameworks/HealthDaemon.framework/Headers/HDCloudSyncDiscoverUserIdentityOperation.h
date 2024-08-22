// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCDISCOVERUSERIDENTITYOPERATION_H
#define HDCLOUDSYNCDISCOVERUSERIDENTITYOPERATION_H

@class CKUserIdentityLookupInfo, CKUserIdentity;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncDiscoverUserIdentityOperation : HDCloudSyncOperation {
    os_unfair_lock_s _lock;
    CKUserIdentityLookupInfo *_identityLookupInfo;
}


@property (readonly, copy, nonatomic) CKUserIdentity *userIdentity; // ivar: _userIdentity


-(id)initWithConfiguration:(id)arg0 identityLookupInfo:(id)arg1 ;
-(void)main;


@end


#endif