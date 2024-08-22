// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLSUPPRESSSCHOOLMODEASSERTIONMANAGER_H
#define SCLSUPPRESSSCHOOLMODEASSERTIONMANAGER_H

@class NSMutableSet, NSString, NSXPCListener, NSHashTable;
@protocol NSXPCListenerDelegate, SCLSuppressSchoolModeAssertionClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SCLSuppressSchoolModeAssertionManager : NSObject <NSXPCListenerDelegate, SCLSuppressSchoolModeAssertionClientDelegate>



@property (retain, nonatomic) NSMutableSet *acquiredClients; // ivar: _acquiredClients
@property (retain, nonatomic) NSMutableSet *clients; // ivar: _clients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (readonly, nonatomic) NSUInteger status;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithTargetQueue:(id)arg0 ;
-(struct os_state_data_s *)_stateDataWithHints:(struct os_state_hints_s *)arg0 ;
-(void)activate;
-(void)addObserver:(id)arg0 ;
-(void)clientDidAcquireAssertion:(id)arg0 ;
-(void)clientDidInvalidate:(id)arg0 ;
-(void)dealloc;
-(void)performObserverBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif