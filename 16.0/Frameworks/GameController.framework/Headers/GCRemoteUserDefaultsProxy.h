// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCREMOTEUSERDEFAULTSPROXY_H
#define GCREMOTEUSERDEFAULTSPROXY_H

@class NSMutableDictionary, NSString;
@protocol GCUserDefaults, OS_dispatch_queue, GCUserDefaultsXPCProxyServiceRemoteClientInterface;

#import <Foundation/Foundation.h>


@interface GCRemoteUserDefaultsProxy : NSObject <GCUserDefaults>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_observers;
    NSMutableDictionary *_clients;
}


@property (retain, nonatomic) NSObject<GCUserDefaultsXPCProxyServiceRemoteClientInterface> *activeClient; // ivar: _activeClient
@property (readonly, nonatomic) BOOL agentConnectionEstablished;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)boolForKey:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(NSInteger)integerForKey:(id)arg0 ;
-(float)floatForKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)consoleUserDidChange:(id)arg0 ;
-(void)observeUserDefaultsValueForKeyPath:(id)arg0 change:(id)arg1 ;
-(void)postInitialKVONotificationForObservation:(id)arg0 keyPath:(id)arg1 ;
-(void)refreshActiveClient;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 context:(*void)arg2 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setFloat:(float)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)userDefaultsCheckIn:(id)arg0 effectiveUserIdentifier:(unsigned int)arg1 ;


@end


#endif