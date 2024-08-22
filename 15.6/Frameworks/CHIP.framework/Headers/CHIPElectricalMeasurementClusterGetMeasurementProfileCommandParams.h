// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPELECTRICALMEASUREMENTCLUSTERGETMEASUREMENTPROFILECOMMANDPARAMS_H
#define CHIPELECTRICALMEASUREMENTCLUSTERGETMEASUREMENTPROFILECOMMANDPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPElectricalMeasurementClusterGetMeasurementProfileCommandParams : NSObject

@property (retain, nonatomic) NSNumber *attributeId; // ivar: _attributeId
@property (retain, nonatomic) NSNumber *numberOfIntervals; // ivar: _numberOfIntervals
@property (retain, nonatomic) NSNumber *startTime; // ivar: _startTime


-(id)init;


@end


#endif