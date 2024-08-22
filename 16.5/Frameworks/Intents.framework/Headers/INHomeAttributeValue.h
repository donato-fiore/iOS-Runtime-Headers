// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INHOMEATTRIBUTEVALUE_H
#define INHOMEATTRIBUTEVALUE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INHomeAttributeRange.h"

@interface INHomeAttributeValue : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL boolValue; // ivar: _boolValue
@property (readonly, nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (readonly, nonatomic) NSInteger integerValue; // ivar: _integerValue
@property (readonly, nonatomic) NSInteger limitValue; // ivar: _limitValue
@property (readonly, nonatomic) INHomeAttributeRange *rangeValue; // ivar: _rangeValue
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger unit; // ivar: _unit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBoolValue:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDoubleValue:(CGFloat)arg0 unit:(NSInteger)arg1 ;
-(id)initWithIntegerValue:(NSInteger)arg0 unit:(NSInteger)arg1 ;
-(id)initWithLimitValue:(NSInteger)arg0 ;
-(id)initWithRangeValue:(id)arg0 ;
-(id)initWithStringValue:(id)arg0 unit:(NSInteger)arg1 ;
-(id)initWithType:(NSInteger)arg0 boolValue:(BOOL)arg1 doubleValue:(CGFloat)arg2 integerValue:(NSInteger)arg3 stringValue:(id)arg4 limitValue:(NSInteger)arg5 unit:(NSInteger)arg6 rangeValue:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif