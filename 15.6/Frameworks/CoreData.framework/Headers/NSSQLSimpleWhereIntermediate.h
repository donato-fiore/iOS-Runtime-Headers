// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLSIMPLEWHEREINTERMEDIATE_H
#define NSSQLSIMPLEWHEREINTERMEDIATE_H

@class NSMutableArray, NSExpression;


#import "NSSQLWhereIntermediate.h"

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_comparisonPredicateScopedItem;
    NSExpression *_effectiveLeftExpression;
    NSExpression *_effectiveRightExpression;
}




-(BOOL)isWhereScoped;
-(id)_lastScopedItem;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 inScope:(id)arg1 ;
-(void)dealloc;


@end


#endif