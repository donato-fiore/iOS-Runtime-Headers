// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIGHBORGRAPH_H
#define NEIGHBORGRAPH_H

@class NSArray, NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "AnalyticsStoreMOHandler.h"

@interface NeighborGraph : NSObject

@property (retain, nonatomic) NSArray *bssids; // ivar: _bssids
@property (retain, nonatomic) NSMutableArray *bssidsDwellTimes; // ivar: _bssidsDwellTimes
@property (retain, nonatomic) NSMutableArray *graph; // ivar: _graph
@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler; // ivar: _managedObjectHandler
@property (retain, nonatomic) NSString *ssid; // ivar: _ssid


-(BOOL)doesPathExist:(id)arg0 target:(id)arg1 ;
-(id)copyNeighborGraphAsDictionary;
-(id)initWithBssidArray:(id)arg0 ssid:(id)arg1 handler:(id)arg2 ;
-(void)setNeighborsForBssid:(id)arg0 dwellTime:(NSUInteger)arg1 neighborInfoArray:(id)arg2 ;
-(void)setNeighborsForBssid:(id)arg0 neighbors:(id)arg1 ;


@end


#endif