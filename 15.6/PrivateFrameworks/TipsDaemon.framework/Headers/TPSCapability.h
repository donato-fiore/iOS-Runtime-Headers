// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCAPABILITY_H
#define TPSCAPABILITY_H

@class TPSSerializableObject, NSString;



@interface TPSCapability : TPSSerializableObject

@property (nonatomic) NSInteger joinType; // ivar: _joinType
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) id *value; // ivar: _value


-(id)debugDescription;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif