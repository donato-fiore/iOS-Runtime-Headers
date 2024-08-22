// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKRACEROUTELOCATIONSERIESQUERY_H
#define HKRACEROUTELOCATIONSERIESQUERY_H

@class NSUUID, NSMutableArray, NSString;
@protocol HKRaceRouteLocationSeriesQueryClientInterface;


#import "HKQuery.h"

@interface HKRaceRouteLocationSeriesQuery : HKQuery <HKRaceRouteLocationSeriesQueryClientInterface>

 {
    NSUUID *_clusterUUID;
    NSUInteger _workoutSelection;
    CGFloat _timestampAnchor;
    NSUInteger _limit;
    id *_dataHandler;
    NSMutableArray *_results;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithClusterUUID:(id)arg0 workoutSelection:(NSUInteger)arg1 timestampAnchor:(CGFloat)arg2 limit:(NSUInteger)arg3 dataHandler:(id)arg4 ;
-(void)client_deliverRaceRouteLocations:(id)arg0 isFinal:(BOOL)arg1 query:(id)arg2 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif