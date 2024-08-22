// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSERVICEREQUESTER_H
#define GEOSERVICEREQUESTER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface GEOServiceRequester : NSObject {
    NSMapTable *_pendingRequests;
    os_unfair_lock_s _pendingRequestsLock;
}


@property (retain) Class operationClass; // ivar: _operationClass


-(id)_keyForRequest:(id)arg0 ;
-(id)_removeOperationForRequest:(id)arg0 ;
-(id)_validateResponse:(id)arg0 ;
-(id)init;
-(void)_addOperation:(id)arg0 forRequest:(id)arg1 ;
-(void)_cancelRequest:(id)arg0 ;
-(void)_startWithRequest:(id)arg0 traits:(id)arg1 auditToken:(id)arg2 config:(id)arg3 throttleToken:(id)arg4 completionHandler:(id)arg5 ;
// -(void)_startWithRequest:(id)arg0 traits:(id)arg1 auditToken:(id)arg2 config:(id)arg3 throttleToken:(id)arg4 willSendRequestHandler:(id)arg5 completionHandler:(unk)arg6  ;


@end


#endif