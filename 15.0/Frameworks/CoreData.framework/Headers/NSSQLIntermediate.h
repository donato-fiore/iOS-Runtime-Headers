// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLINTERMEDIATE_H
#define NSSQLINTERMEDIATE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NSSQLIntermediate.h"
#import "NSSQLEntity.h"

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}


@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) BOOL disambiguationKeypathHasToMany;


+(BOOL)expressionIsBasicKeypath:(id)arg0 ;
+(BOOL)isSimpleKeypath:(id)arg0 ;
-(BOOL)isFunctionScoped;
-(BOOL)isHavingScoped;
-(BOOL)isIndexExpressionScoped;
-(BOOL)isIndexScoped;
-(BOOL)isOrScoped;
-(BOOL)isTargetColumnsScoped;
-(BOOL)isUpdateColumnsScoped;
-(BOOL)isUpdateScoped;
-(BOOL)isWhereScoped;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg0 ;
-(id)_generateSQLForKeyPathExpression:(id)arg0 allowToMany:(BOOL)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForVariableExpression:(id)arg0 allowToMany:(BOOL)arg1 inContext:(id)arg2 ;
-(id)_lastScopedItem;
-(id)fetchIntermediate;
-(id)fetchIntermediateForKeypathExpression:(id)arg0 ;
-(id)generateSQLStringInContext:(id)arg0 ;
-(id)governingAlias;
-(id)governingAliasForKeypathExpression:(id)arg0 ;
-(id)governingEntity;
-(id)governingEntityForKeypathExpression:(id)arg0 ;
-(id)initWithScope:(id)arg0 ;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg0 ;
-(void)_promoteJoinsForSubqueryScopedKeypaths;


@end


#endif