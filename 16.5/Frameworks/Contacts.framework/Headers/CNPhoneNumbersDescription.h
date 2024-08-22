// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHONENUMBERSDESCRIPTION_H
#define CNPHONENUMBERSDESCRIPTION_H

@class NSString;
@protocol CNAbstractPropertyDescription;


#import "CNMultiValuePropertyDescription.h"

@interface CNPhoneNumbersDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)ABMultiValueValueFromCNLabeledValueValue:(id)arg0 ;
-(BOOL)abPropertyID:(*int)arg0 ;
-(BOOL)canUnifyValue:(id)arg0 withValue:(id)arg1 ;
-(BOOL)isEqualForContact:(id)arg0 other:(id)arg1 ;
-(BOOL)isNonnull;
-(Class)labeledValueClass;
-(id)CNLabeledValueValueFromABMultiValueValue:(*void)arg0 ;
-(id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)CNValueForContact:(id)arg0 ;
-(id)equivalentLabelSets;
-(id)fromPlistTransform:(SEL)arg0 ;
-(id)init;
-(id)plistTransform:(SEL)arg0 ;
-(id)standardLabels;
-(id)stringForIndexingForContact:(id)arg0 ;
-(void)decodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)encodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)setCNValue:(id)arg0 onContact:(id)arg1 ;


@end


#endif