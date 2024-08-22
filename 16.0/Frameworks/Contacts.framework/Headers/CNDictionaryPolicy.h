// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNDICTIONARYPOLICY_H
#define CNDICTIONARYPOLICY_H

@class NSDictionary;


#import "CNPermissivePolicy.h"

@interface CNDictionaryPolicy : CNPermissivePolicy {
    NSDictionary *_policyDictionary;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isContactPropertySupported:(id)arg0 ;
-(NSUInteger)maximumCountOfValuesForContactProperty:(id)arg0 ;
-(NSUInteger)maximumCountOfValuesForContactProperty:(id)arg0 label:(id)arg1 ;
-(id)contactRestrictionsForLabeledProperty:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)supportedLabelsForContactProperty:(id)arg0 ;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif