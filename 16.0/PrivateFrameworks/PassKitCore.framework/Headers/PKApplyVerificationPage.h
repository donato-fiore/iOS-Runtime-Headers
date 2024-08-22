// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYVERIFICATIONPAGE_H
#define PKAPPLYVERIFICATIONPAGE_H



#import "PKDynamicProvisioningPageContent.h"

@interface PKApplyVerificationPage : PKDynamicProvisioningPageContent

@property (readonly, nonatomic) NSUInteger verificationCodeLength; // ivar: _verificationCodeLength
@property (readonly, nonatomic) NSUInteger verificationType; // ivar: _verificationType


-(id)initWithDictonary:(id)arg0 ;


@end


#endif