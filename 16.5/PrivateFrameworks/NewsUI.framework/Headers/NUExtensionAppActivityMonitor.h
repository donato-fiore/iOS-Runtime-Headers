// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUEXTENSIONAPPACTIVITYMONITOR_H
#define NUEXTENSIONAPPACTIVITYMONITOR_H

@class NSMutableSet, NSString, NSNotificationCenter, NSHashTable;
@protocol NUAppActivityMonitor;

#import <Foundation/Foundation.h>


@interface NUExtensionAppActivityMonitor : NSObject <NUAppActivityMonitor>



@property (readonly, nonatomic) NSMutableSet *backgroundObserverBlocks; // ivar: _backgroundObserverBlocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableSet *foregroundObserverBlocks; // ivar: _foregroundObserverBlocks
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableSet *windowBackgroundObserverBlocks; // ivar: _windowBackgroundObserverBlocks
@property (readonly, nonatomic) NSMutableSet *windowForegroundObserverBlocks; // ivar: _windowForegroundObserverBlocks


-(id)initWithNotificationCenter:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)dealloc;
-(void)performOnApplicationDidBecomeActive:(id)arg0 ;
-(void)performOnApplicationDidEnterBackground:(id)arg0 ;
-(void)performOnApplicationWillEnterForeground:(id)arg0 ;
-(void)performOnApplicationWindowDidBecomeBackground:(id)arg0 ;
-(void)performOnApplicationWindowDidBecomeForeground:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif