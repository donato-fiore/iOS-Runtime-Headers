// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKSCREENORIENTATIONMANAGER_H
#define SBLOCKSCREENORIENTATIONMANAGER_H

@class NSDate, NSString;
@protocol SBAssistantObserver;

#import <Foundation/Foundation.h>


@interface SBLockScreenOrientationManager : NSObject <SBAssistantObserver>

 {
    NSDate *_updateForAmbiguousOrientationsAfterDate;
    BOOL _wasUILocked;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_lockStateChanged:(id)arg0 ;
-(void)_updateDeviceOrientationIfNeededForPhoneUnlockToOrientation:(NSInteger)arg0 ;
-(void)assistantDidAppear:(id)arg0 windowScene:(id)arg1 ;
-(void)updateInterfaceOrientationWithRequestedOrientation:(NSInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif