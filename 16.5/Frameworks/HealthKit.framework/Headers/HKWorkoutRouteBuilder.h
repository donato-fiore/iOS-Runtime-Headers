// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKWORKOUTROUTEBUILDER_H
#define HKWORKOUTROUTEBUILDER_H

@class NSString;
@protocol HKSeriesBuilderClientInterface;


#import "HKSeriesBuilder.h"

@interface HKWorkoutRouteBuilder : HKSeriesBuilder <HKSeriesBuilderClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
+(id)taskServerIdentifier;
+(void)configureClientInterface:(id)arg0 ;
+(void)configureServerInterface:(id)arg0 ;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 device:(id)arg1 ;
-(id)initWithHealthStore:(id)arg0 identifier:(id)arg1 device:(id)arg2 workoutBuilderID:(id)arg3 ;
-(id)remoteInterface;
-(void)_resourceQueue_finishRouteWithWorkout:(id)arg0 metadata:(id)arg1 completion:(id)arg2 ;
-(void)_resourceQueue_insertRouteData:(id)arg0 completion:(id)arg1 ;
-(void)addMetadata:(id)arg0 completion:(id)arg1 ;
-(void)finishRouteWithWorkout:(id)arg0 metadata:(id)arg1 completion:(id)arg2 ;
-(void)insertRouteData:(id)arg0 completion:(id)arg1 ;


@end


#endif