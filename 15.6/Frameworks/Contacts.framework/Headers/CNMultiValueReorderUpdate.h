// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMULTIVALUEREORDERUPDATE_H
#define CNMULTIVALUEREORDERUPDATE_H

@class NSOrderedSet;


#import "CNMultiValueUpdate.h"

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate

@property (readonly, copy, nonatomic) NSOrderedSet *values; // ivar: _values


-(BOOL)applyToABPerson:(*void)arg0 abmultivalue:(*void)arg1 propertyDescription:(id)arg2 logger:(id)arg3 error:(*id)arg4 ;
-(NSInteger)compareIndexOfIdentifier:(id)arg0 toIndexOfIdentifier:(id)arg1 ;
-(id)description;
-(id)initWithValues:(id)arg0 ;
-(void)applyToMutableMultiValue:(id)arg0 withIdentifierMap:(id)arg1 ;


@end


#endif