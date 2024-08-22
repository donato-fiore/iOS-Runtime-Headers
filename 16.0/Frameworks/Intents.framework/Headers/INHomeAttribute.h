// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INHOMEATTRIBUTE_H
#define INHOMEATTRIBUTE_H

@class NSString;
@protocol INHomeAttributeExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INHomeAttribute : NSObject <INHomeAttributeExport, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL boolValue; // ivar: _boolValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 boolValue:(BOOL)arg1 ;
-(id)initWithType:(NSInteger)arg0 doubleValue:(CGFloat)arg1 ;
-(id)initWithType:(NSInteger)arg0 stringValue:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 valueType:(NSInteger)arg1 boolValue:(BOOL)arg2 doubleValue:(CGFloat)arg3 stringValue:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif