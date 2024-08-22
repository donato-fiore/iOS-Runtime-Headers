// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSCANSESSIONEVENT_H
#define WFSCANSESSIONEVENT_H

@class NSString, NSDictionary, PBCodable<WFAWDWiFiUIScanSessionMetric>;
@protocol WFUIEvent;

#import <Foundation/Foundation.h>


@interface WFScanSessionEvent : NSObject <WFUIEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *eventDictionary; // ivar: _eventDictionary
@property (readonly, nonatomic) NSString *eventName; // ivar: eventName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PBCodable<WFAWDWiFiUIScanSessionMetric> *metric; // ivar: _metric
@property (readonly) Class superclass;


+(id)scanSessionEventWithSectionCounts:(id)arg0 duration:(CGFloat)arg1 ;
-(NSUInteger)_durationBucketFromTimeInterval:(CGFloat)arg0 ;
-(id)_countMetricsFromSectionCounts:(id)arg0 ;
-(id)_sectionCountsToJSONString:(id)arg0 ;
-(id)initWithScanSectionCounts:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif