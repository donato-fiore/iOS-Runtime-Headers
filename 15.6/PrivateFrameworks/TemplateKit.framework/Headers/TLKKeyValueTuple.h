// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKKEYVALUETUPLE_H
#define TLKKEYVALUETUPLE_H

@class NSString;


#import "TLKObject.h"

@interface TLKKeyValueTuple : TLKObject

@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *value; // ivar: _value


+(id)tupleWithKey:(id)arg0 value:(id)arg1 ;
+(id)tuplesForDictionary:(id)arg0 ;
+(id)tuplesForKeys:(id)arg0 values:(id)arg1 ;


@end


#endif