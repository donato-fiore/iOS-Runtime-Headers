// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSDATERANGEFIELD_H
#define PKPASSDATERANGEFIELD_H

@class NSDate;


#import "PKPassDateField.h"

@interface PKPassDateRangeField : PKPassDateField

@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)asMuteDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)value;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif