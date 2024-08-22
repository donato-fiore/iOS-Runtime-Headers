// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCLOOKUPPARTICIPANTOPERATION_H
#define HDCLOUDSYNCLOOKUPPARTICIPANTOPERATION_H

@class CKUserIdentityLookupInfo, CKShareParticipant;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncLookupParticipantOperation : HDCloudSyncOperation {
    CKUserIdentityLookupInfo *_identityLookupInfo;
}


@property (readonly) CKShareParticipant *participant; // ivar: _participant


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 identityLookupInfo:(id)arg2 ;
-(void)main;


@end


#endif