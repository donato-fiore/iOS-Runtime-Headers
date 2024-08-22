// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIALERTINGASSERTION_H
#define SAUIALERTINGASSERTION_H

@class SAAutomaticallyInvalidatingAssertion;


#import "SAUIPreferredLayoutModeAssertion.h"

@interface SAUIAlertingAssertion : SAAutomaticallyInvalidatingAssertion

@property (readonly, nonatomic) SAUIPreferredLayoutModeAssertion *preferredLayoutModeAssertion; // ivar: _preferredLayoutModeAssertion


-(id)initWithPreferredLayoutModeAssertion:(id)arg0 invalidationInterval:(CGFloat)arg1 ;


@end


#endif