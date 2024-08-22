// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSDATEVALUE_H
#define ICSDATEVALUE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICSDateValue : NSObject <NSSecureCoding>



@property (readonly) NSInteger day; // ivar: _day
@property (readonly) NSInteger month; // ivar: _month
@property (readonly) NSInteger year; // ivar: _year


+(BOOL)supportsSecureCoding;
+(id)dateFromICSString:(id)arg0 ;
+(id)dateFromICSUTF8String:(char *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)components;
-(id)description;
-(id)icsString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 ;
-(int)dateType;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif