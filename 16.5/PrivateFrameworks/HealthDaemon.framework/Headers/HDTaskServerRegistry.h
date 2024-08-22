// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDTASKSERVERREGISTRY_H
#define HDTASKSERVERREGISTRY_H

@class NSMutableDictionary, NSMapTable, NSMutableSet;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"

@interface HDTaskServerRegistry : NSObject {
    NSMutableDictionary *_taskServerClassesByTaskIdentifier;
    NSMapTable *_taskServersByUUID;
    NSMutableDictionary *_taskServerObserversByUUID;
    NSMutableSet *_loadedPluginURLs;
    os_unfair_lock_s _lock;
}


@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon


-(BOOL)loadTaskServersFromPluginAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)registerTaskServerClass:(Class)arg0 error:(*id)arg1 ;
-(BOOL)registerTaskServerClasses:(id)arg0 error:(*id)arg1 ;
-(BOOL)registerTaskServerClassesWithProvider:(id)arg0 error:(*id)arg1 ;
-(Class)_taskServerClassForIdentifier:(id)arg0 ;
-(id)createTaskServerEndpointForIdentifier:(id)arg0 taskUUID:(id)arg1 instanceUUID:(id)arg2 configuration:(id)arg3 client:(id)arg4 connectionQueue:(id)arg5 error:(*id)arg6 ;
-(id)initWithDaemon:(id)arg0 ;
-(id)taskServerForTaskUUID:(id)arg0 ;
-(void)addObserver:(id)arg0 forTaskServerUUID:(id)arg1 queue:(id)arg2 ;
-(void)didCreateTaskServer:(id)arg0 ;
-(void)removeObserver:(id)arg0 forTaskServerUUID:(id)arg1 ;
-(void)removeTaskServerObserver:(id)arg0 ;
-(void)taskServerDidInvalidate:(id)arg0 ;


@end


#endif