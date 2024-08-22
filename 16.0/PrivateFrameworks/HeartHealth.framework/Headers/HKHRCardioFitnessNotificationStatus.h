// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRCARDIOFITNESSNOTIFICATIONSTATUS_H
#define HKHRCARDIOFITNESSNOTIFICATIONSTATUS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHRCardioFitnessNotificationStatus : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger notificationUnavailableReasons; // ivar: _notificationUnavailableReasons
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) BOOL wristDetectEnabled; // ivar: _wristDetectEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(NSInteger)arg0 unavailableReasons:(NSInteger)arg1 wristDetectEnabled:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif