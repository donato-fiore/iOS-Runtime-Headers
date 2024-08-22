// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUBUSINESSHOURSCONFIGURATION_H
#define MUBUSINESSHOURSCONFIGURATION_H

@class NSArray, NSString, NSTimeZone;

#import <Foundation/Foundation.h>


@interface MUBusinessHoursConfiguration : NSObject

@property (readonly, nonatomic) NSArray *businessHours; // ivar: _businessHours
@property (copy, nonatomic) NSString *hoursName; // ivar: _hoursName
@property (nonatomic) BOOL isServiceHours; // ivar: _isServiceHours
@property (readonly, nonatomic) NSTimeZone *placeTimeZone; // ivar: _placeTimeZone
@property (nonatomic) BOOL suppressFullHours; // ivar: _suppressFullHours


-(id)initWithBusinessHours:(id)arg0 timeZone:(id)arg1 ;


@end


#endif