// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPICKERCONTACTFIELDCONFIGURATION_H
#define PKPICKERCONTACTFIELDCONFIGURATION_H

@class NSArray;
@protocol NSSecureCoding;


#import "PKContactFieldConfiguration.h"

@interface PKPickerContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding>



@property (readonly, nonatomic) NSArray *pickerItems; // ivar: _pickerItems


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif