// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TBPREFERLOCALFETCHDATASOURCE_H
#define TBPREFERLOCALFETCHDATASOURCE_H

@protocol TBCacheProvider;

#import <Foundation/Foundation.h>

#import "TBDataSource.h"

@interface TBPreferLocalFetchDataSource : NSObject

@property (retain, nonatomic) NSObject<TBCacheProvider> *cacheProvider; // ivar: _cacheProvider
@property (retain, nonatomic) TBDataSource *localDataSource; // ivar: _localDataSource
@property (retain, nonatomic) TBDataSource *remoteDataSource; // ivar: _remoteDataSource


-(id)initWithLocalDataSource:(id)arg0 remoteDataSource:(id)arg1 cacheProvider:(id)arg2 ;


@end


#endif