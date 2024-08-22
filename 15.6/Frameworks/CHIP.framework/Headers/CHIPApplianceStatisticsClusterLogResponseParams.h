// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPAPPLIANCESTATISTICSCLUSTERLOGRESPONSEPARAMS_H
#define CHIPAPPLIANCESTATISTICSCLUSTERLOGRESPONSEPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHIPApplianceStatisticsClusterLogResponseParams : NSObject

@property (retain, nonatomic) NSNumber *logId; // ivar: _logId
@property (retain, nonatomic) NSNumber *logLength; // ivar: _logLength
@property (retain, nonatomic) NSArray *logPayload; // ivar: _logPayload
@property (retain, nonatomic) NSNumber *timeStamp; // ivar: _timeStamp


-(id)init;


@end


#endif