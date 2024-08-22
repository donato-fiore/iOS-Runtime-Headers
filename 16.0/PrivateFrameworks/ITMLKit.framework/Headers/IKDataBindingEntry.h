// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDATABINDINGENTRY_H
#define IKDATABINDINGENTRY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "IKDataBindingValue.h"

@interface IKDataBindingEntry : NSObject

@property (readonly, nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) IKDataBindingValue *value; // ivar: _value


-(id)initWithKey:(id)arg0 value:(id)arg1 attributes:(NSUInteger)arg2 ;


@end


#endif