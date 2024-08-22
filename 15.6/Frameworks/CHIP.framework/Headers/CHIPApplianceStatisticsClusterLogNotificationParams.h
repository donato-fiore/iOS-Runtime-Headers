// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPAPPLIANCESTATISTICSCLUSTERLOGNOTIFICATIONPARAMS_H
#define CHIPAPPLIANCESTATISTICSCLUSTERLOGNOTIFICATIONPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHIPApplianceStatisticsClusterLogNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *logId; // ivar: _logId
@property (retain, nonatomic) NSNumber *logLength; // ivar: _logLength
@property (retain, nonatomic) NSArray *logPayload; // ivar: _logPayload
@property (retain, nonatomic) NSNumber *timeStamp; // ivar: _timeStamp


-(id)init;


@end


#endif