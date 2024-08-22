// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INHOMEACTION_H
#define INHOMEACTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INHomeAction : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL boolValue; // ivar: _boolValue
@property (readonly, nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (readonly, nonatomic) NSInteger integerValue; // ivar: _integerValue
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 boolValue:(BOOL)arg1 ;
-(id)initWithType:(NSInteger)arg0 doubleValue:(CGFloat)arg1 ;
-(id)initWithType:(NSInteger)arg0 integerValue:(NSInteger)arg1 ;
-(id)initWithType:(NSInteger)arg0 stringValue:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 valueType:(NSInteger)arg1 boolValue:(BOOL)arg2 doubleValue:(CGFloat)arg3 integerValue:(NSInteger)arg4 stringValue:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif