// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLATTRIBUTETRIGGER_H
#define NSSQLATTRIBUTETRIGGER_H

@class NSPredicate, NSString, NSArray, NSMutableString, NSMutableArray;
@protocol NSSQLAttributeExtension;

#import <Foundation/Foundation.h>

#import "NSSQLEntity.h"
#import "NSSQLAttribute.h"
#import "NSSQLRelationship.h"

@interface NSSQLAttributeTrigger : NSObject <NSSQLAttributeExtension>

 {
    NSPredicate *_predicate;
    NSString *_predicateString;
    NSSQLEntity *_entity;
    NSSQLAttribute *_attribute;
    NSSQLRelationship *_relationship;
    NSSQLEntity *_destinationEntity;
    NSArray *_destinationAttributes;
    NSMutableString *_mToManyInnerFetchWhereClause;
    NSMutableString *_mToManyDecrementWhenClause;
    NSMutableString *_mToManyIncrementWhenClause;
    NSMutableString *_mOfClause;
    NSMutableString *_mOldMatchingClause;
    NSMutableString *_mNewMatchingClause;
    NSMutableString *_mColumnChangedClause;
    NSMutableArray *_mSqlDropStrings;
    NSMutableArray *_mBulkChangeStrings;
}


@property (readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *dropSQLStrings;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *insertSQLStrings; // ivar: _insertSQLStrings
@property (readonly) Class superclass;


-(BOOL)isEqualToExtension:(id)arg0 ;
-(BOOL)validate:(*id)arg0 ;
-(id)initWithObjectFromUserInfo:(id)arg0 onAttributeNamed:(id)arg1 onEntity:(id)arg2 ;
-(void)dealloc;


@end


#endif