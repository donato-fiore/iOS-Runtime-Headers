// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARSERVERLISTENER_H
#define UISTATUSBARSERVERLISTENER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_workloop, OS_dispatch_mach;

#import <Foundation/Foundation.h>


@interface UIStatusBarServerListener : NSObject {
    NSMutableArray *_clientPorts;
    NSMutableArray *_publishers;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_mach> *_channel;
    ? _statusBarData;
    ? _composedStatusBarData;
    ? _overrides;
    *__CFDictionary _doubleHeightStatusStrings;
    *__CFDictionary _glowAnimationStates;
    NSMutableDictionary *_glowAnimationEndTimes;
    BOOL _composedStatusBarDataValid;
}




+(id)sharedInstance;
-(BOOL)_glowAnimationStateForStyle:(NSInteger)arg0 ;
-(BOOL)_permanentizeStatusBarOverrideData;
-(CGFloat)_glowAnimationEndTimeForStyle:(NSInteger)arg0 ;
-(NSUInteger)_styleOverrides;
-(id)_doubleHeightStatusStringForStyle:(NSInteger)arg0 ;
-(id)_publisherForPort:(unsigned int)arg0 ;
-(id)init;
-(struct ? *)_statusBarData;
-(struct ? *)_statusBarOverrideData;
-(void)_addClient:(unsigned int)arg0 ;
-(void)_addStatusBarItem:(int)arg0 forPublisher:(id)arg1 ;
-(void)_addStyleOverrides:(NSUInteger)arg0 forPublisher:(id)arg1 ;
-(void)_broadcastStatusBarDataWithActions:(int)arg0 animated:(BOOL)arg1 ;
-(void)_broadcastStyleOverrides;
-(void)_postDoubleHeightStatus:(char *)arg0 forStyle:(NSInteger)arg1 ;
-(void)_postGlowAnimationState:(BOOL)arg0 forStyle:(NSInteger)arg1 ;
-(void)_postStatusBarData:(struct ? *)arg0 actions:(int)arg1 animated:(BOOL)arg2 ;
-(void)_postStatusBarOverrideData:(struct ? *)arg0 ;
-(void)_removeAnimationEndTimesForOverrides:(NSUInteger)arg0 ;
-(void)_removeClient:(struct __CFMachPort *)arg0 ;
-(void)_removePublisher:(struct __CFMachPort *)arg0 ;
-(void)_removeStatusBarItem:(int)arg0 forPublisher:(id)arg1 ;
-(void)_removeStyleOverrides:(NSUInteger)arg0 forPublisher:(id)arg1 ;
-(void)_setAnimationEndTimesForOverrides:(NSUInteger)arg0 ;
-(void)async:(id)arg0 ;


@end


#endif