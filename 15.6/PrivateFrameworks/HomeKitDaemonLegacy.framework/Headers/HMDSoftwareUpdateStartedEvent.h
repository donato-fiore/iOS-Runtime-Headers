// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSOFTWAREUPDATESTARTEDEVENT_H
#define HMDSOFTWAREUPDATESTARTEDEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;



@interface HMDSoftwareUpdateStartedEvent : HMMLogEvent <HMDAWDLogEvent>



@property (nonatomic, getter=isAutomaticUpdateEnabled) BOOL automaticUpdateEnabled; // ivar: _automaticUpdateEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)eventUpdateStartedWithAutomaticUpdateEnabled:(BOOL)arg0 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif