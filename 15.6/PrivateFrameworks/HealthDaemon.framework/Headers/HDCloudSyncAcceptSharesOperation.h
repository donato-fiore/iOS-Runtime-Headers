// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCACCEPTSHARESOPERATION_H
#define HDCLOUDSYNCACCEPTSHARESOPERATION_H

@class NSArray, NSDictionary, CKShareParticipant;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncAcceptSharesOperation : HDCloudSyncOperation

@property (readonly, copy, nonatomic) NSArray *acceptedShares; // ivar: _acceptedShares
@property (readonly, copy, nonatomic) NSDictionary *invitationTokensByShareURLs; // ivar: _invitationTokensByShareURLs
@property (readonly, copy, nonatomic) CKShareParticipant *ownerParticipant; // ivar: _ownerParticipant
@property (readonly, copy, nonatomic) NSArray *shareURLs; // ivar: _shareURLs


-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 shareURLs:(id)arg2 invitationTokensByShareURL:(id)arg3 ;
-(void)main;


@end


#endif