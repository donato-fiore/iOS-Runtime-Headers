// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCOREANALYTICSEVENT_H
#define ARCOREANALYTICSEVENT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ARCoreAnalyticsEvent : NSObject {
    BOOL _isReportedToCoreAnalytics;
}


@property (readonly, nonatomic) NSDictionary *eventDictionary; // ivar: _eventDictionary
@property (readonly, nonatomic) NSString *eventName; // ivar: _eventName


-(id)initWithEventName:(id)arg0 eventDictionary:(id)arg1 ;
-(void)reportEvent;


@end


#endif