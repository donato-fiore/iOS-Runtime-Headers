// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSPROCESSOBSERVER_H
#define SOSPROCESSOBSERVER_H

@class BKSApplicationStateMonitor;
@protocol SOSProcessObserverDelegate;

#import <Foundation/Foundation.h>


@interface SOSProcessObserver : NSObject

@property (readonly, nonatomic) BKSApplicationStateMonitor *applicationMonitor; // ivar: _applicationMonitor
@property (nonatomic) BOOL cachedApplicationRunning; // ivar: _cachedApplicationRunning
@property (weak, nonatomic) NSObject<SOSProcessObserverDelegate> *delegate; // ivar: _delegate


+(BOOL)isApplicationStateRunning:(unsigned int)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)applicationMonitorStateDidChangeForBundleIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif