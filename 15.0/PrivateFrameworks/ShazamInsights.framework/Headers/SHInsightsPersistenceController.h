// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHINSIGHTSPERSISTENCECONTROLLER_H
#define SHINSIGHTSPERSISTENCECONTROLLER_H

@class SKCloudServiceController;
@protocol SHDataFetcher, SHDataStore;

#import <Foundation/Foundation.h>


@interface SHInsightsPersistenceController : NSObject

@property (readonly, nonatomic) SKCloudServiceController *cloudServiceController; // ivar: _cloudServiceController
@property (readonly, nonatomic) NSObject<SHDataFetcher> *dataFetcher; // ivar: _dataFetcher
@property (readonly, nonatomic) NSObject<SHDataStore> *dataStore; // ivar: _dataStore


-(id)initWithDataFetcher:(id)arg0 dataStore:(id)arg1 ;
-(void)clustersForLocation:(id)arg0 date:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchDataForCountryCode:(id)arg0 withCompletion:(id)arg1 ;
-(void)loadTargetingDataWithCompletion:(id)arg0 ;
-(void)queryWithCompletion:(id)arg0 ;
-(void)removeAllTargeting;


@end


#endif