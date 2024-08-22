// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIATTRIBUTEDATE_H
#define DIATTRIBUTEDATE_H

@class NSDate;
@protocol NSSecureCoding;


#import "DIAttribute.h"

@interface DIAttributeDate : DIAttribute <NSSecureCoding>



@property (copy, nonatomic, getter=getCurrentValue) NSDate *currentValue; // ivar: currentValue
@property (copy, nonatomic) NSDate *defaultValue; // ivar: defaultValue
@property (nonatomic) BOOL requireDay; // ivar: _requireDay
@property (nonatomic) BOOL requireMonth; // ivar: _requireMonth
@property (nonatomic) BOOL requireYear; // ivar: _requireYear


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif