// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMREPOSITORY_H
#define EMREPOSITORY_H

@class EFFuture, Protocol;
@protocol EFScheduler;

#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"

@interface EMRepository : NSObject

@property (readonly) EMRemoteConnection *connection; // ivar: _connection
@property (readonly) EFFuture *interfaceFuture; // ivar: _interfaceFuture
@property (readonly) Protocol *interfaceProtocol; // ivar: _interfaceProtocol
@property (retain, nonatomic) NSObject<EFScheduler> *observerScheduler; // ivar: _observerScheduler


+(id)remoteInterface;
-(id)initForTesting;
-(id)initWithRemoteConnection:(id)arg0 ;
-(id)performQuery:(id)arg0 withObserver:(id)arg1 ;
-(id)trampoliningObserverForObserver:(id)arg0 ;
-(void)prepareRepositoryObjects:(id)arg0 ;
-(void)refreshQueryWithObserver:(id)arg0 ;


@end


#endif