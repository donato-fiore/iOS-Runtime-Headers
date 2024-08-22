// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERACONFIGURATIONSLOGEVENT_H
#define HMDCAMERACONFIGURATIONSLOGEVENT_H

@class HMMLogEvent, NSString, NSArray;
@protocol HMDAWDLogEvent;



@interface HMDCameraConfigurationsLogEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *homeSettingsConfigurations; // ivar: _homeSettingsConfigurations
@property (readonly) Class superclass;


-(id)initWithHomes:(id)arg0 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif