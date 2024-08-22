// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBATTERYBREAKDOWNNOTIFICATIONINFO_H
#define PLBATTERYBREAKDOWNNOTIFICATIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLBatteryBreakdownNotificationInfo : NSObject

@property NSUInteger bgWakingCount; // ivar: _bgWakingCount
@property CGFloat bgWakingNSEDuration; // ivar: _bgWakingNSEDuration
@property (retain) NSString *bundleID; // ivar: _bundleID
@property NSUInteger fgWakingCount; // ivar: _fgWakingCount
@property CGFloat fgWakingNSEDuration; // ivar: _fgWakingNSEDuration
@property BOOL isFirstParty; // ivar: _isFirstParty
@property NSUInteger localCount; // ivar: _localCount
@property NSUInteger nonWakingCount; // ivar: _nonWakingCount
@property CGFloat nonWakingNSEDuration; // ivar: _nonWakingNSEDuration
@property int notificationType; // ivar: _notificationType


+(CGFloat)representativeDisplayPower;
-(CGFloat)activeEnergy;
-(CGFloat)baseEnergy;
-(CGFloat)calculateActiveEnergyForNSEDuration:(CGFloat)arg0 andCount:(NSUInteger)arg1 withNominalEnergy:(CGFloat)arg2 ;
-(CGFloat)displayEnergy;
-(CGFloat)notificationEnergy;
-(id)description;
-(id)initWithEntry:(id)arg0 ;
-(void)combineWith:(id)arg0 ;


@end


#endif