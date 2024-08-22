// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAFILTERSINGLEVISITSETTINGS_H
#define TAFILTERSINGLEVISITSETTINGS_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "TAFilterVisitsSettings.h"

@interface TAFilterSingleVisitSettings : NSObject

@property (readonly, nonatomic) NSSet *enabledLoiTypes; // ivar: _enabledLoiTypes
@property (readonly, nonatomic) CGFloat thresholdOfSignificantDistance; // ivar: _thresholdOfSignificantDistance
@property (readonly, nonatomic) CGFloat thresholdOfSignificantDuration; // ivar: _thresholdOfSignificantDuration
@property (readonly, nonatomic) TAFilterVisitsSettings *visitsSettings; // ivar: _visitsSettings


+(id)defaultSingleVisitEnabledLoiTypes;
-(id)initWithDefaults;
-(id)initWithThresholdOfSignificantDuration:(CGFloat)arg0 thresholdOfSignificantDistance:(CGFloat)arg1 filterVisitsSettings:(id)arg2 enabledLoiTypes:(id)arg3 ;
-(id)initWithThresholdOfSignificantDurationOrDefault:(id)arg0 thresholdOfSignificantDistanceOrDefault:(id)arg1 filterVisitsSettingsOrDefault:(id)arg2 enabledLoiTypesOrDefault:(id)arg3 ;


@end


#endif