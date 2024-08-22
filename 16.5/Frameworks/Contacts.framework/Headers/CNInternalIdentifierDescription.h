// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNINTERNALIDENTIFIERDESCRIPTION_H
#define CNINTERNALIDENTIFIERDESCRIPTION_H

@class NSString;
@protocol CNAbstractPropertyDescription;


#import "CNPropertyDescription.h"

@interface CNInternalIdentifierDescription : CNPropertyDescription <CNAbstractPropertyDescription>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)ABValueFromCNValue:(id)arg0 ;
-(BOOL)abPropertyID:(*int)arg0 ;
-(BOOL)isEqualForContact:(id)arg0 other:(id)arg1 ;
-(BOOL)isEqualIgnoringIdentifiersForContact:(id)arg0 other:(id)arg1 ;
-(Class)valueClass;
-(id)CNValueForContact:(id)arg0 ;
-(id)CNValueFromABValue:(*void)arg0 ;
-(id)init;
-(void)decodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)encodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)setCNValue:(id)arg0 onContact:(id)arg1 ;


@end


#endif