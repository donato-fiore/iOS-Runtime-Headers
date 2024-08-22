// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAFAMILYELIGIBILITYREQUEST_H
#define AAFAMILYELIGIBILITYREQUEST_H

@class ACAccount;


#import "AAFamilyRequest.h"

@interface AAFamilyEligibilityRequest : AAFamilyRequest

@property (retain, nonatomic) ACAccount *iTunesAccount; // ivar: _iTunesAccount


+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;


@end


#endif