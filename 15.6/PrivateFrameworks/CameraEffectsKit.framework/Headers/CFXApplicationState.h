// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXAPPLICATIONSTATE_H
#define CFXAPPLICATIONSTATE_H


#import <Foundation/Foundation.h>


@interface CFXApplicationState : NSObject

@property (nonatomic) NSInteger applicationState; // ivar: _applicationState
@property (nonatomic) BOOL isRegisteredForEvents; // ivar: _isRegisteredForEvents


+(id)sharedInstance;
+(void)beginMonitoringApplicationState;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)dealloc;
-(void)registerForEvents;
-(void)unregisterForEvents;


@end


#endif