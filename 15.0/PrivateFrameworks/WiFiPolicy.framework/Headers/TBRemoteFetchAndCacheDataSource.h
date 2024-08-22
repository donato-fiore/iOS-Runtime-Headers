// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBREMOTEFETCHANDCACHEDATASOURCE_H
#define TBREMOTEFETCHANDCACHEDATASOURCE_H

@protocol TBCacheProvider;

#import <Foundation/Foundation.h>

#import "TBDataSource.h"

@interface TBRemoteFetchAndCacheDataSource : NSObject

@property (retain, nonatomic) NSObject<TBCacheProvider> *cacheProvider; // ivar: _cacheProvider
@property (retain, nonatomic) TBDataSource *fetchDataSource; // ivar: _fetchDataSource


-(id)initWithFetchDataSource:(id)arg0 cacheProvider:(id)arg1 ;


@end


#endif