// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAMENSTRUALALGORITHMSHISTORICALCYCLE_H
#define HAMENSTRUALALGORITHMSHISTORICALCYCLE_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsHistoricalCycle : NSObject

@property (retain, nonatomic) NSNumber *fertilityEndJulianDay; // ivar: _fertilityEndJulianDay
@property (retain, nonatomic) NSNumber *fertilityStartJulianDay; // ivar: _fertilityStartJulianDay
@property (nonatomic) BOOL isDeterminant; // ivar: _isDeterminant
@property (nonatomic) unsigned int julianDayOfMenstruationEnd; // ivar: _julianDayOfMenstruationEnd
@property (nonatomic) unsigned int julianDayOfMenstruationStart; // ivar: _julianDayOfMenstruationStart
@property (retain, nonatomic) NSArray *phases; // ivar: _phases




@end


#endif