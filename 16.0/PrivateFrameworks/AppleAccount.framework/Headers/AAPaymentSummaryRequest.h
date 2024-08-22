// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAPAYMENTSUMMARYREQUEST_H
#define AAPAYMENTSUMMARYREQUEST_H

@class NSString;


#import "AAAppleIDSettingsRequest.h"

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest

@property (copy, nonatomic) NSString *heartbeatToken; // ivar: _heartbeatToken
@property (copy, nonatomic) NSString *secondaryAuthToken; // ivar: _secondaryAuthToken


+(Class)responseClass;
-(BOOL)forceGSToken;
-(id)urlRequest;
-(id)urlString;


@end


#endif