// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFFEATURESTORE_H
#define LCFFEATURESTORE_H


#import <Foundation/Foundation.h>

#import "LCFBiomeManager.h"
#import "LCFDatabaseConnection.h"

@interface LCFFeatureStore : NSObject

@property (readonly, nonatomic) LCFBiomeManager *biomeManagerVirtualFeatureStore; // ivar: _biomeManagerVirtualFeatureStore
@property (readonly, nonatomic) LCFDatabaseConnection *dbFeatureStore; // ivar: _dbFeatureStore
@property (readonly, nonatomic) BOOL useSqlite; // ivar: _useSqlite


-(BOOL)updateFeatureSet:(id)arg0 ;
-(BOOL)updateFeatureSet:(id)arg0 featureVestion:(id)arg1 featureValues:(id)arg2 ;
-(id)getFeatureVector:(id)arg0 ;
-(id)getFeatureVector:(id)arg0 atTime:(id)arg1 ;
-(id)getFeatureVectorTimestamps;
-(id)getFeatureVectorWithStoreEvents:(id)arg0 storeEventsInReversedOrder:(id)arg1 ;
-(id)getFeatureVectors:(id)arg0 ;
-(id)getFeatureVectors:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 ;
-(id)getMultiArrayFeatureVectors:(id)arg0 vectorName:(id)arg1 labelName:(id)arg2 ;
-(id)getMultiArrayFeatureVectors:(id)arg0 vectorName:(id)arg1 labelName:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 ;
-(id)init:(id)arg0 url:(id)arg1 useSqlite:(BOOL)arg2 ;


@end


#endif