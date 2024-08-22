// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPROTOTYPEDUMPINGGROUND_H
#define SBPROTOTYPEDUMPINGGROUND_H

@class NSString;
@protocol PTSettingsKeyObserver;

#import <Foundation/Foundation.h>

#import "SBBiometricMonitorUI.h"
#import "SBWindowScene.h"

@interface SBPrototypeDumpingGround : NSObject <PTSettingsKeyObserver>

 {
    SBBiometricMonitorUI *_pearlMonitorUI;
    id *_appLaunchedNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)init;
-(void)_updatePearlDebugUI;
-(void)dealloc;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif