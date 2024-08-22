// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPREDICTIONCONTEXTBUILDER_H
#define ATXPREDICTIONCONTEXTBUILDER_H

@class _PASLock, NSDate;
@protocol ATXPredictionContextBuilderProtocol;

#import <Foundation/Foundation.h>

#import "ATXBiomePredictionContextStream.h"
#import "ATXBiomeLocationStream.h"

@interface ATXPredictionContextBuilder : NSObject <ATXPredictionContextBuilderProtocol>



@property (readonly, nonatomic) ATXBiomePredictionContextStream *contextStream; // ivar: _contextStream
@property (readonly, nonatomic) ATXBiomeLocationStream *locationStream; // ivar: _locationStream
@property (readonly, nonatomic) _PASLock *lock; // ivar: _lock
@property (retain, nonatomic) NSDate *now; // ivar: _now


+(id)loadContextOverrideFromJSONFile:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)tryInitContextSourcesAndReturnSuccess:(id)arg0 ;
-(id)_getContextForOverrideKey:(id)arg0 fromContextOverride:(id)arg1 withDefaultContext:(id)arg2 allowNilValues:(BOOL)arg3 ;
-(id)ambientLightContextForContextOverride:(id)arg0 guardedData:(id)arg1 ;
-(id)ambientLightContextForCurrentContext:(id)arg0 ;
-(id)deviceStateContextForContextOverride:(id)arg0 guardedData:(id)arg1 ;
-(id)deviceStateContextForCurrentContext:(id)arg0 ;
-(id)init;
-(id)initWithAppInfoManager:(id)arg0 locationManager:(id)arg1 motionManagerWrapper:(id)arg2 ambientLightMonitor:(id)arg3 deviceStateMonitorClass:(Class)arg4 contextSourcesInitialized:(BOOL)arg5 ;
-(id)initWithAppInfoManager:(id)arg0 locationManager:(id)arg1 motionManagerWrapper:(id)arg2 ambientLightMonitor:(id)arg3 deviceStateMonitorClass:(Class)arg4 contextSourcesInitialized:(BOOL)arg5 contextStream:(id)arg6 locationStream:(id)arg7 ;
-(id)locationMotionContextForContextOverride:(id)arg0 guardedData:(id)arg1 ;
-(id)locationMotionContextForCurrentContext:(id)arg0 ;
-(id)predictionContextForContextOverride:(id)arg0 ;
-(id)predictionContextForCurrentContext;
-(id)predictionContextForCurrentContextAndCandidatePublisher:(id)arg0 contextOverride:(id)arg1 ;
-(id)timeContextForContextOverride:(id)arg0 guardedData:(id)arg1 ;
-(id)timeContextForCurrentContext:(id)arg0 ;
-(id)updateContextStreamAndReturnPredictionContextForCurrentContext;
-(id)userContextForContextOverride:(id)arg0 guardedData:(id)arg1 ;
-(id)userContextForCurrentContext:(id)arg0 ;


@end


#endif