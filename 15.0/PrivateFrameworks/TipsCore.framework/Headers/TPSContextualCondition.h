// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCONTEXTUALCONDITION_H
#define TPSCONTEXTUALCONDITION_H

@class NSDate, NSArray;


#import "TPSSerializableObject.h"

@interface TPSContextualCondition : TPSSerializableObject

@property (nonatomic) NSUInteger joinType; // ivar: _joinType
@property (copy, nonatomic) NSDate *matchedDate; // ivar: _matchedDate
@property (copy, nonatomic) NSArray *rules; // ivar: _rules
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)eventsForConditionDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)eventIdentifiers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 type:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)restartTracking;


@end


#endif