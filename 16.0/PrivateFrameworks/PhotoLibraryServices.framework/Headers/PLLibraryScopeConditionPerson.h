// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLIBRARYSCOPECONDITIONPERSON_H
#define PLLIBRARYSCOPECONDITIONPERSON_H

@class NSArray;


#import "PLLibraryScopeCondition.h"

@interface PLLibraryScopeConditionPerson : PLLibraryScopeCondition

@property (copy, nonatomic) NSArray *personUUIDs; // ivar: _personUUIDs


+(BOOL)supportsQueryKey:(int)arg0 ;
+(id)conditionWithSingleQueries:(id)arg0 criteria:(unsigned char)arg1 ;
-(BOOL)replaceTombstonePersonUUID:(id)arg0 withPersonUUID:(id)arg1 ;
-(id)conditionQuery;
-(id)description;
-(unsigned char)type;


@end


#endif