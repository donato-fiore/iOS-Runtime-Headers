// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPDISABLEDSLEEPFOCUSMODEBRIDGE_H
#define HDSPDISABLEDSLEEPFOCUSMODEBRIDGE_H

@class NSString;
@protocol HDSPSleepFocusModeBridge, HKSPSleepFocusModeBridgeDelegate;

#import <Foundation/Foundation.h>


@interface HDSPDisabledSleepFocusModeBridge : NSObject <HDSPSleepFocusModeBridge>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKSPSleepFocusModeBridgeDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)createSleepFocusMode:(*id)arg0 ;
-(BOOL)hasSleepFocusMode:(*id)arg0 ;
-(BOOL)removeSleepFocusMode:(*id)arg0 ;
-(id)init;
-(id)sleepFocusConfiguration:(*id)arg0 ;
-(id)sleepFocusModeIdentifier;
-(void)invalidate;


@end


#endif