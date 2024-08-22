// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPELECTRICALMEASUREMENTCLUSTERGETPROFILEINFORESPONSECOMMANDPARAMS_H
#define CHIPELECTRICALMEASUREMENTCLUSTERGETPROFILEINFORESPONSECOMMANDPARAMS_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPElectricalMeasurementClusterGetProfileInfoResponseCommandParams : NSObject

@property (retain, nonatomic) NSArray *listOfAttributes; // ivar: _listOfAttributes
@property (retain, nonatomic) NSNumber *maxNumberOfIntervals; // ivar: _maxNumberOfIntervals
@property (retain, nonatomic) NSNumber *profileCount; // ivar: _profileCount
@property (retain, nonatomic) NSNumber *profileIntervalPeriod; // ivar: _profileIntervalPeriod


-(id)init;


@end


#endif