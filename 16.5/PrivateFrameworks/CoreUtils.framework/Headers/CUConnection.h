// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUCONNECTION_H
#define CUCONNECTION_H

@class NSString;
@protocol CUMessageable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUEndpoint.h"

@interface CUConnection : NSObject <CUMessageable>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) CUEndpoint *peerEndpoint; // ivar: _peerEndpoint


-(id)description;
-(id)init;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deregisterEventID:(id)arg0 ;
-(void)deregisterRequestID:(id)arg0 ;
-(void)invalidate;
-(void)registerEventID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;


@end


#endif