// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFUSERJOINEVENT_H
#define WFUSERJOINEVENT_H

@class NSString, NSDictionary, PBCodable;
@protocol WFUIEvent;

#import <Foundation/Foundation.h>


@interface WFUserJoinEvent : NSObject <WFUIEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *eventDictionary; // ivar: _eventDictionary
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PBCodable *metric; // ivar: _metric
@property (nonatomic) unsigned int metricIdentifier; // ivar: _metricIdentifier
@property (readonly) Class superclass;


+(id)joinEventWithSecurity:(NSInteger)arg0 error:(NSInteger)arg1 sectionCounts:(id)arg2 sectionName:(id)arg3 didRun:(BOOL)arg4 didPass:(BOOL)arg5 failedTests:(id)arg6 ;
+(id)joinEventWithType:(NSInteger)arg0 security:(NSInteger)arg1 error:(NSInteger)arg2 didRun:(BOOL)arg3 didPass:(BOOL)arg4 failedTests:(id)arg5 ;
-(id)_countMetricsFromSectionCounts:(id)arg0 ;
-(id)_eventTypeStringForType:(NSInteger)arg0 ;
-(id)_sectionCountsToJSONString:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 security:(NSInteger)arg1 error:(NSInteger)arg2 sectionCounts:(id)arg3 sectionName:(id)arg4 didRunVelocityTests:(BOOL)arg5 didPassVelocityTests:(BOOL)arg6 failedTests:(id)arg7 ;
-(unsigned int)_metricIdForType:(NSInteger)arg0 ;


@end


#endif