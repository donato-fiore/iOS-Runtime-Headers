// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCOREANALYTICSMETRICEVENT_H
#define HMCOREANALYTICSMETRICEVENT_H

@class HMFObject, NSError, NSString;



@interface HMCoreAnalyticsMetricEvent : HMFObject

@property (retain) NSError *error; // ivar: _error
@property (readonly, copy) NSString *name; // ivar: _name


-(id)eventPayload;
-(id)initWithName:(id)arg0 ;


@end


#endif