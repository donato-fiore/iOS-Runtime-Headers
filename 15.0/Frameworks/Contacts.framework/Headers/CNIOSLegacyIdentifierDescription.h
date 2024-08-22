// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNIOSLEGACYIDENTIFIERDESCRIPTION_H
#define CNIOSLEGACYIDENTIFIERDESCRIPTION_H

@class NSString;
@protocol CNAbstractPropertyDescription;


#import "CNPropertyDescription.h"

@interface CNIOSLegacyIdentifierDescription : CNPropertyDescription <CNAbstractPropertyDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)ABValueForABPerson:(*void)arg0 ;
-(?)setABValue:(?)arg0 onABPersonerror;
-(BOOL)isEqualForContact:(id)arg0 other:(id)arg1 ;
-(BOOL)isEqualIgnoringIdentifiersForContact:(id)arg0 other:(id)arg1 ;
-(Class)valueClass;
-(id)CNValueForContact:(id)arg0 ;
-(id)init;
-(id)nilValue;
-(id)valueWithResetIdentifiers:(id)arg0 ;
-(void)decodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)encodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)resetGuardianManagedValueOnContact:(id)arg0 ;
-(void)setCNValue:(id)arg0 onContact:(id)arg1 ;


@end


#endif