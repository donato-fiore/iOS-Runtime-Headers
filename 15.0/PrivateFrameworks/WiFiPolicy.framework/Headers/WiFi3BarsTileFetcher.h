// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFI3BARSTILEFETCHER_H
#define WIFI3BARSTILEFETCHER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>

#import "TBDataSourceMediator.h"
#import "WiFi3BarsTileCacheObserver.h"

@interface WiFi3BarsTileFetcher : NSObject

@property (readonly, nonatomic) NSXPCConnection *connectionToService; // ivar: _connectionToService
@property (retain, nonatomic) TBDataSourceMediator *dataSourceMediator; // ivar: _dataSourceMediator
@property (nonatomic) NSUInteger lastFetchedKey; // ivar: _lastFetchedKey
@property (retain, nonatomic) WiFi3BarsTileCacheObserver *tileCacheObserver; // ivar: _tileCacheObserver


-(id)initWithDataSourceMediator:(id)arg0 ;
-(void)_handleLocationManagerVisitCallbackWithVisit:(id)arg0 ;
-(void)dealloc;


@end


#endif