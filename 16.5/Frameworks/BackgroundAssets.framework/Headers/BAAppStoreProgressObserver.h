// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BAAPPSTOREPROGRESSOBSERVER_H
#define BAAPPSTOREPROGRESSOBSERVER_H

@protocol BAAppStoreProgressObserverConfiguring;

#import <Foundation/Foundation.h>

#import "BAAppStoreProgressConfiguration.h"
#import "BAAgentSystemProxy.h"

@interface BAAppStoreProgressObserver : NSObject <BAAppStoreProgressObserverConfiguring>

 {
    os_unfair_lock_s _lock;
    BOOL _valid;
    BOOL _configuring;
    BOOL _observing;
    BAAppStoreProgressConfiguration *_configuration;
    BAAgentSystemProxy *_systemProxy;
}




+(id)new;
+(id)progressObserverWithConfiguration:(id)arg0 ;
-(id)init;
-(void)invalidate;
-(void)setAppBundleIdentifiers:(id)arg0 ;
-(void)setHandlerQueue:(id)arg0 ;
-(void)setUpdateHandler:(id)arg0 ;
-(void)updateConfiguration:(id)arg0 ;


@end


#endif