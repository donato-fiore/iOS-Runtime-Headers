// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCTIMESOFDAYCONFIGURATION_H
#define FCTIMESOFDAYCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "FCTimeOfDayConfiguration.h"

@interface FCTimesOfDayConfiguration : NSObject

@property (readonly, nonatomic) FCTimeOfDayConfiguration *afternoonTimeOfDayConfiguration; // ivar: _afternoonTimeOfDayConfiguration
@property (readonly, nonatomic) FCTimeOfDayConfiguration *eveningTimeOfDayConfiguration; // ivar: _eveningTimeOfDayConfiguration
@property (readonly, nonatomic) FCTimeOfDayConfiguration *morningTimeOfDayConfiguration; // ivar: _morningTimeOfDayConfiguration
@property (readonly, nonatomic) FCTimeOfDayConfiguration *nightTimeOfDayConfiguration; // ivar: _nightTimeOfDayConfiguration


+(id)defaultConfiguration;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif