// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSDELIVERYPRECONDITION_H
#define TPSDELIVERYPRECONDITION_H

@class TPSSerializableObject, NSArray;



@interface TPSDeliveryPrecondition : TPSSerializableObject

@property (copy, nonatomic) NSArray *conditions; // ivar: _conditions
@property (nonatomic) NSInteger joinType; // ivar: _joinType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif