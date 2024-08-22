// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCIPCREMOTECONNECTION_H
#define _GCIPCREMOTECONNECTION_H

@class NSXPCConnection, NSArray;
@protocol _GCIPCConnection;

#import <Foundation/Foundation.h>


@interface _GCIPCRemoteConnection : NSObject <_GCIPCConnection>

 {
    uint8_t _invalid;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (copy) NSArray *interruptionHandlers; // ivar: _interruptionHandlers
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (copy) NSArray *invalidationHandlers; // ivar: _invalidationHandlers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConnection:(id)arg0 ;
-(NSUInteger)hash;
-(id)addInterruptionHandler:(id)arg0 ;
-(id)addInvalidationHandler:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)redactedDescription;
-(id)remoteProxy;
-(id)remoteProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteProxyWithErrorHandler:(id)arg0 ;
-(void)invalidate;
-(void)resume;
-(void)scheduleSendBarrierBlock:(id)arg0 ;
-(void)suspend;


@end


#endif