// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSSETTINGSSTORE_H
#define LSSETTINGSSTORE_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LSSettingsStore : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (readonly) NSMutableSet *observerSet; // ivar: _observerSet


+(id)sharedInstance;
-(BOOL)setUserElection:(unsigned char)arg0 forExtensionKey:(id)arg1 error:(*id)arg2 ;
-(id)_init;
-(id)addChangeObserver:(id)arg0 ;
-(id)settingsStoreConfigurationForProcessWithAuditToken:(struct ? )arg0 ;
-(unsigned char)userElectionForExtensionKey:(id)arg0 ;
-(void)removeChangeObserver:(id)arg0 ;


@end


#endif