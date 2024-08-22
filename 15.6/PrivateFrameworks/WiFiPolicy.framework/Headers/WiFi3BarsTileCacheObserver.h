// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFI3BARSTILECACHEOBSERVER_H
#define WIFI3BARSTILECACHEOBSERVER_H


#import <Foundation/Foundation.h>

#import "TBDataSourceMediator.h"

@interface WiFi3BarsTileCacheObserver : NSObject

@property (retain, nonatomic) TBDataSourceMediator *dataSourceMediator; // ivar: _dataSourceMediator


-(id)initWithDataSourceMediator:(id)arg0 ;
-(void)_scheduleXPCActivity;
-(void)_submitCacheAvailabilityMetric;


@end


#endif