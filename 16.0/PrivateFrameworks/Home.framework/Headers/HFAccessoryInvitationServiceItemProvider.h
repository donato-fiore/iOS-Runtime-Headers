// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYINVITATIONSERVICEITEMPROVIDER_H
#define HFACCESSORYINVITATIONSERVICEITEMPROVIDER_H

@class HMUser;


#import "HFServiceItemProvider.h"

@interface HFAccessoryInvitationServiceItemProvider : HFServiceItemProvider

@property (readonly, nonatomic) HMUser *user; // ivar: _user


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filter:(SEL)arg0 ;
-(id)initWithHome:(id)arg0 serviceTypes:(id)arg1 ;
-(id)initWithHome:(id)arg0 user:(id)arg1 ;
-(id)invalidationReasons;


@end


#endif