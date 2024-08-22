// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LANOTIFICATIONOFBOOLEANSTATE_H
#define LANOTIFICATIONOFBOOLEANSTATE_H



#import "LANotification.h"

@interface LANotificationOfBooleanState : LANotification

@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL oldBoolValue; // ivar: _oldBoolValue


+(void)postNotificationWithNewBoolState:(BOOL)arg0 ;
-(id)darwinNotificationForBoolValue:(BOOL)arg0 ;
-(id)darwinNotificationForValue:(id)arg0 ;


@end


#endif