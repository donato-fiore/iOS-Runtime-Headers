// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCREPORTINGPLAYBACKACTIVITYEVENT_H
#define MPCREPORTINGPLAYBACKACTIVITYEVENT_H

@class NSString, ICPlayActivityEvent;
@protocol MPCReportingEvent;

#import <Foundation/Foundation.h>


@interface MPCReportingPlaybackActivityEvent : NSObject <MPCReportingEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) ICPlayActivityEvent *playActivityEvent; // ivar: _playActivityEvent
@property (nonatomic) BOOL shouldReportToStore; // ivar: _shouldReportToStore
@property (readonly) Class superclass;


-(BOOL)isValidReportingEvent;
-(NSUInteger)reportingEventType;


@end


#endif