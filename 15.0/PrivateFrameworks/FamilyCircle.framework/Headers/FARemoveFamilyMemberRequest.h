// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAREMOVEFAMILYMEMBERREQUEST_H
#define FAREMOVEFAMILYMEMBERREQUEST_H

@class NSNumber;


#import "FAFamilyCircleRequest.h"

@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest

@property (readonly, copy) NSNumber *memberDSID; // ivar: _memberDSID


-(id)initWithFamilyMemberDSID:(id)arg0 ;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif