// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RADIORECENTSTATIONSCONTROLLER_H
#define RADIORECENTSTATIONSCONTROLLER_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RadioRecentStationsController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasRefreshed;
    BOOL _hasValidStationGroups;
    NSMutableArray *_pendingRecentStations;
    NSArray *_serverRecentStationGroups;
    NSArray *_stationGroups;
}


@property (readonly, copy, nonatomic) NSArray *stationGroups;
@property (readonly, copy, nonatomic) NSArray *stations;


-(id)_newRecentStationsRequest;
-(id)init;
-(void)_createStationGroups;
-(void)_handleRecentStationsResponse:(id)arg0 fromRequest:(id)arg1 pendingRecentStations:(id)arg2 isInitialCacheLoad:(BOOL)arg3 ;
-(void)_insertPendingRecentStation:(id)arg0 ;
-(void)_postStationsDidChangeNotification;
-(void)insertPendingRecentStation:(id)arg0 ;
-(void)insertPendingRecentStationDictionary:(id)arg0 ;
-(void)refreshWithCompletionHandler:(id)arg0 ;
-(void)removePendingRecentStation:(id)arg0 ;


@end


#endif