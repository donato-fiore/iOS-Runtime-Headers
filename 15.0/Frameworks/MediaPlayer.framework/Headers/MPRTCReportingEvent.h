// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPRTCREPORTINGEVENT_H
#define MPRTCREPORTINGEVENT_H


#import <Foundation/Foundation.h>


@interface MPRTCReportingEvent : NSObject

@property (nonatomic) NSInteger networkInterfaceType; // ivar: _networkInterfaceType
@property (readonly, nonatomic) unsigned short rtcReportingCategory; // ivar: _rtcReportingCategory
@property (readonly, nonatomic) unsigned short rtcReportingType; // ivar: _rtcReportingType


-(id)newRTCReportingMessageDictionary;
-(id)newRTCReportingPayloadDictionary;


@end


#endif