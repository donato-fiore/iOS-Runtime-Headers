// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYTELEPHONYSTATENOTIFIER_H
#define BYTELEPHONYSTATENOTIFIER_H


#import <Foundation/Foundation.h>


@interface BYTelephonyStateNotifier : NSObject

@property (nonatomic) int simUnlockNotificationToken; // ivar: _simUnlockNotificationToken


+(NSUInteger)retrieveSIMUnlockStateFromToken:(int)arg0 ;
-(NSUInteger)currentSIMUnlockState;
-(id)initForNotifying;
-(id)initWithNotificationQueue:(id)arg0 notificationBlock:(id)arg1 ;
-(void)_beginObservingWithNotificationQueue:(id)arg0 notificationBlock:(id)arg1 ;
-(void)_endObservingState;
-(void)dealloc;
-(void)notifySIMUnlockStateChangedTo:(NSUInteger)arg0 ;


@end


#endif