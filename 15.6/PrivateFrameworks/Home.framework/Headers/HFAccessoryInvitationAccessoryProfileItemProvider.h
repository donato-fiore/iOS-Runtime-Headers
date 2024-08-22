// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYINVITATIONACCESSORYPROFILEITEMPROVIDER_H
#define HFACCESSORYINVITATIONACCESSORYPROFILEITEMPROVIDER_H

@class HMUser;


#import "HFAccessoryProfileItemProvider.h"

@interface HFAccessoryInvitationAccessoryProfileItemProvider : HFAccessoryProfileItemProvider

@property (readonly, nonatomic) HMUser *user; // ivar: _user


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 user:(id)arg1 ;
-(id)invalidationReasons;


@end


#endif