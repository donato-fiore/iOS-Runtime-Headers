// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTAINERRESTRICTIONSDESCRIPTION_H
#define CNCONTAINERRESTRICTIONSDESCRIPTION_H



#import "CNContainerPropertyDescription.h"

@interface CNContainerRestrictionsDescription : CNContainerPropertyDescription



-(*void)ABValueFromCNValue:(id)arg0 ;
-(?)setABValue:(?)arg0 onABSourceerror;
-(BOOL)isConvertibleABValue:(*void)arg0 ;
-(BOOL)isValidValue:(id)arg0 error:(*id)arg1 ;
-(BOOL)isWritable;
-(Class)valueClass;
-(id)CNValueForContainer:(id)arg0 ;
-(id)CNValueFromABValue:(*void)arg0 ;
-(id)key;
-(int)abPropertyID;
-(void)setCNValue:(id)arg0 onContainer:(id)arg1 ;


@end


#endif