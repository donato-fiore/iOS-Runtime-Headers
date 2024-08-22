// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHAWARDSWORKOUTCLIENT_H
#define ACHAWARDSWORKOUTCLIENT_H

@class NSString, NSUUID, HKTaskServerProxyProvider;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface ACHAwardsWorkoutClient : NSObject <_HKXPCExportable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


-(NSUInteger)numberOfFirstPartyWorkoutsWithDuration:(CGFloat)arg0 containedInInterval:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)numberOfFirstPartyWorkoutsWithDuration:(CGFloat)arg0 withType:(NSUInteger)arg1 andLocation:(NSUInteger)arg2 containedInInterval:(id)arg3 error:(*id)arg4 ;
-(NSUInteger)numberOfFirstPartyWorkoutsWithDuration:(CGFloat)arg0 withType:(NSUInteger)arg1 endingOnOrBeforeDate:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)numberOfWorkoutsWithDuration:(CGFloat)arg0 containedInInterval:(id)arg1 error:(*id)arg2 ;
-(id)bestDistanceForFirstPartyWorkoutsWithType:(NSUInteger)arg0 endingBeforeDate:(id)arg1 error:(*id)arg2 ;
-(id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(NSUInteger)arg0 endingBeforeDate:(id)arg1 error:(*id)arg2 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(id)workoutsInDateInterval:(id)arg0 error:(*id)arg1 ;
-(void)connectionInvalidated;


@end


#endif