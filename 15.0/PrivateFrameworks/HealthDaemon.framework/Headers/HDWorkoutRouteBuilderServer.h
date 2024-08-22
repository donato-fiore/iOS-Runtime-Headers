// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWORKOUTROUTEBUILDERSERVER_H
#define HDWORKOUTROUTEBUILDERSERVER_H

@class NSString, HKWorkoutRoute;
@protocol HKWorkoutRouteBuilderServerInterface;


#import "HDSeriesBuilderServer.h"

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer <HKWorkoutRouteBuilderServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKWorkoutRoute *route; // ivar: _route
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(id)seriesSample;
-(void)connectionInvalidated;
// -(void)createSeriesSampleIfNeeded:(id)arg0 errorHandler:(unk)arg1  ;
-(void)queue_recoverBuilder;
-(void)remote_finishRouteWithWorkout:(id)arg0 metadata:(id)arg1 completion:(id)arg2 ;
-(void)remote_insertRouteData:(id)arg0 completion:(id)arg1 ;
-(void)server_insertRouteData:(id)arg0 completion:(id)arg1 ;


@end


#endif