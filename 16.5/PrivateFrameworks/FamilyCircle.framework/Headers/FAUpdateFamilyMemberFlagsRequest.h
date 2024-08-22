// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAUPDATEFAMILYMEMBERFLAGSREQUEST_H
#define FAUPDATEFAMILYMEMBERFLAGSREQUEST_H

@class NSNumber, NSDictionary;


#import "FAFamilyCircleRequest.h"

@interface FAUpdateFamilyMemberFlagsRequest : FAFamilyCircleRequest {
    NSNumber *_dsid;
    NSDictionary *_flags;
}




-(id)initWithFamilyMemberDSID:(id)arg0 flags:(id)arg1 ;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif