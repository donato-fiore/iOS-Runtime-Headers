// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABPOLICY_H
#define CNIOSABPOLICY_H

@protocol NSSecureCoding;


#import "CNPolicy.h"

@interface CNiOSABPolicy : CNPolicy <NSSecureCoding>

 {
    *void _iOSABPolicy;
    *void _fakePerson;
    BOOL _abSourceIsContentReadonly;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPolicy:(id)arg0 ;
-(BOOL)isReadonly;
-(BOOL)shouldAddContact:(id)arg0 ;
-(BOOL)shouldRemoveContact:(id)arg0 ;
-(BOOL)shouldSetValue:(id)arg0 property:(id)arg1 contact:(id)arg2 replacementValue:(*id)arg3 ;
-(NSUInteger)maximumCountOfValuesForContactProperty:(id)arg0 ;
-(NSUInteger)maximumCountOfValuesForContactProperty:(id)arg0 label:(id)arg1 ;
-(id)_orderedLabels:(id)arg0 withOrder:(id)arg1 ;
-(id)initWithAddressBookPolicy:(*void)arg0 readOnly:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)supportedLabelsForContactProperty:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif