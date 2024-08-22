// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSDEPENDENCYPROVIDER_H
#define IDSDEPENDENCYPROVIDER_H

@class NSMutableDictionary, NSString;
@protocol IDSServiceLoader, IDSKeychainAdapter, IDSPushAdapter, IDSXPCAdapter;

#import <Foundation/Foundation.h>


@interface IDSDependencyProvider : NSObject <IDSServiceLoader, IDSKeychainAdapter, IDSPushAdapter, IDSXPCAdapter>

 {
    NSMutableDictionary *_registeredAdapters;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)XPCAdapter;
+(id)keychainAdapter;
+(id)pushAdapter;
+(id)registeredObjectForProtocol:(id)arg0 ;
+(id)serviceLoader;
+(id)sharedProvider;
+(id)systemMonitorAdapter;
+(id)userDefaults;
+(void)registerObject:(id)arg0 forProtocol:(id)arg1 ;
-(BOOL)getKeychainData:(*id)arg0 service:(id)arg1 account:(id)arg2 accessGroup:(id)arg3 error:(*int)arg4 ;
-(BOOL)removeKeychainDataOnService:(id)arg0 account:(id)arg1 error:(*int)arg2 ;
-(BOOL)setKeychainData:(id)arg0 service:(id)arg1 account:(id)arg2 accessGroup:(id)arg3 allowSync:(BOOL)arg4 error:(*int)arg5 ;
-(id)_init;
-(id)apsConnectionWithEnvironmentName:(id)arg0 namedDelegatePort:(id)arg1 enablePushDuringSleep:(BOOL)arg2 queue:(id)arg3 ;
// -(id)createServiceConnectionWithServiceName:(char *)arg0 invalidationHandler:(id)arg1 terminationHandler:(unk)arg2 peerEventHandler:(id)arg3 peerQueue:(unk)arg4  ;
// -(id)createSim2HostServiceConnectionWithServiceName:(char *)arg0 invalidationHandler:(id)arg1 terminationHandler:(unk)arg2 peerEventHandler:(id)arg3 peerQueue:(unk)arg4  ;
-(id)loadServiceDictionaries;
-(id)placeholderMachPort;
-(id)registeredObjectForProtocol:(id)arg0 ;
-(void)registerObject:(id)arg0 forProtocol:(id)arg1 ;


@end


#endif