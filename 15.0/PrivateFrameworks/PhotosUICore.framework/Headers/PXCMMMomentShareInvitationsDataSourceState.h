// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMMOMENTSHAREINVITATIONSDATASOURCESTATE_H
#define PXCMMMOMENTSHAREINVITATIONSDATASOURCESTATE_H

@class NSDictionary, PHFetchResult;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXCMMMomentShareInvitationsDataSourceState : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *invitationsByMomentShareObjectID; // ivar: _invitationsByMomentShareObjectID
@property (readonly, nonatomic) PHFetchResult *momentShares; // ivar: _momentShares


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMomentShares:(id)arg0 invitationsByMomentShareObjectID:(id)arg1 ;
-(id)stateUpdatedWithChange:(id)arg0 changeDetails:(*id)arg1 ;


@end


#endif