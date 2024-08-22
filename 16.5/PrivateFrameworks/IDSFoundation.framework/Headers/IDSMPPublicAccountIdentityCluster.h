// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSMPPUBLICACCOUNTIDENTITYCLUSTER_H
#define IDSMPPUBLICACCOUNTIDENTITYCLUSTER_H



#import "IDSMPIdentity.h"
#import "IDSMPPublicAccountIdentity.h"

@interface IDSMPPublicAccountIdentityCluster : IDSMPIdentity

@property (readonly, nonatomic) IDSMPPublicAccountIdentity *publicAccountIdentity;


-(BOOL)isParentOfCluster:(id)arg0 ;
-(id)dataRepresentationWithError:(*id)arg0 ;


@end


#endif