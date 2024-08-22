// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERACLIPMANAGERREQUESTLOGEVENT_H
#define HMDCAMERACLIPMANAGERREQUESTLOGEVENT_H

@class HMMHomeLogEvent, NSString;



@interface HMDCameraClipManagerRequestLogEvent : HMMHomeLogEvent

@property (readonly, nonatomic) NSString *requestName; // ivar: _requestName


-(id)initWithRequestName:(id)arg0 homeUUID:(id)arg1 ;


@end


#endif