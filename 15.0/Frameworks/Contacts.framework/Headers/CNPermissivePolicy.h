// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPERMISSIVEPOLICY_H
#define CNPERMISSIVEPOLICY_H



#import "CNPolicy.h"

@interface CNPermissivePolicy : CNPolicy



+(id)sharedPermissivePolicy;
-(BOOL)isContactPropertySupported:(id)arg0 ;
-(BOOL)isReadonly;
-(BOOL)shouldAddContact:(id)arg0 ;
-(BOOL)shouldRemoveContact:(id)arg0 ;
-(BOOL)shouldSetValue:(id)arg0 ofProperty:(id)arg1 onContact:(id)arg2 replacementValue:(*id)arg3 ;
-(NSUInteger)maximumCountOfValuesForContactProperty:(id)arg0 ;
-(NSUInteger)maximumCountOfValuesForContactProperty:(id)arg0 label:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg0 ;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg0 ;
-(id)unsupportedKeyPathsForContactProperty:(id)arg0 ;


@end


#endif