// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTAINERACCOUNTIDENTIFIERDESCRIPTION_H
#define CNCONTAINERACCOUNTIDENTIFIERDESCRIPTION_H



#import "CNContainerPropertyDescription.h"

@interface CNContainerAccountIdentifierDescription : CNContainerPropertyDescription



-(*void)ABValueForABSource:(*void)arg0 ;
-(*void)ABValueFromCNValue:(id)arg0 ;
-(?)setABValue:(?)arg0 onABSourceerror;
-(BOOL)isWritable;
-(Class)valueClass;
-(id)CNValueForContainer:(id)arg0 ;
-(id)CNValueFromABValue:(*void)arg0 ;
-(id)key;
-(int)abPropertyID;
-(void)setCNValue:(id)arg0 onContainer:(id)arg1 ;


@end


#endif