// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFAMILYMEMBERDETAILSUIREQUEST_H
#define FAFAMILYMEMBERDETAILSUIREQUEST_H

@class NSNumber, NSString;


#import "FAFamilyRequest.h"

@interface FAFamilyMemberDetailsUIRequest : FAFamilyRequest

@property (copy, nonatomic) NSNumber *memberDSID; // ivar: _memberDSID
@property (copy, nonatomic) NSString *memberEmail; // ivar: _memberEmail


-(BOOL)isUserInitiated;
-(id)_endpoint;
-(id)_queryString;
-(void)URLRequestWithCompletion:(id)arg0 ;


@end


#endif