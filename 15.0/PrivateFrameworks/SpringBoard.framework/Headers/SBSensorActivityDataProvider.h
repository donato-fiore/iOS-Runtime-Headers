// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSENSORACTIVITYDATAPROVIDER_H
#define SBSENSORACTIVITYDATAPROVIDER_H

@class NSSet, NSString, STMediaStatusDomain, NSMutableSet, NSMutableArray;
@protocol SBFSensorActivityDataProvider;

#import <Foundation/Foundation.h>

#import "SBSensorActivityAttribution.h"

@interface SBSensorActivityDataProvider : NSObject <SBFSensorActivityDataProvider>



@property (copy, nonatomic) NSSet *activeSensorActivityAttributions; // ivar: _activeSensorActivityAttributions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) STMediaStatusDomain *mediaDomain; // ivar: _mediaDomain
@property (readonly, copy, nonatomic) SBSensorActivityAttribution *mostRecentSensorActivityAttribution;
@property (readonly, copy, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (readonly, copy, nonatomic) NSMutableArray *recentAttributionExpirationTimers; // ivar: _recentAttributionExpirationTimers
@property (readonly, copy, nonatomic) NSMutableArray *recentSensorActivityAttributions; // ivar: _recentSensorActivityAttributions
@property (readonly) Class superclass;


-(id)_sensorActivityAttributionsForActivityAttributions:(id)arg0 sensor:(NSInteger)arg1 ;
-(id)init;
-(id)initWithSystemStatusServer:(id)arg0 ;
-(void)_handleMediaDomainData:(id)arg0 ;
-(void)_notifyObserversOfActivityChange;
-(void)_updateStateForActiveAttributions:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif