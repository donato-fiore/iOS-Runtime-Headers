// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSAVAILABILITYINVITATIONREQUEST_H
#define DNDSAVAILABILITYINVITATIONREQUEST_H

@class NSArray, AKAvailabilityInvitation;

#import <Foundation/Foundation.h>


@interface DNDSAvailabilityInvitationRequest : NSObject

@property (readonly, copy) NSArray *handles; // ivar: _handles
@property (readonly, copy) AKAvailabilityInvitation *invitation; // ivar: _invitation


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithHandles:(id)arg0 invitation:(id)arg1 ;


@end


#endif