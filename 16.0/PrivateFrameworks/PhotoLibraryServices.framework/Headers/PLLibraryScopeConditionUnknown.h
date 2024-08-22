// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLIBRARYSCOPECONDITIONUNKNOWN_H
#define PLLIBRARYSCOPECONDITIONUNKNOWN_H

@class NSArray;


#import "PLLibraryScopeCondition.h"

@interface PLLibraryScopeConditionUnknown : PLLibraryScopeCondition

@property (copy, nonatomic) NSArray *unknownSingleQueries; // ivar: _unknownSingleQueries


+(BOOL)supportsQueryKey:(int)arg0 ;
+(id)conditionWithSingleQueries:(id)arg0 criteria:(unsigned char)arg1 ;
-(id)conditionQuery;
-(unsigned char)type;


@end


#endif