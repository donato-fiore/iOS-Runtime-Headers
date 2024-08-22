// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTKEYVALUEUPDATE_H
#define CNCONTACTKEYVALUEUPDATE_H



#import "CNContactUpdate.h"
#import "CNPropertyDescription.h"

@interface CNContactKeyValueUpdate : CNContactUpdate

@property (readonly) CNPropertyDescription *property; // ivar: _property
@property (readonly) id *value; // ivar: _value


-(BOOL)applyToABPerson:(*void)arg0 withPropertiesContext:(id)arg1 logger:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithProperty:(id)arg0 value:(id)arg1 ;
-(void)applyToMutableContact:(id)arg0 withIdentifierMap:(id)arg1 ;


@end


#endif