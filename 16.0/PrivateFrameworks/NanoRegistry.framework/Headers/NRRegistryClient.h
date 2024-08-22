// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRREGISTRYCLIENT_H
#define NRREGISTRYCLIENT_H

@class NSMutableDictionary, NSMutableArray;
@protocol NRNSXPCConnectionProtocol;


#import "NRRegistry.h"

@interface NRRegistryClient : NRRegistry {
    NSMutableDictionary *_diffIndexObservers;
    BOOL _optimizeGetState;
    BOOL _outstandingRegistryQuery;
    int _devicesUpdateCounterNotifyToken_dispatch;
    int _devicesUpdateCounterNotifyToken_check;
    id<NRNSXPCConnectionProtocol> *_connection;
    NSUInteger _tokenValue;
    NSUInteger _lastDevicesUpdateCounterNotifyTokenValue;
    NSUInteger _backoffDuration;
    NSMutableArray *_registryQueryCompletionBlockEntries;
}


@property (readonly, retain, nonatomic) NSObject<NRNSXPCConnectionProtocol> *connection;
@property (readonly, nonatomic) NSUInteger devicesUpdateCounter;
@property (readonly, retain, nonatomic) NSObject<NRNSXPCConnectionProtocol> *rawConnection;


+(Class)proxyClass;
+(Class)xpcConnectionClass;
-(BOOL)daemonIdle;
-(id)addDiffIndexObserverWithWriteBlock:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(void)_connectToDaemon;
-(void)_grabRegistryWithReadBlock:(id)arg0 ;
-(void)_grabRegistryWithWriteBlockAsync:(id)arg0 ;
-(void)_queryDataAsyncIfNeededWithBlock:(id)arg0 ;
-(void)_warnAboutMissingEntitlement;
-(void)grabRegistryWithReadBlock:(id)arg0 ;
-(void)grabRegistryWithReadBlockAsync:(id)arg0 ;
-(void)grabRegistryWithWriteBlockAsync:(id)arg0 ;
-(void)invalidate;
-(void)removeDiffIndexObserver:(id)arg0 ;
-(void)setCollection:(id)arg0 ;
-(void)syncGrabRegistryWithReadBlock:(id)arg0 ;


@end


#endif