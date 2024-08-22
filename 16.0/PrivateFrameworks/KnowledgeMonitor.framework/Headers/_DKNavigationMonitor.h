// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKNAVIGATIONMONITOR_H
#define _DKNAVIGATIONMONITOR_H

@class DKMonitor;



@interface _DKNavigationMonitor : DKMonitor

@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL navigating; // ivar: _navigating
@property (nonatomic) int startedToken; // ivar: _startedToken
@property (nonatomic) int stoppedToken; // ivar: _stoppedToken


+(id)entitlements;
+(id)eventStream;
+(void)setIsNavigating:(BOOL)arg0 ;
-(id)loadState;
-(void)deactivate;
-(void)dealloc;
-(void)saveState;
-(void)setNavigationStatus:(BOOL)arg0 ;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif