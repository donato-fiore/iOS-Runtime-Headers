// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIATTRIBUTEPICKER_H
#define DIATTRIBUTEPICKER_H

@class NSArray;
@protocol NSSecureCoding;


#import "DIAttribute.h"
#import "DIAttributePickerItem.h"

@interface DIAttributePicker : DIAttribute <NSSecureCoding>



@property (copy, nonatomic, getter=getCurrentValue) DIAttributePickerItem *currentValue; // ivar: currentValue
@property (copy, nonatomic) DIAttributePickerItem *defaultValue; // ivar: defaultValue
@property (copy, nonatomic) NSArray *pickerItems; // ivar: _pickerItems


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif