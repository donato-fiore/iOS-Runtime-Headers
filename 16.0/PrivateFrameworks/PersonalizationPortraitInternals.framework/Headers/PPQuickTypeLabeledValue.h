// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPQUICKTYPELABELEDVALUE_H
#define PPQUICKTYPELABELEDVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PPQuickTypeLabeledValue : NSObject

@property (readonly, nonatomic) unsigned int fields; // ivar: _fields
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) CGFloat scoreBoost; // ivar: _scoreBoost
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(id)labeledValueWithLabel:(id)arg0 value:(id)arg1 ;
+(id)labeledValueWithLabel:(id)arg0 value:(id)arg1 scoreBoost:(CGFloat)arg2 ;
+(id)labeledValueWithLabel:(id)arg0 value:(id)arg1 scoreBoost:(CGFloat)arg2 fields:(unsigned int)arg3 ;
-(id)initWithLabel:(id)arg0 value:(id)arg1 scoreBoost:(CGFloat)arg2 fields:(unsigned int)arg3 ;


@end


#endif