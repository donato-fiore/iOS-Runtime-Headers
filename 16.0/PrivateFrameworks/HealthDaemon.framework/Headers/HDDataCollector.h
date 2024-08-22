// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATACOLLECTOR_H
#define HDDATACOLLECTOR_H

@class HKObjectType, NSString;
@protocol HDHealthDataCollector, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDPrimaryProfile.h"
#import "HDProfile.h"
#import "HDDeviceEntity.h"
#import "HDSourceEntity.h"

@interface HDDataCollector : NSObject <HDHealthDataCollector>

 {
    HDPrimaryProfile *_primaryProfile;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _collectionInterval;
    NSInteger _state;
    HKObjectType *_observedType;
    HDDeviceEntity *_deviceEntity;
    NSInteger _failureRetryCount;
    BOOL _disabled;
}


@property CGFloat collectionInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL disabled;
@property (readonly) NSUInteger hash;
@property (readonly) HDSourceEntity *sourceEntity; // ivar: _sourceEntity
@property (readonly) Class superclass;


+(BOOL)_primaryContextExistsForDomain:(id)arg0 profile:(id)arg1 ;
+(CGFloat)defaultCollectionInterval;
+(Class)sensorDatumClass;
+(id)_lastReceivedSensorDatumForProfile:(id)arg0 ;
+(id)_sensorDatumFromContext:(id)arg0 ;
+(id)domain;
+(id)observedType;
+(id)secondaryContextClasses;
-(id)dataCollectorDiagnosticDescription;
-(id)initWithPrimaryProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_performAsync:(id)arg0 ;
-(void)_performSync:(id)arg0 ;
-(void)_queue_beginStreaming;
-(void)collectionStartedForType:(id)arg0 collectionInterval:(CGFloat)arg1 ;
-(void)collectionStoppedForType:(id)arg0 ;
-(void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg0 ;
-(void)updateCollectionInterval:(CGFloat)arg0 forType:(id)arg1 ;
-(void)updateHistoricalData;
-(void)updateHistoricalDataForcedUpdate:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateHistoricalDataWithCompletion:(id)arg0 ;


@end


#endif