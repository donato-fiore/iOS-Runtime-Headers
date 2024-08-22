// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKINCARMONITOR_H
#define _DKINCARMONITOR_H

@class DKMonitor;



@interface _DKInCarMonitor : DKMonitor

@property (nonatomic) BOOL connected; // ivar: _connected
@property (nonatomic) int connectedToken; // ivar: _connectedToken
@property (nonatomic) int disconnectedToken; // ivar: _disconnectedToken
@property (nonatomic) BOOL enabled; // ivar: _enabled


+(id)entitlements;
+(id)eventStream;
+(void)setIsConnected:(BOOL)arg0 ;
-(id)loadState;
-(void)deactivate;
-(void)dealloc;
-(void)saveState;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif