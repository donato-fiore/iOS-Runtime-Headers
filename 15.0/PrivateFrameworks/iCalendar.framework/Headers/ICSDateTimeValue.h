// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSDATETIMEVALUE_H
#define ICSDATETIMEVALUE_H

@protocol NSSecureCoding;


#import "ICSDateValue.h"

@interface ICSDateTimeValue : ICSDateValue <NSSecureCoding>



@property (readonly) NSInteger hour; // ivar: _hour
@property (readonly) NSInteger minute; // ivar: _minute
@property (readonly) NSInteger second; // ivar: _second


+(BOOL)supportsSecureCoding;
-(id)components;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 ;
-(id)initWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 hour:(NSInteger)arg3 minute:(NSInteger)arg4 second:(NSInteger)arg5 ;
-(int)dateType;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif