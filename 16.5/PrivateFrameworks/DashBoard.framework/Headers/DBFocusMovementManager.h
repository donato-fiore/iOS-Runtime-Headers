// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBFOCUSMOVEMENTMANAGER_H
#define DBFOCUSMOVEMENTMANAGER_H

@class CARInputDeviceTouchpad;

#import <Foundation/Foundation.h>

#import "DBEnvironmentConfiguration.h"

@interface DBFocusMovementManager : NSObject {
    CARInputDeviceTouchpad *_currentTouchpad;
    NSUInteger _currentSenderID;
}


@property (weak, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration


+(BOOL)isMovementAllowedForHeading:(NSUInteger)arg0 direction:(NSUInteger)arg1 isRTL:(BOOL)arg2 isLeftHandDrive:(BOOL)arg3 statusBarEdge:(NSUInteger)arg4 ;
+(BOOL)isOEMToiOSHeadingToStatusBar:(NSUInteger)arg0 isLeftHandDrive:(BOOL)arg1 statusBarEdge:(NSUInteger)arg2 ;
+(struct CGRect )convertRect:(struct CGRect )arg0 fromView:(id)arg1 toScreen:(id)arg2 ;
+(struct CGRect )convertRect:(struct CGRect )arg0 toView:(id)arg1 fromScreen:(id)arg2 ;
-(id)initWithEnvironmentConfiguration:(id)arg0 ;
-(void)performHapticFeedbackForSenderID:(NSUInteger)arg0 ;


@end


#endif