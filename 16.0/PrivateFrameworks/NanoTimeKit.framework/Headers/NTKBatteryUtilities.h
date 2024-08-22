// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKBATTERYUTILITIES_H
#define NTKBATTERYUTILITIES_H


#import <Foundation/Foundation.h>


@interface NTKBatteryUtilities : NSObject



+(BOOL)chargingForState:(NSInteger)arg0 ;
+(id)chargingStringForState:(NSInteger)arg0 ;
+(id)chargingStringForState:(NSInteger)arg0 longText:(BOOL)arg1 ;
+(id)colorForLevel:(float)arg0 andState:(NSInteger)arg1 ;
+(id)modularRingColorForLevel:(float)arg0 ;


@end


#endif