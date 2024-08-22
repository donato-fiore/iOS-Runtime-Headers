// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDBTLEHEARTRATEDATACOLLECTOR_H
#define HDBTLEHEARTRATEDATACOLLECTOR_H

@class NSArray, NSMutableDictionary, HKHealthService, NSString;
@protocol HDDataCollector, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDataCollectorConfiguration.h"

@interface HDBTLEHeartRateDataCollector : NSObject <HDDataCollector>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _state;
    HDDataCollectorConfiguration *_configuration;
    NSArray *_oneShotServices;
    NSMutableDictionary *_pendingSessions;
    HKHealthService *_connectedService;
    NSUInteger _connectedSessionIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canResumeCollectionFromLastSensorDatum;
-(Class)sensorDatumClassForAggregator:(id)arg0 ;
-(id)identifierForDataAggregator:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)sourceForDataAggregator:(id)arg0 ;
-(void)beginCollectionForDataAggregator:(id)arg0 lastPersistedSensorDatum:(id)arg1 ;
-(void)dataAggregator:(id)arg0 wantsCollectionWithConfiguration:(id)arg1 ;
-(void)startOneShotCollectionForService:(id)arg0 ;


@end


#endif