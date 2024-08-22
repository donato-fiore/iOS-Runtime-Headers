// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMULTIVALUEREMOVEUPDATE_H
#define CNMULTIVALUEREMOVEUPDATE_H



#import "CNMultiValueSingleUpdate.h"

@interface CNMultiValueRemoveUpdate : CNMultiValueSingleUpdate



-(BOOL)applyToABPerson:(*void)arg0 abmultivalue:(*void)arg1 propertyDescription:(id)arg2 isUnified:(BOOL)arg3 logger:(id)arg4 error:(*id)arg5 ;
-(void)applyToMutableMultiValue:(id)arg0 withIdentifierMap:(id)arg1 ;


@end


#endif