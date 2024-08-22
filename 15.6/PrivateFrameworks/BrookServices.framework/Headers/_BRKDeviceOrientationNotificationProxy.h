// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BRKDEVICEORIENTATIONNOTIFICATIONPROXY_H
#define _BRKDEVICEORIENTATIONNOTIFICATIONPROXY_H


#import <Foundation/Foundation.h>


@interface _BRKDeviceOrientationNotificationProxy : NSObject

@property (readonly, nonatomic) BOOL crownOrientationIsRight;
@property (readonly, nonatomic) BOOL wristOrientationIsRight;


+(id)sharedInstance;
-(id)init;
-(void)_logCurrentState;
-(void)_postChangeNotification:(id)arg0 ;
-(void)_postNotification;


@end


#endif