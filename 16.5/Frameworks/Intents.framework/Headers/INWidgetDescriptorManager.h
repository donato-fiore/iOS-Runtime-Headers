// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INWIDGETDESCRIPTORMANAGER_H
#define INWIDGETDESCRIPTORMANAGER_H

@class CHSWidgetDescriptorProvider, NSMutableArray, NSString, NSSet;
@protocol CHSWidgetDescriptorProviderObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "INWatchdogTimer.h"

@interface INWidgetDescriptorManager : NSObject <CHSWidgetDescriptorProviderObserver>

 {
    CHSWidgetDescriptorProvider *_provider;
    BOOL _observing;
    NSMutableArray *_completionHandlers;
    INWatchdogTimer *_watchdogTimer;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *widgetDescriptors; // ivar: _widgetDescriptors


+(id)sharedManager;
-(id)init;
-(void)_notifyCompletionHandlersWithWidgetDescriptors:(id)arg0 ;
-(void)_startObservingDescriptors;
-(void)dealloc;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)getDescriptorForIntent:(id)arg0 completionHandler:(id)arg1 ;
-(void)getDescriptorsWithCompletionHandler:(id)arg0 ;


@end


#endif