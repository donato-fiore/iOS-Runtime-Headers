// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCLUSTERLOADER_H
#define SHCLUSTERLOADER_H

@protocol SHDataFetcher;

#import <Foundation/Foundation.h>

#import "SHClusterSQLiteDataStore.h"

@interface SHClusterLoader : NSObject

@property (readonly, nonatomic) NSObject<SHDataFetcher> *dataFetcher; // ivar: _dataFetcher
@property (readonly, nonatomic) SHClusterSQLiteDataStore *dataStore; // ivar: _dataStore


+(void)loadDataForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithDataFetcher:(id)arg0 dataStore:(id)arg1 ;
-(void)loadFromURL:(id)arg0 type:(NSInteger)arg1 storefront:(id)arg2 reuseExistingData:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif