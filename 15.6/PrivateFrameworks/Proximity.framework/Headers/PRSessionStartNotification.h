// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRSESSIONSTARTNOTIFICATION_H
#define PRSESSIONSTARTNOTIFICATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface PRSessionStartNotification : NSObject

@property (readonly) NSNumber *bluetoothConnectionEventCounterValue; // ivar: _bluetoothConnectionEventCounterValue
@property (readonly) NSInteger notificationType; // ivar: _notificationType


+(id)createWithBluetoothConnectionEventCounterValue:(id)arg0 ;
-(id)init;
-(void)_setType:(NSInteger)arg0 ;


@end


#endif