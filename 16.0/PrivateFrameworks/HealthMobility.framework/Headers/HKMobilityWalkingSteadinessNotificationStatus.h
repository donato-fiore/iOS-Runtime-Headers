// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMOBILITYWALKINGSTEADINESSNOTIFICATIONSTATUS_H
#define HKMOBILITYWALKINGSTEADINESSNOTIFICATIONSTATUS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMobilityWalkingSteadinessNotificationStatus : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL fitnessTrackingEnabled; // ivar: _fitnessTrackingEnabled
@property (readonly, nonatomic) BOOL healthNotificationsDisabled; // ivar: _healthNotificationsDisabled
@property (readonly, nonatomic) NSInteger notificationUnavailableReasons; // ivar: _notificationUnavailableReasons
@property (readonly, nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(NSInteger)arg0 unavailableReasons:(NSInteger)arg1 fitnessTrackingEnabled:(BOOL)arg2 healthNotificationsDisabled:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif