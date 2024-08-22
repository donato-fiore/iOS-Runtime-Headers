// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFUSERCONFIGUREEVENT_H
#define WFUSERCONFIGUREEVENT_H

@class NSString, NSDictionary, PBCodable;
@protocol WFUIEvent;

#import <Foundation/Foundation.h>


@interface WFUserConfigureEvent : NSObject <WFUIEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *eventDictionary; // ivar: _eventDictionary
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PBCodable *metric; // ivar: _metric
@property (nonatomic) unsigned int metricIdentifier; // ivar: _metricIdentifier
@property (readonly) Class superclass;


+(id)configureEventWithType:(NSInteger)arg0 new:(NSInteger)arg1 old:(NSInteger)arg2 ;
-(id)_configureValueStringForType:(NSInteger)arg0 ;
-(id)_eventTypeStringForType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 new:(NSInteger)arg1 old:(NSInteger)arg2 ;
-(unsigned int)_metricIdForType:(NSInteger)arg0 ;


@end


#endif