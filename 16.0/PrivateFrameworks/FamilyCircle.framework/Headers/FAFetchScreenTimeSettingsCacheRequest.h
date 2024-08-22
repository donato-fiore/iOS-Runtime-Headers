// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFETCHSCREENTIMESETTINGSCACHEREQUEST_H
#define FAFETCHSCREENTIMESETTINGSCACHEREQUEST_H

@class NSNumber;


#import "FAFamilyCircleRequest.h"

@interface FAFetchScreenTimeSettingsCacheRequest : FAFamilyCircleRequest

@property (readonly, copy) NSNumber *memberDSID; // ivar: _memberDSID


-(id)enableSettings:(*id)arg0 ;
-(id)initWithFamilyMemberDSID:(id)arg0 ;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif