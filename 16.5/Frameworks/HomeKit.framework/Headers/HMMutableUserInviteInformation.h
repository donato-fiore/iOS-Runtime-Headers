// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMUTABLEUSERINVITEINFORMATION_H
#define HMMUTABLEUSERINVITEINFORMATION_H

@class NSString;


#import "HMUserInviteInformation.h"
#import "HMUserHomeAccessSettings.h"

@interface HMMutableUserInviteInformation : HMUserInviteInformation

@property (copy) HMUserHomeAccessSettings *homeAccessSettings;
@property (copy) NSString *userID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif