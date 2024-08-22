// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADPROPERTYFILTER_H
#define CADPROPERTYFILTER_H

@class NSDate, NSString;


#import "CADFilter.h"

@interface CADPropertyFilter : CADFilter

@property (readonly, nonatomic) NSInteger comparison; // ivar: _comparison
@property (readonly, nonatomic) NSDate *dateValue; // ivar: _dateValue
@property (readonly, nonatomic) NSInteger integerValue; // ivar: _integerValue
@property (readonly, nonatomic) BOOL isDate;
@property (readonly, nonatomic) BOOL isInteger;
@property (readonly, nonatomic) BOOL isString;
@property (readonly, nonatomic) NSInteger property; // ivar: _property
@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
-(BOOL)applicableToEntityType:(int)arg0 ;
-(BOOL)validate;
-(BOOL)validateWithRequiredPropertyType:(int)arg0 ;
-(id)extendWhereClause:(id)arg0 usingOperation:(NSInteger)arg1 withValues:(id)arg2 andTypes:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperty:(NSInteger)arg0 comparison:(NSInteger)arg1 dateValue:(id)arg2 ;
-(id)initWithProperty:(NSInteger)arg0 comparison:(NSInteger)arg1 integerValue:(NSInteger)arg2 ;
-(id)initWithProperty:(NSInteger)arg0 comparison:(NSInteger)arg1 stringValue:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif