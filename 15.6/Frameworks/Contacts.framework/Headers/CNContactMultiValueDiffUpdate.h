// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTMULTIVALUEDIFFUPDATE_H
#define CNCONTACTMULTIVALUEDIFFUPDATE_H



#import "CNContactUpdate.h"
#import "CNMultiValueDiff.h"
#import "CNMultiValuePropertyDescription.h"

@interface CNContactMultiValueDiffUpdate : CNContactUpdate

@property (readonly) CNMultiValueDiff *diff; // ivar: _diff
@property (readonly) CNMultiValuePropertyDescription *property; // ivar: _property


-(BOOL)applyToABPerson:(*void)arg0 withPropertiesContext:(id)arg1 logger:(id)arg2 error:(*id)arg3 ;
-(id)description;
-(id)initWithProperty:(id)arg0 diff:(id)arg1 ;
-(void)applyToMutableContact:(id)arg0 withIdentifierMap:(id)arg1 ;


@end


#endif