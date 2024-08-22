// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSCANPERFORMANCEEVENT_H
#define WFSCANPERFORMANCEEVENT_H

@class NSString, NSDictionary;
@protocol WFUIEvent;

#import <Foundation/Foundation.h>


@interface WFScanPerformanceEvent : NSObject <WFUIEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *eventDictionary; // ivar: _eventDictionary
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_scanReasonToString:(NSUInteger)arg0 ;
-(id)initWithScanReason:(NSUInteger)arg0 timeElasped:(NSUInteger)arg1 firstScan:(BOOL)arg2 results:(NSUInteger)arg3 errorCode:(NSInteger)arg4 lowPriority:(BOOL)arg5 rssiFilter:(BOOL)arg6 ;
-(id)metric;
-(unsigned int)metricIdentifier;


@end


#endif