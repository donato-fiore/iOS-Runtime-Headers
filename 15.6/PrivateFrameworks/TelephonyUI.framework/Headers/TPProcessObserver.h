// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPPROCESSOBSERVER_H
#define TPPROCESSOBSERVER_H

@class BKSApplicationStateMonitor;
@protocol TPProcessObserverDelegate;

#import <Foundation/Foundation.h>


@interface TPProcessObserver : NSObject

@property (readonly, nonatomic) BKSApplicationStateMonitor *applicationMonitor; // ivar: _applicationMonitor
@property (nonatomic) BOOL cachedApplicationRunning; // ivar: _cachedApplicationRunning
@property (weak, nonatomic) NSObject<TPProcessObserverDelegate> *delegate; // ivar: _delegate


+(BOOL)isApplicationStateRunning:(unsigned int)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)applicationMonitorStateDidChangeForBundleIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif