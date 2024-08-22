// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAPPLIANCESTATISTICSCLUSTERLOGNOTIFICATIONPARAMS_H
#define MTRAPPLIANCESTATISTICSCLUSTERLOGNOTIFICATIONPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MTRApplianceStatisticsClusterLogNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *logId; // ivar: _logId
@property (retain, nonatomic) NSNumber *logLength; // ivar: _logLength
@property (retain, nonatomic) NSArray *logPayload; // ivar: _logPayload
@property (retain, nonatomic) NSNumber *timeStamp; // ivar: _timeStamp
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif