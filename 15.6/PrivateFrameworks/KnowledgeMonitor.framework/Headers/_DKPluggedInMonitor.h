// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKPLUGGEDINMONITOR_H
#define _DKPLUGGEDINMONITOR_H

@class DKMonitor;



@interface _DKPluggedInMonitor : DKMonitor

@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) int pluggedInToken; // ivar: _pluggedInToken


+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(BOOL)arg0 adapterType:(NSInteger)arg1 isWireless:(BOOL)arg2 ;
+(id)entitlements;
+(id)eventStream;
+(void)setIsPluggedIn:(BOOL)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)setCurrentState;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif