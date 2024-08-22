// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPRTCREPORTINGSECUREKEYLOADEVENT_H
#define MPRTCREPORTINGSECUREKEYLOADEVENT_H

@class NSError, NSString;


#import "MPRTCReportingEvent.h"

@interface MPRTCReportingSecureKeyLoadEvent : MPRTCReportingEvent

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *siriSessionIdentifier; // ivar: _siriSessionIdentifier


-(id)newRTCReportingPayloadDictionary;
-(unsigned short)rtcReportingCategory;
-(unsigned short)rtcReportingType;


@end


#endif