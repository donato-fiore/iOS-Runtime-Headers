// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKEYVALUEPAIR_H
#define STKEYVALUEPAIR_H


#import <Foundation/Foundation.h>


@interface STKeyValuePair : NSObject

@property (readonly, nonatomic) id *key; // ivar: _key
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)init;
-(id)initWithKey:(id)arg0 value:(id)arg1 ;


@end


#endif