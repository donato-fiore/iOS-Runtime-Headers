// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSMONITORINGEVENTS_H
#define TPSMONITORINGEVENTS_H

@class NSDictionary;


#import "TPSSerializableObject.h"

@interface TPSMonitoringEvents : TPSSerializableObject

@property (copy, nonatomic) NSDictionary *desiredOutcomeEventMap; // ivar: _desiredOutcomeEventMap
@property (copy, nonatomic) NSDictionary *dismissalEventMap; // ivar: _dismissalEventMap
@property (copy, nonatomic) NSDictionary *displayEventMap; // ivar: _displayEventMap
@property (readonly, nonatomic) BOOL hasEvents;
@property (copy, nonatomic) NSDictionary *initialDisplayEventMap; // ivar: _initialDisplayEventMap
@property (copy, nonatomic) NSDictionary *restartTrackingDisplayEventMap; // ivar: _restartTrackingDisplayEventMap
@property (copy, nonatomic) NSDictionary *restartTrackingTriggerEventMap; // ivar: _restartTrackingTriggerEventMap


+(BOOL)supportsSecureCoding;
-(BOOL)hasClientContextKeysForEventOptions:(NSUInteger)arg0 ;
-(BOOL)hasRegistrableContextualEventsForEventOptions:(NSUInteger)arg0 ;
-(NSUInteger)eventOptionsForEventIdentifier:(id)arg0 ;
-(id)autoDismissEvents;
-(id)clientContextEventsForMap:(id)arg0 ;
-(id)clientContextKeysForEventOptions:(NSUInteger)arg0 ;
-(id)clientContextKeysForMap:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)eventMapFromMonitoringEventsDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 desiredOutcomeDictionary:(id)arg1 ;
-(id)registrableContextualEventsForEventOptions:(NSUInteger)arg0 type:(NSInteger)arg1 ;
-(id)registrableContextualEventsForMap:(id)arg0 type:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif