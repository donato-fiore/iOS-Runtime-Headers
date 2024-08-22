// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEOTIMELINEENTRY_H
#define HMIVIDEOTIMELINEENTRY_H

@class HMFObject, NSDate, NSString;
@protocol HMIVideoEvent;



@interface HMIVideoTimelineEntry : HMFObject <HMIVideoEvent>



@property (readonly) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) ? time; // ivar: _time


-(id)initWithTime:(struct ? )arg0 date:(id)arg1 ;


@end


#endif