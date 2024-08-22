// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3MUSICLIBRARYACCOUNTCHANGEOBSERVERPROXY_H
#define ML3MUSICLIBRARYACCOUNTCHANGEOBSERVERPROXY_H

@class NSString, NSHashTable;
@protocol MLMediaLibraryAccountChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ML3MusicLibraryAccountChangeObserverProxy : NSObject <MLMediaLibraryAccountChangeObserver>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *readonlyObservers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSHashTable *weakObservers; // ivar: _weakObservers


+(id)sharedProxy;
-(id)_init;
-(void)addAccountChangeObserver:(id)arg0 ;
-(void)emergencyDisconnectWithCompletion:(id)arg0 ;
-(void)performDatabasePathChange:(id)arg0 completion:(id)arg1 ;
-(void)removeAccountChangeObserver:(id)arg0 ;
-(void)terminateForFailureToPerformDatabasePathChange;


@end


#endif