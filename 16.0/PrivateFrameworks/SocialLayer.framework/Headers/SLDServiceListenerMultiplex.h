// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDSERVICELISTENERMULTIPLEX_H
#define SLDSERVICELISTENERMULTIPLEX_H

@class NSString, NSMapTable;
@protocol NSXPCListenerDelegate, SLDServiceMultiplexDelegate;

#import <Foundation/Foundation.h>


@interface SLDServiceListenerMultiplex : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SLDServiceMultiplexDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *listenerToServiceTable; // ivar: _listenerToServiceTable
@property (retain, nonatomic) NSMapTable *serviceToConnectionsTable; // ivar: _serviceToConnectionsTable
@property (retain, nonatomic) NSMapTable *serviceToListenerTable; // ivar: _serviceToListenerTable
@property (readonly) Class superclass;


+(id)emptyMultiplex;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_listenerForService:(id)arg0 ;
-(id)endpointForServiceClass:(Class)arg0 ;
-(id)init;
-(void)_acceptConnection:(id)arg0 forService:(id)arg1 ;
-(void)_logFullDescription;
-(void)_notifyDelegateIfEmpty;
-(void)_service:(id)arg0 lostConnection:(id)arg1 ;


@end


#endif