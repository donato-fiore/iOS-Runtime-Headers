// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAPPLICATIONMANAGER_H
#define HUAPPLICATIONMANAGER_H

@class NSHashTable;
@protocol HUStatusBarVisibilityHandling;

#import <Foundation/Foundation.h>


@interface HUApplicationManager : NSObject

@property (retain, nonatomic) NSHashTable *idleTimerDisabledRequesters; // ivar: _idleTimerDisabledRequesters
@property (readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (retain, nonatomic) NSHashTable *statusBarHidingRequesters; // ivar: _statusBarHidingRequesters
@property (retain, nonatomic) NSObject<HUStatusBarVisibilityHandling> *statusBarVisibilityHandler; // ivar: _statusBarVisibilityHandler
@property (nonatomic) BOOL wasStatusBarVisible; // ivar: _wasStatusBarVisible


+(id)sharedInstance;
-(BOOL)isIdleTimerDisabled;
-(id)init;
-(void)setIdleTimerDisabled:(BOOL)arg0 forRequester:(id)arg1 ;


@end


#endif