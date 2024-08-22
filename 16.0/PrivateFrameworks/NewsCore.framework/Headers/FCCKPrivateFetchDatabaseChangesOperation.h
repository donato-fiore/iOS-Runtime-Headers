// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKPRIVATEFETCHDATABASECHANGESOPERATION_H
#define FCCKPRIVATEFETCHDATABASECHANGESOPERATION_H

@class NSArray;


#import "FCCKPrivateDatabaseOperation.h"
#import "FCCKPrivateDatabaseServerChangeToken.h"

@interface FCCKPrivateFetchDatabaseChangesOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) id *fetchDatabaseChangesCompletionBlock; // ivar: _fetchDatabaseChangesCompletionBlock
@property (copy, nonatomic) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (retain, nonatomic) NSArray *resultChangedZoneIDs; // ivar: _resultChangedZoneIDs
@property (retain, nonatomic) NSArray *resultDeletedZoneIDs; // ivar: _resultDeletedZoneIDs
@property (nonatomic) BOOL resultMoreComing; // ivar: _resultMoreComing
@property (retain, nonatomic) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken; // ivar: _resultServerChangeToken


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif