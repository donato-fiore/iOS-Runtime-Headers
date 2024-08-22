// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKUIORIENTATIONSTATEHANDLER_H
#define BKUIORIENTATIONSTATEHANDLER_H


#import <Foundation/Foundation.h>


@interface BKUIOrientationStateHandler : NSObject

@property (nonatomic) NSInteger lastKownOrientation; // ivar: _lastKownOrientation
@property (nonatomic) int orientationLockToken; // ivar: _orientationLockToken
@property (nonatomic) int orientationNotificationToken; // ivar: _orientationNotificationToken
@property (nonatomic) int rawOrientationToken; // ivar: _rawOrientationToken
@property (nonatomic) int rotationLockNotificationToken; // ivar: _rotationLockNotificationToken


+(NSUInteger)bkui_getState:(int)arg0 ;
-(BOOL)rotationLockStatusIsLocked;
-(NSInteger)rawDeviceOrientationIgnoringOrientationLocks;
-(id)init;
-(void)_invalidateTokenIfNeeded:(int)arg0 ;
-(void)dealloc;
-(void)registerRotationLockObserver:(id)arg0 ;
-(void)registerRotationObserver:(id)arg0 ;


@end


#endif