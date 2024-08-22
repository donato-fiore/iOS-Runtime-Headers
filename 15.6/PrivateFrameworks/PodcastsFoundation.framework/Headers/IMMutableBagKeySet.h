// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMUTABLEBAGKEYSET_H
#define IMMUTABLEBAGKEYSET_H

@class AMSMutableBagKeySet, NSMutableDictionary;



@interface IMMutableBagKeySet : AMSMutableBagKeySet

@property (retain, nonatomic) NSMutableDictionary *defaultValueMap; // ivar: _defaultValueMap
@property (retain, nonatomic) NSMutableDictionary *valueTypeMap; // ivar: _valueTypeMap


-(id)init;
-(void)addBagKey:(id)arg0 valueType:(NSUInteger)arg1 defaultValue:(id)arg2 ;


@end


#endif