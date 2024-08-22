// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMBUIPOWERSOURCEINFO_H
#define NMBUIPOWERSOURCEINFO_H

@class NSNumber;
@protocol NMBUIPowerSourceInfoDelegate;

#import <Foundation/Foundation.h>

#import "NMNotificationObserver.h"

@interface NMBUIPowerSourceInfo : NSObject {
    NSNumber *_lastNotifiedExternalPowerSourceConnected;
    NMNotificationObserver *_accessoryNotificationObserver;
    NMNotificationObserver *_powerSourceNotificationObserver;
}


@property (weak, nonatomic) NSObject<NMBUIPowerSourceInfoDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=hasExternalPowerSourceConnected) BOOL externalPowerSourceConnected;


-(void)_handlePowerSourceNotification;


@end


#endif