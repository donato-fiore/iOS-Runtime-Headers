// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRELECTRICALMEASUREMENTCLUSTERGETPROFILEINFORESPONSECOMMANDPARAMS_H
#define MTRELECTRICALMEASUREMENTCLUSTERGETPROFILEINFORESPONSECOMMANDPARAMS_H

@class NSArray, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRElectricalMeasurementClusterGetProfileInfoResponseCommandParams : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *listOfAttributes; // ivar: _listOfAttributes
@property (copy, nonatomic) NSNumber *maxNumberOfIntervals; // ivar: _maxNumberOfIntervals
@property (copy, nonatomic) NSNumber *profileCount; // ivar: _profileCount
@property (copy, nonatomic) NSNumber *profileIntervalPeriod; // ivar: _profileIntervalPeriod
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif