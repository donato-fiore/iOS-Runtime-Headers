// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FACANCELINVITATIONREQUEST_H
#define FACANCELINVITATIONREQUEST_H

@class NSString;


#import "FAFamilyCircleRequest.h"

@interface FACancelInvitationRequest : FAFamilyCircleRequest {
    NSString *_email;
    NSString *_familyID;
}




-(id)initWith:(id)arg0 familyID:(id)arg1 ;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif