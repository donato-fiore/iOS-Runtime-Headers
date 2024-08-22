// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGLABELEDVALUE_H
#define SGLABELEDVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGLabeledValue : NSObject

@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLabeledValue:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithLabel:(id)arg0 value:(id)arg1 ;


@end


#endif