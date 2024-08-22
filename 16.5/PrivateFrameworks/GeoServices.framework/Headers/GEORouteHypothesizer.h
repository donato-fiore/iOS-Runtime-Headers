// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTEHYPOTHESIZER_H
#define GEOROUTEHYPOTHESIZER_H

@class NSUUID, geo_isolater, NSError;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "GEORouteHypothesis.h"
#import "GEOPlannedDestination.h"

@interface GEORouteHypothesizer : NSObject {
    id *_updateHandler;
    NSUUID *_uuid;
    geo_isolater *_isolater;
    BOOL _wakeForDelay;
    NSObject<OS_dispatch_source> *_delayDispatchTimer;
}


@property (readonly, nonatomic) NSError *currentError; // ivar: _currentError
@property (readonly, nonatomic) GEORouteHypothesis *currentHypothesis; // ivar: _currentHypothesis
@property (readonly, nonatomic) GEOPlannedDestination *plannedDestination; // ivar: _plannedDestination
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) BOOL unableToFindRouteForOriginalTransportType; // ivar: _unableToFindRouteForOriginalTransportType
@property (readonly, nonatomic) CGFloat willBeginHypothesizingInterval;
@property (readonly, nonatomic) CGFloat willEndHypothesizingInterval;


+(BOOL)transitTTLSupportedInCurrentCountry;
+(id)hypothesizerForPlannedDestination:(id)arg0 ;
+(void)didDismissUINotification:(NSUInteger)arg0 forPlannedDestination:(id)arg1 dismissalType:(NSUInteger)arg2 ;
-(BOOL)_wontHypothesizeAgain;
-(BOOL)wakeForDelay;
-(id)description;
-(id)initWithPlannedDestination:(id)arg0 ;
-(void)_delayStartingWithXpc;
-(void)_delayStartingWithoutXpc;
-(void)_performDelayedStart;
-(void)cancelDelayDispatchTimer;
-(void)dealloc;
-(void)didPostUINotification:(NSUInteger)arg0 ;
-(void)onlyPerformLocalUpdates;
-(void)requestRefresh;
-(void)setDoNotWakeForDelay;
-(void)startHypothesizingWithUpdateHandler:(id)arg0 ;
-(void)stopHypothesizing;


@end


#endif