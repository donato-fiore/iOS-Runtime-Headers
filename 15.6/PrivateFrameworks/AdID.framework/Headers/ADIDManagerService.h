// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADIDMANAGERSERVICE_H
#define ADIDMANAGERSERVICE_H

@class ADSingleton, NSString, NSXPCListener, NSMutableArray;
@protocol ADIDManager_XPC, NSXPCListenerDelegate, OS_dispatch_queue;



@interface ADIDManagerService : ADSingleton <ADIDManager_XPC, NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_forceReconcileQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSMutableArray *reconcileArray; // ivar: _reconcileArray
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSUInteger)delayForNewForceReconcileRequest;
-(id)init;
-(void)forceReconcile:(id)arg0 ;


@end


#endif