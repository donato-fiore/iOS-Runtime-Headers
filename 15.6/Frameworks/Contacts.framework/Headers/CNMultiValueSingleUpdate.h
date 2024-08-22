// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMULTIVALUESINGLEUPDATE_H
#define CNMULTIVALUESINGLEUPDATE_H



#import "CNMultiValueUpdate.h"
#import "CNLabeledValue.h"

@interface CNMultiValueSingleUpdate : CNMultiValueUpdate

@property (readonly, nonatomic) CNLabeledValue *value; // ivar: _value


-(id)description;
-(id)initWithValue:(id)arg0 ;


@end


#endif