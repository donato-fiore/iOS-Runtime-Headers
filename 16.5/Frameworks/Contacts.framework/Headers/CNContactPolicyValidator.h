// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTPOLICYVALIDATOR_H
#define CNCONTACTPOLICYVALIDATOR_H


#import <Foundation/Foundation.h>


@interface CNContactPolicyValidator : NSObject



+(BOOL)shouldIgnoreValidationCheckForProperty:(id)arg0 ;
+(id)contactFromContact:(id)arg0 conformingToPolicy:(id)arg1 options:(NSUInteger)arg2 ;
+(id)contactFromContact:(id)arg0 conformingToPolicy:(id)arg1 options:(NSUInteger)arg2 valueToStringTransform:(id)arg3 ;


@end


#endif