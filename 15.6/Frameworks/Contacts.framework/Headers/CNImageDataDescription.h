// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIMAGEDATADESCRIPTION_H
#define CNIMAGEDATADESCRIPTION_H

@class NSString;
@protocol CNAbstractPropertyDescription;


#import "CNPropertyDescription.h"

@interface CNImageDataDescription : CNPropertyDescription <CNAbstractPropertyDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)ABValueForABPerson:(*void)arg0 ;
-(?)setABValue:(?)arg0 onABPersonerror;
-(BOOL)abPropertyID:(*int)arg0 ;
-(BOOL)isEqualForContact:(id)arg0 other:(id)arg1 ;
-(BOOL)setCNValue:(id)arg0 onABPerson:(*void)arg1 withDependentPropertiesContext:(id)arg2 error:(*id)arg3 ;
-(Class)valueClass;
-(id)CNValueForContact:(id)arg0 ;
-(id)init;
-(void)decodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)encodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)setCNValue:(id)arg0 onContact:(id)arg1 ;


@end


#endif