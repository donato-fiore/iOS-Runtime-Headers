// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSOFTWAREUPDATEAUTOMATICUPDATETOGGLEDEVENT_H
#define HMDSOFTWAREUPDATEAUTOMATICUPDATETOGGLEDEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;



@interface HMDSoftwareUpdateAutomaticUpdateToggledEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)eventWithAutomaticUpdateEnabled:(BOOL)arg0 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif