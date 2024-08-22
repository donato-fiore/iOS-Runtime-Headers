// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCBATTERYSAVERMODE_H
#define MCBATTERYSAVERMODE_H


#import <Foundation/Foundation.h>


@interface MCBatterySaverMode : NSObject



+(BOOL)isBatterySaverModeActive;
+(BOOL)isBatterySaverModeActive:(int)arg0 ;
+(id)batterySaverRestrictions;
+(id)currentBatterySaverRestrictions;
+(id)currentBatterySaverRestrictions:(int)arg0 ;
+(id)setOfActiveRestrictionUUIDs;


@end


#endif