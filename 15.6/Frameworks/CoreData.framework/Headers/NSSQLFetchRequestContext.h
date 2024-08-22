// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLFETCHREQUESTCONTEXT_H
#define NSSQLFETCHREQUESTCONTEXT_H

@class NSString, NSMutableSet, NSMutableArray, NSDictionary;


#import "NSSQLStoreRequestContext.h"
#import "NSSQLModel.h"
#import "NSSQLEntity.h"
#import "NSFaultHandler.h"
#import "_PFFetchPlanHeader.h"
#import "NSSQLiteStatement.h"
#import "NSSQLFetchRequestContext.h"
#import "NSFetchRequest.h"

@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext {
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesDirectory;
    NSSQLModel *_sqlModel;
    NSSQLEntity *_sqlEntity;
    NSFaultHandler *_faultHandler;
    _PFFetchPlanHeader *_fetchPlan;
    NSSQLiteStatement *_statement;
    NSMutableSet *_objectIDsToRegister;
    NSMutableSet *_objectsToAwaken;
    NSMutableArray *_resultFaultsThatWereFired;
    NSSQLFetchRequestContext *_parentContext;
    int _fileProtectionLevel;
    NSFetchRequest *_originalRequest;
    BOOL _storeIsUbiquitized;
    BOOL _isUsingCachedStatement;
    NSMutableArray *_concurrentFetchingPipelineRows;
    NSDictionary *_prefetchingSubstitutionVariables;
}


@property (retain, nonatomic) NSSQLiteStatement *fetchStatement;
@property (nonatomic) BOOL isFaultRequest; // ivar: _isFaultRequest
@property (readonly, nonatomic) NSFetchRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches; // ivar: _shouldUseBatches


-(BOOL)executeRequestCore:(*id)arg0 ;
-(id)_createStatement;
-(id)createChildContextForNestedFetchRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 context:(id)arg1 sqlCore:(id)arg2 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg0 onEntity:(id)arg1 ;
-(void)dealloc;
-(void)executeEpilogue;
-(void)executePrologue;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;


@end


#endif