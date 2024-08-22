// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCHANGEHISTORYLABELEDVALUECHANGE_H
#define CNCHANGEHISTORYLABELEDVALUECHANGE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNChangeHistoryLabeledValueChange : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) NSString *labeledValueIdentifier; // ivar: _labeledValueIdentifier
@property (readonly, copy, nonatomic) NSString *propertyKey; // ivar: _propertyKey


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 propertyKey:(id)arg1 labeledValueIdentifier:(id)arg2 changeType:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif