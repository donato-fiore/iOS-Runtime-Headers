// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLVALUECOMPARISON_H
#define PLVALUECOMPARISON_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLValueComparison : NSObject

@property (readonly) short comparisonOperation; // ivar: _comparisonOperation
@property (readonly) NSString *comparisonOperationString;
@property (readonly) BOOL hasEqualComparisonComponent;
@property (readonly) BOOL hasGreaterThanComparisonComponent;
@property (readonly) BOOL hasLessThanComparisonComponent;
@property (readonly) BOOL hasNilComparisonComponent;
@property (readonly) NSString *key; // ivar: _key
@property (readonly) NSString *sqlWhereClause;
@property (readonly) id *value; // ivar: _value


-(id)description;
-(id)initWithKey:(id)arg0 withValue:(id)arg1 withComparisonOperation:(short)arg2 ;


@end


#endif