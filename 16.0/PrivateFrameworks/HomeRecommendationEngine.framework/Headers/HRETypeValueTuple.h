// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRETYPEVALUETUPLE_H
#define HRETYPEVALUETUPLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HRETypeValueTuple : NSObject

@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)type:(id)arg0 value:(id)arg1 ;
-(id)initWithType:(id)arg0 value:(id)arg1 ;


@end


#endif