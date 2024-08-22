// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLREADONLYSELECTINTERMEDIATE_H
#define NSSQLREADONLYSELECTINTERMEDIATE_H

@class NSMutableDictionary;


#import "NSSQLSelectIntermediate.h"

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
    BOOL _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}




-(BOOL)onlyFetchesAggregates;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithScope:(id)arg0 ;
-(id)resolveVariableExpression:(id)arg0 inContext:(id)arg1 ;
-(void)dealloc;


@end


#endif