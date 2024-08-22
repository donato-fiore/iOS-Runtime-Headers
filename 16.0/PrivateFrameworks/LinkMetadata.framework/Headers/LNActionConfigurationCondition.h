// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNACTIONCONFIGURATIONCONDITION_H
#define LNACTIONCONFIGURATIONCONDITION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LNValue.h"

@interface LNActionConfigurationCondition : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger comparisonOperator; // ivar: _comparisonOperator
@property (readonly, copy, nonatomic) NSString *parameterIdentifier; // ivar: _parameterIdentifier
@property (readonly, nonatomic) LNValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameterIdentifier:(id)arg0 comparisonOperator:(NSInteger)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif