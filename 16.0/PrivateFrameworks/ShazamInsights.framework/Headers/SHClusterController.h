// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHCLUSTERCONTROLLER_H
#define SHCLUSTERCONTROLLER_H


#import <Foundation/Foundation.h>

#import "SHClusterSQLiteDataStore.h"
#import "SHClusterStatementRunner.h"

@interface SHClusterController : NSObject

@property (readonly, nonatomic) SHClusterSQLiteDataStore *dataStore; // ivar: _dataStore
@property (readonly, nonatomic) SHClusterStatementRunner *query; // ivar: _query


+(id)artistClusterDefaultLocationURL;
+(id)databaseURLForName:(id)arg0 ;
+(id)trackClusterDefaultLocationURL;
-(id)affinityGroupsAtCohesionLevel:(NSInteger)arg0 forQuery:(id)arg1 queryCollection:(id)arg2 filteredBy:(id)arg3 ;
-(id)filterQueryCollection:(id)arg0 byItemsWithinCluster:(id)arg1 ;
-(id)initWithDataStore:(id)arg0 ;
-(void)affinityGroupsFromQueryCollection:(id)arg0 filteredBySeedCollection:(id)arg1 completionHandler:(id)arg2 ;
-(void)mediaItemsForPropertyCollection:(id)arg0 completionHandler:(id)arg1 ;
-(void)mediaItemsSimilarToValue:(id)arg0 forKey:(id)arg1 completionHandler:(id)arg2 ;
// -(void)resultsFromQueryBlock:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif