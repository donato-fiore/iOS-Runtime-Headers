// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRELECTRICALMEASUREMENTCLUSTERGETPROFILEINFORESPONSECOMMANDPARAMS_H
#define MTRELECTRICALMEASUREMENTCLUSTERGETPROFILEINFORESPONSECOMMANDPARAMS_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRElectricalMeasurementClusterGetProfileInfoResponseCommandParams : NSObject

@property (retain, nonatomic) NSArray *listOfAttributes; // ivar: _listOfAttributes
@property (retain, nonatomic) NSNumber *maxNumberOfIntervals; // ivar: _maxNumberOfIntervals
@property (retain, nonatomic) NSNumber *profileCount; // ivar: _profileCount
@property (retain, nonatomic) NSNumber *profileIntervalPeriod; // ivar: _profileIntervalPeriod
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif