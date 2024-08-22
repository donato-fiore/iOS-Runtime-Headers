// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARPROUTINGEVENT_H
#define ARPROUTINGEVENT_H

@class NSString, NSDateInterval, NSDictionary;

#import <Foundation/Foundation.h>


@interface ARPRoutingEvent : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSDateInterval *interval; // ivar: _interval
@property (readonly, copy, nonatomic) NSString *outputDeviceID; // ivar: _outputDeviceID
@property (readonly, nonatomic) NSDictionary *probabilityVector; // ivar: _probabilityVector


+(id)mostRecentRoutingEventInDateInterval:(id)arg0 knowledgeStore:(id)arg1 eventLimit:(NSUInteger)arg2 longFormVideoFilter:(id)arg3 ;
-(id)description;
-(id)initWithBundleID:(id)arg0 outputDeviceID:(id)arg1 interval:(id)arg2 probabilityVector:(id)arg3 ;


@end


#endif