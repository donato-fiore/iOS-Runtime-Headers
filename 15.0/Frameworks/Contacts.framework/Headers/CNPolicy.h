// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPOLICY_H
#define CNPOLICY_H


#import <Foundation/Foundation.h>


@interface CNPolicy : NSObject

@property (readonly, nonatomic, getter=isReadonly) BOOL readonly;


-(BOOL)_validateLabeledValueArrayAttributeSupport:(id)arg0 forContactProperty:(id)arg1 replacementValue:(*id)arg2 ;
-(BOOL)_validateLabeledValueArrayLabels:(id)arg0 forContactProperty:(id)arg1 replacementValue:(*id)arg2 ;
-(BOOL)isContactPropertySupported:(id)arg0 ;
-(BOOL)shouldAddContact:(id)arg0 ;
-(BOOL)shouldRemoveContact:(id)arg0 ;
-(BOOL)shouldSetValue:(id)arg0 property:(id)arg1 contact:(id)arg2 replacementValue:(*id)arg3 ;
-(NSUInteger)maximumCountOfValuesForContactProperty:(id)arg0 ;
-(NSUInteger)maximumCountOfValuesForContactProperty:(id)arg0 label:(id)arg1 ;
-(id)_replacementLabeledValue:(id)arg0 omittingKeys:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg0 ;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg0 ;


@end


#endif