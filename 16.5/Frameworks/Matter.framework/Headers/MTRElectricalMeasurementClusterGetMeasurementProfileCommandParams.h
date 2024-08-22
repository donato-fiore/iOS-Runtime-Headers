// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRELECTRICALMEASUREMENTCLUSTERGETMEASUREMENTPROFILECOMMANDPARAMS_H
#define MTRELECTRICALMEASUREMENTCLUSTERGETMEASUREMENTPROFILECOMMANDPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRElectricalMeasurementClusterGetMeasurementProfileCommandParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *attributeId; // ivar: _attributeId
@property (copy, nonatomic) NSNumber *numberOfIntervals; // ivar: _numberOfIntervals
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *startTime; // ivar: _startTime
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif