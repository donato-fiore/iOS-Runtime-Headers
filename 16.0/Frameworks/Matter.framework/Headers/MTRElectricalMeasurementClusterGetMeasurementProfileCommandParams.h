// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRELECTRICALMEASUREMENTCLUSTERGETMEASUREMENTPROFILECOMMANDPARAMS_H
#define MTRELECTRICALMEASUREMENTCLUSTERGETMEASUREMENTPROFILECOMMANDPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRElectricalMeasurementClusterGetMeasurementProfileCommandParams : NSObject

@property (retain, nonatomic) NSNumber *attributeId; // ivar: _attributeId
@property (retain, nonatomic) NSNumber *numberOfIntervals; // ivar: _numberOfIntervals
@property (retain, nonatomic) NSNumber *startTime; // ivar: _startTime
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif