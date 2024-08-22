// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAFAMILYELIGIBILITYRESPONSE_H
#define AAFAMILYELIGIBILITYRESPONSE_H

@class NSArray, NSString;


#import "AAResponse.h"

@interface AAFamilyEligibilityResponse : AAResponse

@property (readonly, nonatomic) NSInteger eligibilityStatus;
@property (readonly, nonatomic) BOOL eligible;
@property (readonly, nonatomic) NSArray *familyFeaturePrimaryDescriptions; // ivar: _familyFeaturePrimaryDescriptions
@property (readonly, nonatomic) NSArray *familyFeatureSecondaryDescriptions; // ivar: _familyFeatureSecondaryDescriptions
@property (readonly, nonatomic) NSString *familyFeatureSecondaryTitle; // ivar: _familyFeatureSecondaryTitle
@property (readonly, nonatomic) BOOL hasPendingInvites; // ivar: _hasPendingInvites
@property (readonly, nonatomic) NSString *underageEligibilityAlertMessage; // ivar: _underageEligibilityAlertMessage
@property (readonly, nonatomic) NSString *underageEligibilityAlertTitle; // ivar: _underageEligibilityAlertTitle


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif