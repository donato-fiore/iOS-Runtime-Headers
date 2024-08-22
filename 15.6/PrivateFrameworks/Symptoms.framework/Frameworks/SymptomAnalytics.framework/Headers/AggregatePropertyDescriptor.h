// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AGGREGATEPROPERTYDESCRIPTOR_H
#define AGGREGATEPROPERTYDESCRIPTOR_H

@class NSCoder, NSExpression, NSString;
@protocol NSSecureCoding;



@interface AggregatePropertyDescriptor : NSCoder <NSSecureCoding>



@property (readonly, nonatomic) NSExpression *expression; // ivar: _expression
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger resultType; // ivar: _resultType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 expression:(id)arg1 resultType:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif