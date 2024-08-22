// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFITRIGGERHANDLER_H
#define WIFITRIGGERHANDLER_H

@class NSString, NSDate, NSArray;
@protocol ConfigurableObjectProtocol, SyndromeHandlerProtocol, ManagedEventInfoProtocol, DataStallHandlerDelegate;

#import <Foundation/Foundation.h>

#import "ManagedEventHandler.h"
#import "DecisionDetails.h"
#import "DataStallHandler.h"

@interface WiFiTriggerHandler : NSObject <ConfigurableObjectProtocol, SyndromeHandlerProtocol, ManagedEventInfoProtocol, DataStallHandlerDelegate>

 {
    NSString *_syndromeName;
    char * _syndromeUTF8Name;
    ManagedEventHandler *_eventHandler;
    CGFloat _lastReportTime;
    NSString *_baseName;
    float _baseRTTAvg;
    float _baseRTTVar;
    float _baseRTTMin;
    float _newRTTAvg;
    float _newRTTVar;
    NSDate *_RTTTimestamp;
    id *_wifiEpochObserver;
    id *_cellEpochObserver;
    id *_primaryInterfaceObserver;
    DecisionDetails *_detailsAwaitingRefuter;
    NSArray *_baselineDefaultRouteData;
    NSDate *_baselineDefaultRouteTimestamp;
    int _refuterAcitvationId;
    NSInteger _lastRefutePeriodTraffic;
    CGFloat _lastRefutePeriodDuration;
    NSDate *_lastRefutePeriodTimestamp;
    DataStallHandler *_dataStallHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)getHandlerByName:(id)arg0 ;
+(id)getNetScoreInfo;
+(id)sharedInstance;
+(void)_triggerAllowedByRSSI:(BOOL)arg0 receiptTimestamp:(id)arg1 ;
+(void)initialize;
+(void)triggerAllowedByRSSI:(BOOL)arg0 receiptTimestamp:(id)arg1 ;
-(BOOL)insufficientRxTrafficDetectedFrom:(id)arg0 atTime:(id)arg1 To:(id)arg2 ;
-(BOOL)noteSymptom:(id)arg0 ;
-(NSInteger)_getARPFailureCount;
-(NSInteger)_getDataStallsScore;
-(NSInteger)_getND6FailureCount;
-(id)_getARPInfo;
-(id)_getAWDInfo:(id)arg0 ;
-(id)_getDNSInfo;
-(id)_getND6Info;
-(id)_getNetScoreInfo;
-(id)init;
-(int)_impactFromFlags:(unsigned int)arg0 andFlows:(NSUInteger)arg1 ;
-(int)combineScoreARP:(int)arg0 ND6:(int)arg1 DNS:(int)arg2 RTT:(int)arg3 flows:(int)arg4 ;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_reset;
-(void)checkUniqueStallCountOnInterfaceType:(NSInteger)arg0 stallType:(NSUInteger)arg1 ;
-(void)dampeningStage:(id)arg0 ;
-(void)didReceiveSyndrome:(id)arg0 ;
-(void)generateInfoForId:(NSUInteger)arg0 context:(char *)arg1 uuid:(id)arg2 completionBlock:(id)arg3 ;
-(void)refuteStage:(id)arg0 ;


@end


#endif