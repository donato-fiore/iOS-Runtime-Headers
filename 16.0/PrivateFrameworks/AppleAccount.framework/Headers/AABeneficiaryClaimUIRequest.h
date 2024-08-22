// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AABENEFICIARYCLAIMUIREQUEST_H
#define AABENEFICIARYCLAIMUIREQUEST_H

@class NSString;


#import "AAAppleIDSettingsRequest.h"

@interface AABeneficiaryClaimUIRequest : AAAppleIDSettingsRequest {
    NSString *_claimCode;
}




-(id)initWithGrandSlamAccount:(id)arg0 accountStore:(id)arg1 claimCode:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif